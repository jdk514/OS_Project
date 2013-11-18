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
	{ 0xfa55c3a6, "usbnet_skb_return" },
	{ 0x548de514, "__alloc_skb" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x5eea5f42, "usb_deregister" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0xe3038592, "skb_under_panic" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0xc3c79136, "skb_copy_expand" },
	{ 0x8235805b, "memmove" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v05E3p0502d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "FDFD235F4900672B5141F06");
