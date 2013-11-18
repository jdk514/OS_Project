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
	{ 0xa89a3e69, "__ip_ct_event_cache_init" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x806d5133, "param_array_get" },
	{ 0x4e830a3e, "strnicmp" },
	{ 0xa977a9f3, "ip_conntrack_helper_unregister" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x8d3894f2, "_ctype" },
	{ 0x1b7d4074, "printk" },
	{ 0x6749cc66, "ip_conntrack_expect_alloc" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x5418d52a, "param_get_ushort" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0x3497dfd, "ip_conntrack_expect_put" },
	{ 0x4fec9dde, "ip_conntrack_helper_register" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0x40aa2744, "ip_conntrack_expect_related" },
	{ 0xd805905b, "per_cpu__ip_conntrack_ecache" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0xb1922cfe, "skb_copy_bits" },
	{ 0xc4c5509d, "param_set_ushort" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ip_conntrack";


MODULE_INFO(srcversion, "E07D023E5C1EEB48A791EB8");
