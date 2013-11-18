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
	{ 0xa593aae9, "ip_nat_protocol_register" },
	{ 0xf142e66e, "ip_ct_gre_keymap_destroy" },
	{ 0x425b267a, "ip_nat_pptp_hook_outbound" },
	{ 0xffb9823c, "ip_nat_pptp_hook_exp_gre" },
	{ 0x3b3373b, "ip_conntrack_unexpect_related" },
	{ 0x59485cac, "ip_nat_port_range_to_nfattr" },
	{ 0x1b7d4074, "printk" },
	{ 0x1e4e73a8, "ip_nat_cheat_check" },
	{ 0x1e9ae9f4, "ip_nat_port_nfattr_to_range" },
	{ 0x3497dfd, "ip_conntrack_expect_put" },
	{ 0x4a3e4b8a, "invert_tuplepr" },
	{ 0xd10120cd, "ip_nat_setup_info" },
	{ 0x67c335b8, "ip_nat_pptp_hook_expectfn" },
	{ 0xf079ce2f, "ip_nat_mangle_tcp_packet" },
	{ 0xf55f4ac6, "skb_make_writable" },
	{ 0x81e59020, "ip_nat_pptp_hook_inbound" },
	{ 0xb3cac0b6, "ip_conntrack_expect_find" },
	{ 0x98b5707e, "ip_nat_used_tuple" },
	{ 0x40aa2744, "ip_conntrack_expect_related" },
	{ 0xd1efc71e, "ip_nat_protocol_unregister" },
	{ 0x16c0ac86, "ip_ct_gre_keymap_add" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ip_nat,ip_conntrack_pptp,ip_conntrack";


MODULE_INFO(srcversion, "2099CA56809F4476D552E0C");
