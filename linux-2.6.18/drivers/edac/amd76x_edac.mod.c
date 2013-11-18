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
	{ 0xbfc10b95, "edac_mc_handle_ce" },
	{ 0x3091dc5c, "edac_mc_handle_ue" },
	{ 0xc5c375b, "edac_mc_add_mc" },
	{ 0x12f27b64, "edac_mc_alloc" },
	{ 0xa09539e, "pci_bus_write_config_dword" },
	{ 0x59981248, "pci_bus_read_config_dword" },
	{ 0x32d8a810, "edac_mc_free" },
	{ 0x35998f24, "edac_mc_del_mc" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=edac_mc";

MODULE_ALIAS("pci:v00001022d0000700Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000700Esv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B823E8B4E0AC53404F5E49B");
