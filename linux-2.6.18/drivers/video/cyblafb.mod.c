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
	{ 0xaa136450, "param_get_charp" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x16e4d5c0, "cfb_imageblit" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xfa277127, "register_framebuffer" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x3762cb6e, "ioremap_nocache" },
	{ 0x4c3af445, "__request_region" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x2e60bace, "memcpy" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x3fb701e1, "framebuffer_alloc" },
	{ 0x1b7d4074, "printk" },
	{ 0xf50616d3, "framebuffer_release" },
	{ 0x37a0cba, "kfree" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0xdc3eaf70, "iomem_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0x6a843e55, "unregister_framebuffer" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=cfbimgblt";

MODULE_ALIAS("pci:v00001023d00008500sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A17F0EA8BED7714E74EDECD");
