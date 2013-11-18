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
	{ 0x3aad8346, "usb_serial_disconnect" },
	{ 0x6c9c6435, "usb_serial_probe" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x37a0cba, "kfree" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x66eb93e, "usb_serial_register" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0x1b7d4074, "printk" },
	{ 0x4e7ddbed, "usb_serial_deregister" },
	{ 0x5eea5f42, "usb_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v050Dp0103d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v056Cp8007d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0565p0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0921p1000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0921p1200d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v050Dp1203d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "03145EA4F5631A264D15230");
