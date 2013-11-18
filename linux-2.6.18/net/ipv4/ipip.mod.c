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
	{ 0x96f7398e, "netif_rx" },
	{ 0xf7da21b6, "__secpath_destroy" },
	{ 0xb0d416e7, "__xfrm_policy_check" },
	{ 0xe591efea, "xfrm_policy_list" },
	{ 0x74da8e29, "nf_hook_slow" },
	{ 0x78b1fd2, "nf_hooks" },
	{ 0xebace4f8, "ip_send_check" },
	{ 0xf0a6ee24, "__ip_select_ident" },
	{ 0x37a0cba, "kfree" },
	{ 0xe3038592, "skb_under_panic" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xdb5040c0, "sock_wfree" },
	{ 0xddabf283, "skb_realloc_headroom" },
	{ 0x264d8032, "icmp_send" },
	{ 0x6aeb5e57, "__dev_get_by_index" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x4b27b343, "ip_route_output_key" },
	{ 0x2bc95bd4, "memset" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xf3830817, "netdev_state_change" },
	{ 0x7dceceac, "capable" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x7d11c268, "jiffies" },
	{ 0x3d7c39ea, "_read_lock" },
	{ 0x81279ce0, "register_netdevice" },
	{ 0x2e60bace, "memcpy" },
	{ 0x8499fd55, "__dev_get_by_name" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xcc4c11a9, "_write_unlock_bh" },
	{ 0x93ba42f1, "_write_lock_bh" },
	{ 0x5598dc19, "register_netdev" },
	{ 0xcf81566a, "alloc_netdev" },
	{ 0x4eaccdf8, "xfrm4_tunnel_register" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x7930fe23, "unregister_netdevice" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x1b7d4074, "printk" },
	{ 0x548ff876, "xfrm4_tunnel_deregister" },
	{ 0xaaab5c7a, "free_netdev" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=tunnel4";


MODULE_INFO(srcversion, "450963F9A01E63755CBBA30");
