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
	{ 0x1e62b30a, "usb_alloc_urb" },
	{ 0xf9a482f9, "msleep" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x66eb93e, "usb_serial_register" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0x41d418f, "tty_flip_buffer_push" },
	{ 0xf60c8df5, "tty_insert_flip_string" },
	{ 0x441ce43c, "tty_buffer_request_room" },
	{ 0x1b7d4074, "printk" },
	{ 0x4e7ddbed, "usb_serial_deregister" },
	{ 0x5eea5f42, "usb_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v0D46p2011d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0D46p2012d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0D46p0078d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0D46p0081d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "4F3818A7891B0D2AD103D4F");
