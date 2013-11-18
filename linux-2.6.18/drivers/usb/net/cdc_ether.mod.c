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
	{ 0x51d0b431, "usbnet_probe" },
	{ 0xc767785d, "netif_carrier_on" },
	{ 0x6cd92022, "usbnet_disconnect" },
	{ 0xa99d5102, "netif_carrier_off" },
	{ 0x11075db7, "usb_string" },
	{ 0x8d3894f2, "_ctype" },
	{ 0x5eea5f42, "usb_deregister" },
	{ 0x1b7d4074, "printk" },
	{ 0x94a00323, "usbnet_get_endpoints" },
	{ 0xf5b66452, "usb_driver_claim_interface" },
	{ 0x210c12bb, "usbnet_suspend" },
	{ 0xb3fc97e2, "usb_driver_release_interface" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0xb4cfa53e, "usb_ifnum_to_if" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v04DDp8004d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v04DDp8005d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v04DDp8006d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v04DDp8007d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v04DDp9031d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v04DDp9032d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v04DDp9050d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v07B4p0F02d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc06ip00*");

MODULE_INFO(srcversion, "F088990B8957CAC7892C816");
