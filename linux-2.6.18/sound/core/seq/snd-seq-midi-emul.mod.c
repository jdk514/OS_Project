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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x5152e605, "memcmp" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x69ee7fd1, "snd_seq_expand_var_event" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-seq";


MODULE_INFO(srcversion, "75B664EDFF0BCBD220FE846");
