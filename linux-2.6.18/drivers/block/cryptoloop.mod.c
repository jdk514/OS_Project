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
	{ 0x7047c641, "crypto_alloc_tfm" },
	{ 0x85df9b6c, "strsep" },
	{ 0x4e187030, "crypto_free_tfm" },
	{ 0x7fc7f1e, "loop_register_transfer" },
	{ 0x1b7d4074, "printk" },
	{ 0xbfee3ad5, "loop_unregister_transfer" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=loop";


MODULE_INFO(srcversion, "5C04BAD3FCE6455F67A91C1");
