#include "chardev.h"
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/kprobes.h>

/* Globals localized to file (by use of static */
static int Major;		/* assigned to device driver */
static char msg[BUF_LEN];	/* a stored message */

static struct request *task_queue = NULL;		//head of linked_list for mode 5 & 6

//struct used to send requests to threads
static struct request {
	char fd[BUF_LEN];
	struct request *next;
};

static struct file_operations fops = {
	.read = device_read,
	.write = device_write,
	.open = device_open,
	.release = device_release
};

static int device_open(struct inode *inode, struct file *file)
{
	try_module_get(THIS_MODULE);
	return 0;
}

static int device_release(struct inode *inode, struct file *file)
{
	module_put(THIS_MODULE);
	//deallocate the space for the head
	return 0;
}

/* Called when a process writes to dev file: echo "hi" > /dev/hello */
static ssize_t device_write(struct file *filp, const char *buff,
			    size_t len, loff_t * off)
{
	int i;
	int copy_len = len > BUF_LEN ? BUF_LEN : len;
	unsigned long amnt_copied = 0;

	for (i=0; i<BUF_LEN; i++) {
		msg[i] = 0;
	}

	/* NOTE: copy_from_user returns the amount of bytes _not_ copied */
	amnt_copied = copy_from_user(msg, buff, copy_len);
	if (copy_len == amnt_copied)
		return -EINVAL;
	struct request *new_request = kmalloc(sizeof(struct request), GFP_KERNEL);
	printk("msg's value is %s\n", msg);
	for (i=0; i<BUF_LEN; i++) {
		new_request->fd[i] = msg[i];
	}
	new_request->next = task_queue;
	task_queue = new_request;
	//create linked list, add (int) msg to the linked list
	return copy_len - amnt_copied;
}

static ssize_t device_read(struct file *filp, char *buffer, size_t len,
			   loff_t * offset)
{
	int i;
	unsigned long amnt_copied;
	int amnt_left = BUF_LEN - *offset;
	char *copy_position = msg + *offset;
	int copy_len = len > amnt_left ? amnt_left : len;
	struct request *temp;


	/* are we at the end of the buffer? */
	if (amnt_left <= 0)
		return 0;
	
	printk("task_queue head is %s and next is %s\n", task_queue->fd, task_queue->next->fd);
	if (task_queue != NULL) {
		for (i=0; i<BUF_LEN; i++) {
			msg[i] = task_queue->fd[i];
		}
		temp = task_queue;
		task_queue = temp->next;
		kfree(temp);
	} else {
		msg[0] = 0;
	}

	/* NOTE: copy_to_user returns the amount of bytes _not_ copied */
	amnt_copied = copy_to_user(buffer, copy_position, copy_len);
	if (copy_len == amnt_copied)
		return -EINVAL;

	/* adjust the offset for this process */
	*offset += copy_len;

	return copy_len - amnt_copied;
}

int init_module(void)
{
	Major = register_chrdev(0, DEVICE_NAME, &fops);

	if (Major < 0) {
		printk(KERN_ALERT "Failed to register char device.\n");
		return Major;
	}

	memset(msg, '+', BUF_LEN);
	printk(KERN_INFO "chardev is assigned to major number %d.\n",
	       Major);

	return 0;
}
void cleanup_module(void)
{
	int ret = unregister_chrdev(Major, DEVICE_NAME);
	if (ret < 0)
		printk(KERN_ALERT "Error in unregister_chrdev: %d\n", ret);
}

/* Proxy routine having the same arguments as actual do_fork() routine */
static ssize_t jsys_write(unsigned int fd, const char * buf, size_t count)
{
  printk(KERN_INFO "jprobe: sys_write fd is %d, buffer is %s, and size_t is %d",
         fd, *buf, count);

  /* Always end with a call to jprobe_return(). */
  jprobe_return();
  return 0;
}

static struct jprobe my_jprobe = {
  .entry      = jsys_write,
  .kp = {
    .symbol_name  = "sys_write",
  },
};

static int __init jprobe_init(void)
{
  int ret;

  ret = register_jprobe(&my_jprobe);
  if (ret < 0) {
    printk(KERN_INFO "register_jprobe failed, returned %d\n", ret);
    return -1;
  }
  printk(KERN_INFO "Planted jprobe at %p, handler addr %p\n",
         my_jprobe.kp.addr, my_jprobe.entry);
  return 0;
}

static void __exit jprobe_exit(void)
{
  unregister_jprobe(&my_jprobe);
  printk(KERN_INFO "jprobe at %p unregistered\n", my_jprobe.kp.addr);
}

module_init(jprobe_init)
module_exit(jprobe_exit)
MODULE_LICENSE("GPL");
