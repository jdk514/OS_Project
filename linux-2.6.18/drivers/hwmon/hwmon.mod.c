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
	{ 0xd10fc04d, "class_device_create" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x5253a3a4, "class_device_unregister" },
	{ 0x1b7d4074, "printk" },
	{ 0x859204af, "sscanf" },
	{ 0xc83decb4, "class_create" },
	{ 0xa7409aaf, "idr_remove" },
	{ 0x52a7207f, "idr_pre_get" },
	{ 0x93538172, "class_destroy" },
	{ 0x2d29e50a, "idr_get_new" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E30459EA5FFE823E4C2AB91");
