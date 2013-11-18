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
	{ 0x786fab6c, "xt_unregister_target" },
	{ 0xaa9852ed, "ip_nat_icmp_reply_translation" },
	{ 0x2d97e089, "ipt_register_table" },
	{ 0x4b27b343, "ip_route_output_key" },
	{ 0x75ebad77, "ip_xfrm_me_harder" },
	{ 0xb409d8f2, "ip_nat_packet" },
	{ 0x2bc95bd4, "memset" },
	{ 0x1b7d4074, "printk" },
	{ 0x6fed87f, "ip_nat_decode_session" },
	{ 0x7e1056b3, "ip_route_me_harder" },
	{ 0x9bf3fced, "ipt_unregister_table" },
	{ 0x87301eb3, "nf_unregister_hooks" },
	{ 0xfcf2e40e, "xt_register_target" },
	{ 0xa3a28209, "ip_conntrack_untracked" },
	{ 0x6e224a7a, "need_conntrack" },
	{ 0x156a70fb, "skb_checksum_help" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xd10120cd, "ip_nat_setup_info" },
	{ 0xd646fc13, "nf_register_hooks" },
	{ 0xee272c69, "ipt_do_table" },
	{ 0xb1922cfe, "skb_copy_bits" },
	{ 0x9e3b876d, "ip_nat_seq_adjust" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=x_tables,ip_nat,ip_tables,ip_conntrack";


MODULE_INFO(srcversion, "7CD8078E7D9DBEAE1E1D54C");
