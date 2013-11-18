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
	{ 0xb0cd0edd, "proc_dointvec" },
	{ 0xcf67a1f1, "nf_register_queue_handler" },
	{ 0x4f71ea18, "register_sysctl_table" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0x7e011933, "netlink_kernel_create" },
	{ 0xf78d04ab, "netlink_register_notifier" },
	{ 0x31ab552f, "netlink_ack" },
	{ 0xf55f4ac6, "skb_make_writable" },
	{ 0xdb5040c0, "sock_wfree" },
	{ 0xc3c79136, "skb_copy_expand" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x54e6fcdd, "net_enable_timestamp" },
	{ 0x3cc0dd6c, "security_ops" },
	{ 0x3a233a33, "skb_dequeue" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xf338d4c3, "netlink_unregister_notifier" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x81cbc788, "sock_release" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0xe6be1c28, "proc_net" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0x4f8cddbf, "unregister_sysctl_table" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xae0b8620, "nf_unregister_queue_handlers" },
	{ 0x942aa696, "netlink_unicast" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xb1922cfe, "skb_copy_bits" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x8bf46c54, "_read_unlock_bh" },
	{ 0x156a70fb, "skb_checksum_help" },
	{ 0x21968b7f, "_read_lock_bh" },
	{ 0x1b7d4074, "printk" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x199ed0cd, "net_disable_timestamp" },
	{ 0x37a0cba, "kfree" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0xd8005c22, "nf_reinject" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0xcc4c11a9, "_write_unlock_bh" },
	{ 0x93ba42f1, "_write_lock_bh" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6B4BEFDC9F151A0FB634498");
