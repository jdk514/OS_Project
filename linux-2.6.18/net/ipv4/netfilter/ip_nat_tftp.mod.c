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
	{ 0x40aa2744, "ip_conntrack_expect_related" },
	{ 0x35f410ff, "ip_nat_follow_master" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x7d076c75, "ip_nat_tftp_hook" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ip_conntrack,ip_nat,ip_conntrack_tftp";


MODULE_INFO(srcversion, "4EB3159B9927314AB256CF4");
