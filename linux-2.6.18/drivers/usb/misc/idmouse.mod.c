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
	{ 0x505ec883, "dev_driver_string" },
	{ 0x8cdbcccf, "usb_register_dev" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xbb7ca41d, "usb_bulk_msg" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0x4987fb1b, "usb_find_interface" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x1b7d4074, "printk" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x3226577c, "usb_deregister_dev" },
	{ 0x96b27088, "__down_failed" },
	{ 0xda4008e6, "cond_resched" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x5eea5f42, "usb_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0681p0005d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0681p0010d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "F8C42622A4E6DB30F9EF747");
