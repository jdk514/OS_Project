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
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x8cdbcccf, "usb_register_dev" },
	{ 0x1e62b30a, "usb_alloc_urb" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0x4987fb1b, "usb_find_interface" },
	{ 0xaf5f9c5f, "nonseekable_open" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x4292364c, "schedule" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x625acc81, "__down_failed_interruptible" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x3226577c, "usb_deregister_dev" },
	{ 0x96b27088, "__down_failed" },
	{ 0xda4008e6, "cond_resched" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x7d11c268, "jiffies" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0x5eea5f42, "usb_deregister" },
	{ 0x1b7d4074, "printk" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0694p0001d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "81EF464E1FF5B55AFCE47C2");
