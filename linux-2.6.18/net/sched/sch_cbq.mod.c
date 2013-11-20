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
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x1f629dd4, "tc_classify" },
	{ 0xf93d64c, "gen_new_estimator" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x46b64038, "gen_replace_estimator" },
	{ 0xa406eaa1, "gnet_stats_copy_queue" },
	{ 0x363abfd, "gnet_stats_copy_rate_est" },
	{ 0xc61ecbbf, "gnet_stats_copy_basic" },
	{ 0x85950179, "gnet_stats_copy_app" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x21463d65, "noop_qdisc" },
	{ 0x3adce61c, "qdisc_get_rtab" },
	{ 0xe49414e9, "rtattr_parse" },
	{ 0x4827a016, "del_timer" },
	{ 0xf3b39202, "mod_timer" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0xf0f58d8d, "register_qdisc" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0x58563e64, "qdisc_unlock_tree" },
	{ 0x28b9d1e0, "qdisc_reset" },
	{ 0x30b0fbc8, "qdisc_lock_tree" },
	{ 0x3dc17552, "qdisc_create_dflt" },
	{ 0x821c6aa1, "pfifo_qdisc_ops" },
	{ 0xeb37482a, "gen_kill_estimator" },
	{ 0x821a0545, "qdisc_put_rtab" },
	{ 0x99cc6f13, "qdisc_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x77bed7e3, "__rta_fill" },
	{ 0x1b7d4074, "printk" },
	{ 0x19202db3, "unregister_qdisc" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "AA57C8F4A69B2F708868AFD");