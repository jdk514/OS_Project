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
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x85c02b80, "cpu_data" },
	{ 0x1ef3eb01, "misc_register" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x332eb002, "__next_cpu" },
	{ 0xf4a91d48, "__first_cpu" },
	{ 0x99bdf0a8, "cpu_online_map" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0xbba1c14, "on_each_cpu" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x948cde9, "num_physpages" },
	{ 0x1b7d4074, "printk" },
	{ 0x7dceceac, "capable" },
	{ 0x25dd4bad, "misc_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FDB9377D3635503543EC759");
