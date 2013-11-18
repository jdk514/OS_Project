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
	{ 0x72216fa9, "param_get_uint" },
	{ 0x8abac70a, "param_set_uint" },
	{ 0x4fec9dde, "ip_conntrack_helper_register" },
	{ 0xf11c81fb, "__ip_ct_refresh_acct" },
	{ 0x3497dfd, "ip_conntrack_expect_put" },
	{ 0x40aa2744, "ip_conntrack_expect_related" },
	{ 0x2e60bace, "memcpy" },
	{ 0x6749cc66, "ip_conntrack_expect_alloc" },
	{ 0xa977a9f3, "ip_conntrack_helper_unregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ip_conntrack";


MODULE_INFO(srcversion, "B5ABD21B3F9707BEBF35933");
