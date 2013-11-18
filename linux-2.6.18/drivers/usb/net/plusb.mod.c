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
	{ 0xa48a8435, "usbnet_resume" },
	{ 0x210c12bb, "usbnet_suspend" },
	{ 0x6cd92022, "usbnet_disconnect" },
	{ 0x51d0b431, "usbnet_probe" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x5eea5f42, "usb_deregister" },
	{ 0x6fbda80c, "usb_control_msg" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v067Bp0000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v067Bp0001d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "29B9C0528A8F91050FD8712");
