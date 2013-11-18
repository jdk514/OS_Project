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
	{ 0x4827a016, "del_timer" },
	{ 0x28b9d1e0, "qdisc_reset" },
	{ 0x58563e64, "qdisc_unlock_tree" },
	{ 0x21463d65, "noop_qdisc" },
	{ 0x30b0fbc8, "qdisc_lock_tree" },
	{ 0x3dc17552, "qdisc_create_dflt" },
	{ 0x821c6aa1, "pfifo_qdisc_ops" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x3adce61c, "qdisc_get_rtab" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xe49414e9, "rtattr_parse" },
	{ 0xf3b39202, "mod_timer" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0x7d11c268, "jiffies" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x2e60bace, "memcpy" },
	{ 0x77bed7e3, "__rta_fill" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0xf0f58d8d, "register_qdisc" },
	{ 0xa6dcc773, "rb_insert_color" },
	{ 0x1f629dd4, "tc_classify" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x821a0545, "qdisc_put_rtab" },
	{ 0x99cc6f13, "qdisc_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0xc0580937, "rb_erase" },
	{ 0x1b7d4074, "printk" },
	{ 0xfd98879a, "rb_next" },
	{ 0x85950179, "gnet_stats_copy_app" },
	{ 0xa406eaa1, "gnet_stats_copy_queue" },
	{ 0x363abfd, "gnet_stats_copy_rate_est" },
	{ 0xc61ecbbf, "gnet_stats_copy_basic" },
	{ 0x19202db3, "unregister_qdisc" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "49179E4FEAEB9108404CBC4");
