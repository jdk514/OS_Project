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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xf2e4d7d, "set_h245_addr_hook" },
	{ 0xbcbb207a, "nat_h245_hook" },
	{ 0x56d222f2, "get_h225_addr" },
	{ 0x2b1884a9, "set_sig_addr_hook" },
	{ 0x3b3373b, "ip_conntrack_unexpect_related" },
	{ 0x1b7d4074, "printk" },
	{ 0xcd4ccd0b, "nat_rtp_rtcp_hook" },
	{ 0x3f57ac08, "nat_q931_hook" },
	{ 0x87482290, "set_ras_addr_hook" },
	{ 0x6810ae00, "ip_conntrack_h245_expect" },
	{ 0x2b370a45, "set_h225_addr_hook" },
	{ 0xa821c8c2, "nat_t120_hook" },
	{ 0x97e643b1, "ip_conntrack_q931_expect" },
	{ 0xd10120cd, "ip_nat_setup_info" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xbaef4869, "ip_nat_mangle_udp_packet" },
	{ 0x35f410ff, "ip_nat_follow_master" },
	{ 0x2395772b, "nat_callforwarding_hook" },
	{ 0xf079ce2f, "ip_nat_mangle_tcp_packet" },
	{ 0x40aa2744, "ip_conntrack_expect_related" },
	{ 0xb1922cfe, "skb_copy_bits" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ip_conntrack_h323,ip_conntrack,ip_nat";


MODULE_INFO(srcversion, "41A2AA9829576549BE7F1F2");
