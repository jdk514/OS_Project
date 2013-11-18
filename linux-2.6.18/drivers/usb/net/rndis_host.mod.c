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
	{ 0xf93cb7da, "skb_clone" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xb3fc97e2, "usb_driver_release_interface" },
	{ 0x4422cc14, "usbnet_generic_cdc_bind" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x5eea5f42, "usb_deregister" },
	{ 0x21f9c0d7, "usbnet_cdc_unbind" },
	{ 0x37a0cba, "kfree" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1b7d4074, "printk" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0xc3c79136, "skb_copy_expand" },
	{ 0x8235805b, "memmove" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=usbnet,cdc_ether";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ipFF*");

MODULE_INFO(srcversion, "C57AA6E7B460108591BADE3");
