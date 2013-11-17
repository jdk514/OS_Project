/*
 * Here's a sample kernel module showing the use of jprobes to dump
 * the arguments of do_fork().
 *
 * For more information on theory of operation of jprobes, see
 * Documentation/kprobes.txt
 *
 * Build and insert the kernel module as done in the kprobe example.
 * You will see the trace data in /var/log/messages and on the
 * console whenever do_fork() is invoked to create a new process.
 * (Some messages may be suppressed if syslogd is configured to
 * eliminate duplicate messages.)
 */

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/kprobes.h>

/*
 * Jumper probe for do_fork.
 * Mirror principle enables access to arguments of the probed routine
 * from the probe handler.
 */

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
