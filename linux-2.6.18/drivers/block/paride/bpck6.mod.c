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
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0xe32a414a, "pi_register" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x1b7d4074, "printk" },
	{ 0x2e60bace, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x80134f9c, "pi_unregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=paride";


MODULE_INFO(srcversion, "6EE813B9DD3925D07B8EB18");