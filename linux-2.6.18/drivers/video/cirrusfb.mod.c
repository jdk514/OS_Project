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
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xedc03953, "iounmap" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf4c29e1f, "cfb_fillrect" },
	{ 0x4c643652, "cfb_copyarea" },
	{ 0x16e4d5c0, "cfb_imageblit" },
	{ 0xf50616d3, "framebuffer_release" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0xfa277127, "register_framebuffer" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x2e60bace, "memcpy" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x4c3af445, "__request_region" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0x3fb701e1, "framebuffer_alloc" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x1b7d4074, "printk" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0x6a843e55, "unregister_framebuffer" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=cfbfillrect,cfbcopyarea,cfbimgblt";

MODULE_ALIAS("pci:v00001013d000000ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d000000A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d000000A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d000000A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d00001202sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d00000038sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d000000BCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d000000B8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d000000D0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d000000D4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d000000D6sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "EB7B5BBCB269E7A633BAE53");
