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
	{ 0x43a2bb7, "tcp_reno_min_cwnd" },
	{ 0xd990811b, "tcp_reno_ssthresh" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xbe849d02, "tcp_slow_start" },
	{ 0xc509a559, "tcp_reno_cong_avoid" },
	{ 0x2dee1e55, "tcp_register_congestion_control" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0xdd59be9a, "tcp_unregister_congestion_control" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C25883F5A55D93C597CA5C6");
