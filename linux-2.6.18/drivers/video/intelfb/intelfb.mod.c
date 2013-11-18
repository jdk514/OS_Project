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
	{ 0x4c3af445, "__request_region" },
	{ 0x65e2aa95, "agp_backend_release" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xdc3eaf70, "iomem_resource" },
	{ 0xf50616d3, "framebuffer_release" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x56179c5f, "mtrr_add" },
	{ 0x9aafc56, "agp_copy_info" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf4c29e1f, "cfb_fillrect" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x3b5ad24f, "fb_firmware_edid" },
	{ 0x7d11c268, "jiffies" },
	{ 0x3da7382a, "pci_find_slot" },
	{ 0xaa136450, "param_get_charp" },
	{ 0x65239e29, "agp_unbind_memory" },
	{ 0x70f77954, "agp_allocate_memory" },
	{ 0x16e4d5c0, "cfb_imageblit" },
	{ 0x1b7d4074, "printk" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x5152e605, "memcmp" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0xfa277127, "register_framebuffer" },
	{ 0x1322f1e6, "agp_free_memory" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x3762cb6e, "ioremap_nocache" },
	{ 0xc429e0c6, "fb_find_mode" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0xe7bf7d05, "screen_info" },
	{ 0x59981248, "pci_bus_read_config_dword" },
	{ 0xff9ca065, "fb_edid_to_monspecs" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0x8fc05b26, "agp_backend_acquire" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x3fb701e1, "framebuffer_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0x272d394e, "mtrr_del" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0x4c643652, "cfb_copyarea" },
	{ 0x19c9597c, "agp_bind_memory" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x6a843e55, "unregister_framebuffer" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=cfbfillrect,cfbimgblt,cfbcopyarea";

MODULE_ALIAS("pci:v00008086d00003577sv*sd*bc03sc00i*");
MODULE_ALIAS("pci:v00008086d00002562sv*sd*bc03sc00i*");
MODULE_ALIAS("pci:v00008086d00003582sv*sd*bc03sc00i*");
MODULE_ALIAS("pci:v00008086d00002572sv*sd*bc03sc00i*");
MODULE_ALIAS("pci:v00008086d00002582sv*sd*bc03sc00i*");
MODULE_ALIAS("pci:v00008086d00002592sv*sd*bc03sc00i*");
MODULE_ALIAS("pci:v00008086d00002772sv*sd*bc03sc00i*");
MODULE_ALIAS("pci:v00008086d000027A2sv*sd*bc03sc00i*");

MODULE_INFO(srcversion, "41BC1E77803A890A78F52A6");
