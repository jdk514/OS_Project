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
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x66eb93e, "usb_serial_register" },
	{ 0x4e7ddbed, "usb_serial_deregister" },
	{ 0x5eea5f42, "usb_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v0C88p17DAd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0F3Dp0112d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1410p1110d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p0112d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1199p0218d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "552F6DE9F07307DCCBD71C7");
