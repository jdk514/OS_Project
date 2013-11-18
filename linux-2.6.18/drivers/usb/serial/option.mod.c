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
	{ 0x37a0cba, "kfree" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0xe43d1a87, "usb_clear_halt" },
	{ 0x9785f810, "tty_hangup" },
	{ 0x8500dcf9, "usb_unlink_urb" },
	{ 0x7d11c268, "jiffies" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x66eb93e, "usb_serial_register" },
	{ 0x1b7d4074, "printk" },
	{ 0x41d418f, "tty_flip_buffer_push" },
	{ 0xf60c8df5, "tty_insert_flip_string" },
	{ 0x441ce43c, "tty_buffer_request_room" },
	{ 0xf2db5ecc, "usb_serial_port_softint" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x1e62b30a, "usb_alloc_urb" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0x4e7ddbed, "usb_serial_deregister" },
	{ 0x5eea5f42, "usb_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v0AF0p5000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0AF0p6000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0AF0p6300d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0AF0p6500d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0AF0p6600d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v12D1p1001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0F3Dp0112d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1410p1400d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v16D5p6501d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "4EDA6DA85084FF8CE01B91D");
