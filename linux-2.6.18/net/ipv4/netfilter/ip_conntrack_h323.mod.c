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
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xcc4c11a9, "_write_unlock_bh" },
	{ 0x4827a016, "del_timer" },
	{ 0x4b27b343, "ip_route_output_key" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xa977a9f3, "ip_conntrack_helper_unregister" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x7d11c268, "jiffies" },
	{ 0x3b3373b, "ip_conntrack_unexpect_related" },
	{ 0x2bc95bd4, "memset" },
	{ 0x21968b7f, "_read_lock_bh" },
	{ 0x93ba42f1, "_write_lock_bh" },
	{ 0x1b7d4074, "printk" },
	{ 0x6749cc66, "ip_conntrack_expect_alloc" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x49739f80, "__ip_conntrack_expect_find" },
	{ 0xf11c81fb, "__ip_ct_refresh_acct" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x72216fa9, "param_get_uint" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x3497dfd, "ip_conntrack_expect_put" },
	{ 0x4fec9dde, "ip_conntrack_helper_register" },
	{ 0x8bf46c54, "_read_unlock_bh" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x8abac70a, "param_set_uint" },
	{ 0xa2834c44, "ip_conntrack_lock" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0x40aa2744, "ip_conntrack_expect_related" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0xb1922cfe, "skb_copy_bits" },
	{ 0x20b62dc0, "ip_ct_remove_expectations" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ip_conntrack";


MODULE_INFO(srcversion, "01A6B6F7D71CD5740004096");
