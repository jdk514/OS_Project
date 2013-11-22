#include "chardev.h"

/* Globals localized to file (by use of static */
static int Major;		/* assigned to device driver */
static char msg[BUF_LEN];	/* a stored message */

static struct file_operations fops = {
	.read = device_read,
	.write = device_write,
	.open = device_open,
	.release = device_release
};

/* implement queue using singly linked list */

/* 
 * struct for node in the queue
 */
static struct request{
	 /* client information */
 	char fd[BUF_LEN];
 	/* pointer to the next node */
 	struct request* next;
};

/* initialize the queue */
static struct request* requests = NULL;

static int device_open(struct inode *inode, struct file *file)
{
	try_module_get(THIS_MODULE);
	return 0;
}


static int device_release(struct inode *inode, struct file *file)
{
	/* node for removing from queue */
	/*struct request* temp;*
	while(requests != NULL){*/
		/* remove the node */
		/*temp = requests;
		requests = requests->next;
		kfree(temp);
	}*/

	module_put(THIS_MODULE);
	return 0;
}

static void kernel_device_write(int fd){
	//sprintf - push int into char[]
	sprintf(msg, "%d", fd);
	printk("We were able to write %s to the chardev\n", msg);
}

/* Called when a process writes to dev file: echo "hi" > /dev/hello */
static ssize_t device_write(struct file *filp, const char *buff,
			    size_t len, loff_t * off)
{
	int copy_len = len > BUF_LEN ? BUF_LEN : len;
	unsigned long amnt_copied = 0;

	/* counter variable */
	int i;

	/* NOTE: copy_from_user returns the amount of bytes _not_ copied */
	amnt_copied = copy_from_user(msg, buff, copy_len);

	/* allocate space for a new node*/
	struct request* new = kmalloc(sizeof(struct request), GFP_KERNEL);
	printk("msg's value is %s\n", msg);
	/* set the fd of the new node */
	for (i=0; i<BUF_LEN; i++) {
		new->fd[i] = msg[i];
	}
	printk("request is %s\n", new->fd);
	/* add the node to the head of the list */
	new->next = requests;
	requests = new;
	printk("linked list head is %s\n", requests->fd);

	if (copy_len == amnt_copied)
		return -EINVAL;

	return copy_len - amnt_copied;
}

static ssize_t device_read(struct file *filp, char *buffer, size_t len,
			   loff_t * offset)
{

	/* append G33478383 (GWID) to name */

	unsigned long amnt_copied;
	int amnt_left = BUF_LEN - *offset;
	char *copy_position = msg + *offset;
	int copy_len = len > amnt_left ? amnt_left : len;
	//strcat(msg, " G33478383");
	/* counter variable */
	int i;
	/* node for removing from queue */
	struct request* temp;

	/* are we at the end of the buffer? */
	if (amnt_left <= 0)
		return 0;

	/* if there are requests to process */
	if (requests != NULL) {
		/* set the msg to the fd */
		for (i=0; i<BUF_LEN; i++) {
			msg[i] = requests->fd[i];
		}
		/* remove the node */
		temp = requests;
		requests = requests->next;
		kfree(temp);
	}
	else{
		/* else return 0 */
		i = 0;
		sprintf(msg, "%d", i);
	}
	printk("%s\n",msg);

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
