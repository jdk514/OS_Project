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
	{ 0xde81efb5, "nf_register_hook" },
	{ 0x56817dc6, "ebt_register_table" },
	{ 0x282fe1c7, "ebt_do_table" },
	{ 0xa4194084, "ebt_unregister_table" },
	{ 0x91c8b5df, "nf_unregister_hook" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ebtables";


MODULE_INFO(srcversion, "5FDE047B0BB284632AB4BF9");
