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
	{ 0xd646fc13, "nf_register_hooks" },
	{ 0x30e076de, "ip6t_register_table" },
	{ 0x7f352dd2, "ip6t_do_table" },
	{ 0x8bb3b717, "ip6t_unregister_table" },
	{ 0x87301eb3, "nf_unregister_hooks" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ip6_tables";


MODULE_INFO(srcversion, "4C2683C4B695149C4DAAC52");
