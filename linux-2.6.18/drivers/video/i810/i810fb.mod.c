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
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0x65e2aa95, "agp_backend_release" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xdc3eaf70, "iomem_resource" },
	{ 0xf50616d3, "framebuffer_release" },
	{ 0x3154a9fe, "fb_find_best_display" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x5cca4df3, "i2c_transfer" },
	{ 0x6d990e2b, "fb_add_videomode" },
	{ 0x56179c5f, "mtrr_add" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf4c29e1f, "cfb_fillrect" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x3b5ad24f, "fb_firmware_edid" },
	{ 0x865caf3e, "fb_set_suspend" },
	{ 0xaa136450, "param_get_charp" },
	{ 0x65239e29, "agp_unbind_memory" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0x70f77954, "agp_allocate_memory" },
	{ 0x49653ec1, "pci_restore_state" },
	{ 0x16e4d5c0, "cfb_imageblit" },
	{ 0x1b7d4074, "printk" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0xfa277127, "register_framebuffer" },
	{ 0xaaee7e8f, "i2c_bit_del_bus" },
	{ 0x461c6d01, "fb_var_to_videomode" },
	{ 0x1322f1e6, "agp_free_memory" },
	{ 0x686de290, "restore_vga" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x3762cb6e, "ioremap_nocache" },
	{ 0xc429e0c6, "fb_find_mode" },
	{ 0xe7a2620e, "save_vga" },
	{ 0xf2707cb1, "fb_videomode_to_modelist" },
	{ 0x52f6f10e, "fb_get_mode" },
	{ 0x434fa55c, "release_console_sem" },
	{ 0xf174ed48, "acquire_console_sem" },
	{ 0xff9ca065, "fb_edid_to_monspecs" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x1dc36131, "fb_destroy_modedb" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0x8fc05b26, "agp_backend_acquire" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x3d481654, "fb_find_best_mode" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x7e9fcf24, "pci_set_power_state" },
	{ 0x3fb701e1, "framebuffer_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0x272d394e, "mtrr_del" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0x4c643652, "cfb_copyarea" },
	{ 0x35fef8c8, "i2c_bit_add_bus" },
	{ 0xff271466, "pci_choose_state" },
	{ 0x19c9597c, "agp_bind_memory" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xd8811b57, "fb_validate_mode" },
	{ 0xb5cdc522, "fb_videomode_to_var" },
	{ 0xb8435063, "pci_save_state" },
	{ 0x6a843e55, "unregister_framebuffer" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=i2c-core,cfbfillrect,cfbimgblt,i2c-algo-bit,vgastate,cfbcopyarea";


MODULE_INFO(srcversion, "8B28D4A731627A613385414");
