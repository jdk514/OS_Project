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
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x8cdbcccf, "usb_register_dev" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xbb7ca41d, "usb_bulk_msg" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x9941ccb8, "free_pages" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0x107d6ba3, "__get_free_pages" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x37a0cba, "kfree" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x96b27088, "__down_failed" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x3226577c, "usb_deregister_dev" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x1b7d4074, "printk" },
	{ 0x5eea5f42, "usb_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0841p0001d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "9639C69549E9B70CBF16BFA");
