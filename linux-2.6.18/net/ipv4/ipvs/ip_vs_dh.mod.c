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
	{ 0x22b1cd21, "register_ip_vs_scheduler" },
	{ 0x1b7d4074, "printk" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x37a0cba, "kfree" },
	{ 0x4fbd698a, "unregister_ip_vs_scheduler" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ip_vs";


MODULE_INFO(srcversion, "6361B611B583F9E5B94AAA1");
