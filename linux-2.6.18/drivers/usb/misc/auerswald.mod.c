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
	{ 0xaf5f9c5f, "nonseekable_open" },
	{ 0x4987fb1b, "usb_find_interface" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0x11075db7, "usb_string" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x8cdbcccf, "usb_register_dev" },
	{ 0x4292364c, "schedule" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x625acc81, "__down_failed_interruptible" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x3226577c, "usb_deregister_dev" },
	{ 0x96b27088, "__down_failed" },
	{ 0xda4008e6, "cond_resched" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x8500dcf9, "usb_unlink_urb" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x1e62b30a, "usb_alloc_urb" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x1b7d4074, "printk" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x5eea5f42, "usb_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v09BFp00C0d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v09BFp00DBd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v09BFp00DCd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v09BFp00DDd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v09BFp00F1d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v09BFp00F2d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "CEEE83CAC1982620A947271");
