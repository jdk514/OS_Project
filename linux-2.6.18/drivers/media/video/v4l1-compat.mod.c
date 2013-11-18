#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
};

static const struct modversion_info ____versions[]
__attribute_used__
__attribute__((section("__versions"))) = {
	{ 0xb499ef18, "struct_module" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x1b7d4074, "printk" },
	{ 0x7d12a852, "poll_freewait" },
	{ 0x68463ceb, "poll_initwait" },
	{ 0x4292364c, "schedule" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x37a0cba, "kfree" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "2F1F2969D5BC1C65AE3DA70");
