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
	{ 0x5418d52a, "param_get_ushort" },
	{ 0xc4c5509d, "param_set_ushort" },
	{ 0xf465b72a, "param_get_byte" },
	{ 0x5ad53dbc, "param_set_byte" },
	{ 0x6f7d41a3, "usbatm_usb_disconnect" },
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x178b9fcb, "usb_set_interface" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0xf5b66452, "usb_driver_claim_interface" },
	{ 0xb689b091, "usb_altnum_to_altsetting" },
	{ 0xb3fc97e2, "usb_driver_release_interface" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x1b7d4074, "printk" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0xa418eb4a, "usbatm_usb_probe" },
	{ 0x5eea5f42, "usb_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=usbatm";


MODULE_INFO(srcversion, "654DE66933ACF669AB1DE6C");
