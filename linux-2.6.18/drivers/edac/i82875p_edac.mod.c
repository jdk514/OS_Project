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
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0xdd334e07, "pci_dev_put" },
	{ 0x35998f24, "edac_mc_del_mc" },
	{ 0xbfc10b95, "edac_mc_handle_ce" },
	{ 0x3091dc5c, "edac_mc_handle_ue" },
	{ 0x47fe1cb0, "edac_mc_find_csrow_by_page" },
	{ 0xe73b758f, "edac_mc_handle_ce_no_info" },
	{ 0x6fedff41, "pci_dev_get" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0xedc03953, "iounmap" },
	{ 0x32d8a810, "edac_mc_free" },
	{ 0xc5c375b, "edac_mc_add_mc" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0x12f27b64, "edac_mc_alloc" },
	{ 0x3762cb6e, "ioremap_nocache" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0xba331c49, "pci_proc_attach_device" },
	{ 0xd1009062, "pci_scan_single_device" },
	{ 0xfe7afd73, "pci_bus_write_config_byte" },
	{ 0x129cbf09, "pci_get_device" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x1b7d4074, "printk" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0x59981248, "pci_bus_read_config_dword" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=edac_mc";

MODULE_ALIAS("pci:v00008086d00002578sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6D8DA51A02492981E013D89");
