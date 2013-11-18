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
	{ 0x68e0d967, "device_create_file" },
	{ 0x8397630e, "usb_buffer_alloc" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x1e62b30a, "usb_alloc_urb" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x4292364c, "schedule" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xa13798f8, "printk_ratelimit" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0x4987fb1b, "usb_find_interface" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0xd509b8b4, "usb_buffer_free" },
	{ 0x96b27088, "__down_failed" },
	{ 0xda4008e6, "cond_resched" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x845b7a76, "device_remove_file" },
	{ 0x3226577c, "usb_deregister_dev" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x1b7d4074, "printk" },
	{ 0x178b9fcb, "usb_set_interface" },
	{ 0x5eea5f42, "usb_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v*p*d*dc07dsc01dp01ic*isc*ip*");
MODULE_ALIAS("usb:v*p*d*dc07dsc01dp02ic*isc*ip*");
MODULE_ALIAS("usb:v*p*d*dc07dsc01dp03ic*isc*ip*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic07isc01ip01*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic07isc01ip02*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic07isc01ip03*");

MODULE_INFO(srcversion, "EB13EFCF52F1F48CCBD08A4");
