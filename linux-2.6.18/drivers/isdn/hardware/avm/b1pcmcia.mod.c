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
	{ 0x3da60680, "attach_capi_ctr" },
	{ 0x7c376ed0, "b1_interrupt" },
	{ 0x5eab4877, "b1_send_message" },
	{ 0x11d3a9e4, "b1ctl_read_proc" },
	{ 0x9f823278, "register_capi_driver" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x38f76413, "b1_release_appl" },
	{ 0x1447f7a9, "b1_reset_ctr" },
	{ 0x1b7d4074, "printk" },
	{ 0x4403fcf, "unregister_capi_driver" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xb1582a8b, "b1_free_card" },
	{ 0xe29e576e, "b1_load_firmware" },
	{ 0x26e96637, "request_irq" },
	{ 0x6d7d8e8d, "b1_register_appl" },
	{ 0xdfd28376, "b1_detect" },
	{ 0xc7524ec8, "b1_getrevision" },
	{ 0x41b3d0a1, "detach_capi_ctr" },
	{ 0x3e90144d, "b1_alloc_card" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=kernelcapi,b1";


MODULE_INFO(srcversion, "BD15173D4A8500F27571482");
