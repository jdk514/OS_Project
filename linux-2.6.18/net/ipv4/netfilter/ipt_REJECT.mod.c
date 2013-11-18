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
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x74da8e29, "nf_hook_slow" },
	{ 0x78b1fd2, "nf_hooks" },
	{ 0x733ab18a, "nf_ct_attach" },
	{ 0x9a3de8f8, "csum_partial" },
	{ 0x37a0cba, "kfree" },
	{ 0xc3c79136, "skb_copy_expand" },
	{ 0xa74b8bf8, "xfrm_lookup" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xe494f5d3, "ip_route_input" },
	{ 0x4b27b343, "ip_route_output_key" },
	{ 0x2bc95bd4, "memset" },
	{ 0x3291d565, "nf_ip_checksum" },
	{ 0xb1922cfe, "skb_copy_bits" },
	{ 0x264d8032, "icmp_send" },
	{ 0xfcf2e40e, "xt_register_target" },
	{ 0x1b7d4074, "printk" },
	{ 0x786fab6c, "xt_unregister_target" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=x_tables";


MODULE_INFO(srcversion, "E936141F00BB30ABB018D4C");
