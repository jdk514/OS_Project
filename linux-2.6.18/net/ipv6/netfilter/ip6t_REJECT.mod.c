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
	{ 0x733ab18a, "nf_ct_attach" },
	{ 0x9a3de8f8, "csum_partial" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x548de514, "__alloc_skb" },
	{ 0xa74b8bf8, "xfrm_lookup" },
	{ 0x82a5f687, "ip6_route_output" },
	{ 0xecdef98f, "skb_checksum" },
	{ 0xb1922cfe, "skb_copy_bits" },
	{ 0x9e98725b, "ipv6_skip_exthdr" },
	{ 0x15792c26, "__ipv6_addr_type" },
	{ 0xc4da29e3, "icmpv6_send" },
	{ 0x4c890cf9, "loopback_dev" },
	{ 0xfcf2e40e, "xt_register_target" },
	{ 0x1b7d4074, "printk" },
	{ 0x786fab6c, "xt_unregister_target" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ipv6,x_tables";


MODULE_INFO(srcversion, "70E8EA39A068B44236C3BB5");
