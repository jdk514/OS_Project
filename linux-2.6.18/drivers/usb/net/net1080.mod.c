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
	{ 0x6b2dc060, "dump_stack" },
	{ 0x1b7d4074, "printk" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0xe3038592, "skb_under_panic" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0xc3c79136, "skb_copy_expand" },
	{ 0x8235805b, "memmove" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x5eea5f42, "usb_deregister" },
	{ 0x94a00323, "usbnet_get_endpoints" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x1e62b30a, "usb_alloc_urb" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v0525p1080d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06D0p0622d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "686F6E55F5A6B3231E99CED");
