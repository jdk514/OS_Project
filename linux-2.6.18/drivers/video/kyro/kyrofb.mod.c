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
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0xf50616d3, "framebuffer_release" },
	{ 0x56179c5f, "mtrr_add" },
	{ 0xf4c29e1f, "cfb_fillrect" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0x16e4d5c0, "cfb_imageblit" },
	{ 0x1b7d4074, "printk" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0xfa277127, "register_framebuffer" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x3762cb6e, "ioremap_nocache" },
	{ 0xc429e0c6, "fb_find_mode" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x3fb701e1, "framebuffer_alloc" },
	{ 0x2e60bace, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0x272d394e, "mtrr_del" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x4c643652, "cfb_copyarea" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x6a843e55, "unregister_framebuffer" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=cfbfillrect,cfbimgblt,cfbcopyarea";

MODULE_ALIAS("pci:v0000104Ad00000010sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "66725A61AFEC41A7FDD49E6");
