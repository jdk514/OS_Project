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
	{ 0x4246221a, "genphy_read_status" },
	{ 0xc8eab7f6, "phy_driver_register" },
	{ 0x575a38ca, "genphy_config_aneg" },
	{ 0x87497d5f, "phy_read" },
	{ 0x716a61af, "phy_write" },
	{ 0xe1a5f738, "phy_driver_unregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=libphy";


MODULE_INFO(srcversion, "AA12C6DB005F44BEC8CB0CC");
