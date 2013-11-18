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
	{ 0xc220dd00, "seq_release_private" },
	{ 0xe6eee95b, "seq_read" },
	{ 0xf9b907c1, "seq_lseek" },
	{ 0x76b45850, "nf_log_unregister_pf" },
	{ 0xd700d99e, "nf_log_register" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x669e2d2f, "seq_printf" },
	{ 0xebb99830, "seq_open" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0x34201a8a, "nfnetlink_subsys_register" },
	{ 0xf78d04ab, "netlink_register_notifier" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0xb1922cfe, "skb_copy_bits" },
	{ 0x4e94c2bf, "__nfa_fill" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x1b7d4074, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x548de514, "__alloc_skb" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xcc4c11a9, "_write_unlock_bh" },
	{ 0x93ba42f1, "_write_lock_bh" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0xce2a64f8, "nfnetlink_unicast" },
	{ 0x4827a016, "del_timer" },
	{ 0x8bf46c54, "_read_unlock_bh" },
	{ 0x21968b7f, "_read_lock_bh" },
	{ 0xf338d4c3, "netlink_unregister_notifier" },
	{ 0x349b8b61, "nfnetlink_subsys_unregister" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0x10d3bcd2, "proc_net_netfilter" },
	{ 0xac27241e, "nf_log_unregister_logger" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=nfnetlink";


MODULE_INFO(srcversion, "A9126EC671210ECE632E971");
