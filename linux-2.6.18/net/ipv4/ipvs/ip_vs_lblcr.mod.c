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
	{ 0xe656ef3a, "proc_dointvec_jiffies" },
	{ 0x3d7c39ea, "_read_lock" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x22b1cd21, "register_ip_vs_scheduler" },
	{ 0x4f71ea18, "register_sysctl_table" },
	{ 0xf3b39202, "mod_timer" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0x7d11c268, "jiffies" },
	{ 0x4b05104f, "_write_lock" },
	{ 0x1b7d4074, "printk" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x4fbd698a, "unregister_ip_vs_scheduler" },
	{ 0x4f8cddbf, "unregister_sysctl_table" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ip_vs";


MODULE_INFO(srcversion, "CAA183D31E4013FCF4B1381");
