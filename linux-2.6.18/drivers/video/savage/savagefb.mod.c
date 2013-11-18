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
	{ 0xf50616d3, "framebuffer_release" },
	{ 0x3154a9fe, "fb_find_best_display" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x5cca4df3, "i2c_transfer" },
	{ 0x56179c5f, "mtrr_add" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0x3b5ad24f, "fb_firmware_edid" },
	{ 0x865caf3e, "fb_set_suspend" },
	{ 0xaa136450, "param_get_charp" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0x49653ec1, "pci_restore_state" },
	{ 0x16e4d5c0, "cfb_imageblit" },
	{ 0xcb7131fb, "fb_get_options" },
	{ 0x1b7d4074, "printk" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0xfa277127, "register_framebuffer" },
	{ 0xaaee7e8f, "i2c_bit_del_bus" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xc429e0c6, "fb_find_mode" },
	{ 0xf2707cb1, "fb_videomode_to_modelist" },
	{ 0x52f6f10e, "fb_get_mode" },
	{ 0x434fa55c, "release_console_sem" },
	{ 0xf174ed48, "acquire_console_sem" },
	{ 0xff9ca065, "fb_edid_to_monspecs" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x1dc36131, "fb_destroy_modedb" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x3d481654, "fb_find_best_mode" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x7e9fcf24, "pci_set_power_state" },
	{ 0x3fb701e1, "framebuffer_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0x5e0276a4, "fb_set_cmap" },
	{ 0xedc03953, "iounmap" },
	{ 0x272d394e, "mtrr_del" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x35fef8c8, "i2c_bit_add_bus" },
	{ 0x25da070, "snprintf" },
	{ 0xff271466, "pci_choose_state" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xd8811b57, "fb_validate_mode" },
	{ 0xb8435063, "pci_save_state" },
	{ 0x6a843e55, "unregister_framebuffer" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=i2c-core,cfbimgblt,i2c-algo-bit";

MODULE_ALIAS("pci:v00005333d00008C22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C2Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C2Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C2Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C2Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C2Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C2Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008A22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008A20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008A21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00009102sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C10sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C11sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C12sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C13sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008A25sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008A26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008D01sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008D02sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008D03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008D04sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7976A901A538644E89AAB48");
