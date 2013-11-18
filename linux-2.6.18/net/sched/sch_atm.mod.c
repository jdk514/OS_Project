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
	{ 0x6b2dc060, "dump_stack" },
	{ 0x77bed7e3, "__rta_fill" },
	{ 0xe3038592, "skb_under_panic" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xddabf283, "skb_realloc_headroom" },
	{ 0x1f629dd4, "tc_classify" },
	{ 0x79ad224b, "tasklet_kill" },
	{ 0x28b9d1e0, "qdisc_reset" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0xed5c73bf, "__tasklet_schedule" },
	{ 0x21463d65, "noop_qdisc" },
	{ 0x3dc17552, "qdisc_create_dflt" },
	{ 0x821c6aa1, "pfifo_qdisc_ops" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xb4e83653, "sockfd_lookup" },
	{ 0xe49414e9, "rtattr_parse" },
	{ 0xf0f58d8d, "register_qdisc" },
	{ 0xf51976d4, "fput" },
	{ 0x99cc6f13, "qdisc_destroy" },
	{ 0x1b7d4074, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0xa406eaa1, "gnet_stats_copy_queue" },
	{ 0xc61ecbbf, "gnet_stats_copy_basic" },
	{ 0x19202db3, "unregister_qdisc" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8B72338F7DA0993CA943EBC");
