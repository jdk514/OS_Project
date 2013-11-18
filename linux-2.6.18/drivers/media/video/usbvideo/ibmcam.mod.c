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
	{ 0xbaae3277, "usbvideo_RegisterVideoDevice" },
	{ 0xd917ead, "usbvideo_AllocateDevice" },
	{ 0xd1bb972d, "usbvideo_TestPattern" },
	{ 0x54ded406, "RingQueue_Dequeue" },
	{ 0xe43d1a87, "usb_clear_halt" },
	{ 0x1b7d4074, "printk" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0xdd181f1f, "usbvideo_register" },
	{ 0xc0011517, "usbvideo_DeinterlaceFrame" },
	{ 0xd03fa8f1, "usbvideo_Deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=usbvideo";

MODULE_ALIAS("usb:v0545p8080d0002dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0545p8080d030[10-9]dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0545p8080d0301dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0545p8002d030[10-9]dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0545p800Cd030[10-9]dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0545p800Dd030[10-9]dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "4D9E1DBA92478C6568CD167");
