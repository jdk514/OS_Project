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
	{ 0x1d26aa98, "sprintf" },
	{ 0x2b77a526, "led_trigger_register" },
	{ 0x6180e3ac, "class_device_create_file" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x8d3894f2, "_ctype" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x37a0cba, "kfree" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x2eb16cd2, "class_device_remove_file" },
	{ 0xcc817ebb, "led_trigger_unregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "359750A49C5CB887F59078D");
