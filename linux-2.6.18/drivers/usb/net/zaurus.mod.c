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
	{ 0x21f9c0d7, "usbnet_cdc_unbind" },
	{ 0xa48a8435, "usbnet_resume" },
	{ 0x210c12bb, "usbnet_suspend" },
	{ 0x6cd92022, "usbnet_disconnect" },
	{ 0x51d0b431, "usbnet_probe" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0xc3c79136, "skb_copy_expand" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x5eea5f42, "usb_deregister" },
	{ 0x4422cc14, "usbnet_generic_cdc_bind" },
	{ 0x1b7d4074, "printk" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x94a00323, "usbnet_get_endpoints" },
	{ 0x5152e605, "memcmp" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=cdc_ether,usbnet";

MODULE_ALIAS("usb:v04DDp8004d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v04DDp8005d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v04DDp8006d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v04DDp8007d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v04DDp9031d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v04DDp9032d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v04DDp9050d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Aip00*");
MODULE_ALIAS("usb:v07B4p0F02d*dc*dsc*dp*ic02isc06ip00*");

MODULE_INFO(srcversion, "658CD1D08C643C5B5B3DCBB");
