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
	{ 0xf55f4ac6, "skb_make_writable" },
	{ 0xdb5040c0, "sock_wfree" },
	{ 0xc3c79136, "skb_copy_expand" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x4df6e6de, "nf_unregister_queue_handler" },
	{ 0xcf67a1f1, "nf_register_queue_handler" },
	{ 0x669e2d2f, "seq_printf" },
	{ 0xebb99830, "seq_open" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0x34201a8a, "nfnetlink_subsys_register" },
	{ 0xf78d04ab, "netlink_register_notifier" },
	{ 0xce2a64f8, "nfnetlink_unicast" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xb1922cfe, "skb_copy_bits" },
	{ 0x4e94c2bf, "__nfa_fill" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x156a70fb, "skb_checksum_help" },
	{ 0x1b7d4074, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0xcc4c11a9, "_write_unlock_bh" },
	{ 0x93ba42f1, "_write_lock_bh" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0xd8005c22, "nf_reinject" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x8bf46c54, "_read_unlock_bh" },
	{ 0x21968b7f, "_read_lock_bh" },
	{ 0xf338d4c3, "netlink_unregister_notifier" },
	{ 0x349b8b61, "nfnetlink_subsys_unregister" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0x10d3bcd2, "proc_net_netfilter" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0xae0b8620, "nf_unregister_queue_handlers" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=nfnetlink";


MODULE_INFO(srcversion, "44EA151ED92EF97967936D3");
