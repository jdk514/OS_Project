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
	{ 0xf7013d4e, "ethtool_op_get_link" },
	{ 0x31cceca, "usbnet_set_msglevel" },
	{ 0x3c3ade5a, "usbnet_get_msglevel" },
	{ 0xfa55c3a6, "usbnet_skb_return" },
	{ 0xf93cb7da, "skb_clone" },
	{ 0xb16b8e31, "mii_ethtool_sset" },
	{ 0x375cd688, "mii_ethtool_gset" },
	{ 0xbaeb160c, "bitreverse" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0xe3038592, "skb_under_panic" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0xc3c79136, "skb_copy_expand" },
	{ 0x8235805b, "memmove" },
	{ 0x7f374097, "mii_nway_restart" },
	{ 0xf9a482f9, "msleep" },
	{ 0x94a00323, "usbnet_get_endpoints" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x5eea5f42, "usb_deregister" },
	{ 0xa99d5102, "netif_carrier_off" },
	{ 0x7f3d1cda, "usbnet_defer_kevent" },
	{ 0xc767785d, "netif_carrier_on" },
	{ 0x1e5b7e01, "generic_mii_ioctl" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x1e62b30a, "usb_alloc_urb" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x1b7d4074, "printk" },
	{ 0xb6d561e6, "usbnet_get_drvinfo" },
	{ 0x6fbda80c, "usb_control_msg" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=usbnet,mii";

MODULE_ALIAS("usb:v077Bp2226d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0846p1040d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p1A00d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B95p1720d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p420Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v08DDp90FFd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0557p2009d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0411p003Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v6189p182Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07AAp0017d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1189p0893d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1631p6200d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B95p7720d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B95p1780d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v13B1p0018d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1557p7720d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "8F01CC55188D26C9E2DFFAE");
