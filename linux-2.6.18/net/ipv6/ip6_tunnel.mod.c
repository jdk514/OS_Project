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
	{ 0x74da8e29, "nf_hook_slow" },
	{ 0x78b1fd2, "nf_hooks" },
	{ 0x37a0cba, "kfree" },
	{ 0xe3038592, "skb_under_panic" },
	{ 0xcfd972c5, "ipv6_push_nfrag_opts" },
	{ 0xdb5040c0, "sock_wfree" },
	{ 0xddabf283, "skb_realloc_headroom" },
	{ 0xa74b8bf8, "xfrm_lookup" },
	{ 0x82a5f687, "ip6_route_output" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x96f7398e, "netif_rx" },
	{ 0xf7da21b6, "__secpath_destroy" },
	{ 0xb0d416e7, "__xfrm_policy_check" },
	{ 0xe591efea, "xfrm_policy_list" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xc4da29e3, "icmpv6_send" },
	{ 0xf93cb7da, "skb_clone" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x3d7c39ea, "_read_lock" },
	{ 0x7930fe23, "unregister_netdevice" },
	{ 0xf3830817, "netdev_state_change" },
	{ 0x7dceceac, "capable" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x81279ce0, "register_netdevice" },
	{ 0x2e60bace, "memcpy" },
	{ 0x8499fd55, "__dev_get_by_name" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x11a7d61b, "rt6_lookup" },
	{ 0x92cd1323, "ipv6_chk_addr" },
	{ 0x81e3c15d, "dev_get_by_index" },
	{ 0x15792c26, "__ipv6_addr_type" },
	{ 0xcc4c11a9, "_write_unlock_bh" },
	{ 0x93ba42f1, "_write_lock_bh" },
	{ 0x5598dc19, "register_netdev" },
	{ 0xcf81566a, "alloc_netdev" },
	{ 0xd0a133d1, "xfrm6_tunnel_register" },
	{ 0x8e0b7743, "ipv6_ext_hdr" },
	{ 0xc4be936d, "__pskb_pull_tail" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0x1b7d4074, "printk" },
	{ 0xb35c8afd, "xfrm6_tunnel_deregister" },
	{ 0xaaab5c7a, "free_netdev" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ipv6,tunnel6";


MODULE_INFO(srcversion, "4AC4942E3A27383CB38F231");
