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
	{ 0x396e9d38, "tcf_action_dump_1" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x77bed7e3, "__rta_fill" },
	{ 0x2e60bace, "memcpy" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x1b7d4074, "printk" },
	{ 0xeb37482a, "gen_kill_estimator" },
	{ 0xbd9851bc, "tcf_register_action" },
	{ 0x37a0cba, "kfree" },
	{ 0xcc4c11a9, "_write_unlock_bh" },
	{ 0x93ba42f1, "_write_lock_bh" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x46b64038, "gen_replace_estimator" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0x821a0545, "qdisc_put_rtab" },
	{ 0x3adce61c, "qdisc_get_rtab" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x3d7c39ea, "_read_lock" },
	{ 0xe49414e9, "rtattr_parse" },
	{ 0x74f431fe, "tcf_unregister_action" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "713412ED98095F57495F950");
