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
	{ 0xab978df6, "malloc_sizes" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x806d5133, "param_array_get" },
	{ 0xa977a9f3, "ip_conntrack_helper_unregister" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x1b7d4074, "printk" },
	{ 0x6749cc66, "ip_conntrack_expect_alloc" },
	{ 0x5152e605, "memcmp" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x5418d52a, "param_get_ushort" },
	{ 0x72216fa9, "param_get_uint" },
	{ 0x3497dfd, "ip_conntrack_expect_put" },
	{ 0x4fec9dde, "ip_conntrack_helper_register" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x8abac70a, "param_set_uint" },
	{ 0x40aa2744, "ip_conntrack_expect_related" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0xb1922cfe, "skb_copy_bits" },
	{ 0xc4c5509d, "param_set_ushort" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ip_conntrack";


MODULE_INFO(srcversion, "1CE0A385C43FE1A13F35046");
