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
	{ 0xf079ce2f, "ip_nat_mangle_tcp_packet" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x3b3373b, "ip_conntrack_unexpect_related" },
	{ 0x40aa2744, "ip_conntrack_expect_related" },
	{ 0x35f410ff, "ip_nat_follow_master" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x66c3eeda, "ip_nat_ftp_hook" },
	{ 0x1b7d4074, "printk" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ip_nat,ip_conntrack,ip_conntrack_ftp";


MODULE_INFO(srcversion, "3013660AAA917860B4EF6BD");
