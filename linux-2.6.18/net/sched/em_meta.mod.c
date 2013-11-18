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
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xe49414e9, "rtattr_parse" },
	{ 0x77bed7e3, "__rta_fill" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x2583f2f9, "tcf_em_register" },
	{ 0x81e3c15d, "dev_get_by_index" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x37a0cba, "kfree" },
	{ 0x5152e605, "memcmp" },
	{ 0x27f1b0a1, "tcf_em_unregister" },
	{ 0xf1e98c74, "avenrun" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F5FF647E81F4D1D841A2A27");
