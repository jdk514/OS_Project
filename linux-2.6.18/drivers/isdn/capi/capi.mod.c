#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
};

static const struct modversion_info ____versions[]
__attribute_used__
__attribute__((section("__versions"))) = {
	{ 0xb499ef18, "struct_module" },
	{ 0x96befe4d, "no_llseek" },
	{ 0x72216fa9, "param_get_uint" },
	{ 0x8abac70a, "param_set_uint" },
	{ 0xed061606, "capi20_manufacturer" },
	{ 0x7dceceac, "capable" },
	{ 0x31c24aa4, "capi20_isinstalled" },
	{ 0x7e6f1307, "capi20_get_manufacturer" },
	{ 0xe19a11ac, "capi20_get_profile" },
	{ 0x7a33596c, "capi20_get_serial" },
	{ 0x14f2aa5a, "capi20_get_version" },
	{ 0xd3cdbdbe, "capi20_register" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0xd1913548, "tty_wakeup" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0xb5ff2338, "tty_register_driver" },
	{ 0x70b3c64, "tty_set_operations" },
	{ 0x2e60bace, "memcpy" },
	{ 0x89ac5254, "tty_std_termios" },
	{ 0x9b22a5d, "alloc_tty_driver" },
	{ 0xd10fc04d, "class_device_create" },
	{ 0xc83decb4, "class_create" },
	{ 0x1e8e5fac, "register_chrdev" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x3246810d, "n_tty_ioctl" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xa3e9fd5e, "interruptible_sleep_on" },
	{ 0x13c12a56, "skb_queue_tail" },
	{ 0xe3038592, "skb_under_panic" },
	{ 0x3a233a33, "skb_dequeue" },
	{ 0xacd81448, "skb_queue_head" },
	{ 0x7ebe04c0, "tty_ldisc_deref" },
	{ 0xa4cfe53f, "capi20_put_message" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x548de514, "__alloc_skb" },
	{ 0xb946bdb5, "tty_ldisc_ref" },
	{ 0xd0bc06ce, "capifs_new_ncci" },
	{ 0xaf5f9c5f, "nonseekable_open" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x96b27088, "__down_failed" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x6f3ef8e2, "capi20_release" },
	{ 0x9785f810, "tty_hangup" },
	{ 0x2c54c957, "capifs_free_ncci" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x37a0cba, "kfree" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xf21a8115, "skb_queue_purge" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x52c0a61d, "_write_unlock_irqrestore" },
	{ 0x3093180f, "_write_lock_irqsave" },
	{ 0x81cfa94c, "put_tty_driver" },
	{ 0x1b7d4074, "printk" },
	{ 0x4171b957, "tty_unregister_driver" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0x93538172, "class_destroy" },
	{ 0x27514859, "class_device_destroy" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x3d7c39ea, "_read_lock" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=kernelcapi,capifs";


MODULE_INFO(srcversion, "BD103E00E9A6DD148341CD4");
