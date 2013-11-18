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
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0xf93d64c, "gen_new_estimator" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xe49414e9, "rtattr_parse" },
	{ 0xbd9851bc, "tcf_register_action" },
	{ 0x1c66f64c, "net_random" },
	{ 0x7d11c268, "jiffies" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x396e9d38, "tcf_action_dump_1" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x77bed7e3, "__rta_fill" },
	{ 0x3d7c39ea, "_read_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb37482a, "gen_kill_estimator" },
	{ 0xcc4c11a9, "_write_unlock_bh" },
	{ 0x93ba42f1, "_write_lock_bh" },
	{ 0x1b7d4074, "printk" },
	{ 0x74f431fe, "tcf_unregister_action" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "9A113A367DB3C4B9751A525");
