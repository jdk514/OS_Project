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
	{ 0xd16ac615, "__get_user_1" },
	{ 0x1b7d4074, "printk" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x505ec883, "dev_driver_string" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7D08C1581A3374F0294185F");
