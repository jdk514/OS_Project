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
	{ 0xcc4c11a9, "_write_unlock_bh" },
	{ 0x4827a016, "del_timer" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x669e2d2f, "seq_printf" },
	{ 0xf82fef9e, "ip_ct_port_tuple_to_nfattr" },
	{ 0x76946b86, "ip_conntrack_protocol_unregister" },
	{ 0xa977a9f3, "ip_conntrack_helper_unregister" },
	{ 0x8aebc0b9, "ip_ct_port_nfattr_to_tuple" },
	{ 0x3b3373b, "ip_conntrack_unexpect_related" },
	{ 0xd3e320ad, "ip_conntrack_protocol_register" },
	{ 0x21968b7f, "_read_lock_bh" },
	{ 0x93ba42f1, "_write_lock_bh" },
	{ 0x1b7d4074, "printk" },
	{ 0x6749cc66, "ip_conntrack_expect_alloc" },
	{ 0x93e8ac3c, "ip_conntrack_find_get" },
	{ 0xf11c81fb, "__ip_ct_refresh_acct" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0x3497dfd, "ip_conntrack_expect_put" },
	{ 0x4fec9dde, "ip_conntrack_helper_register" },
	{ 0x4a3e4b8a, "invert_tuplepr" },
	{ 0x8bf46c54, "_read_unlock_bh" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0xb3cac0b6, "ip_conntrack_expect_find" },
	{ 0x40aa2744, "ip_conntrack_expect_related" },
	{ 0xd805905b, "per_cpu__ip_conntrack_ecache" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0xb1922cfe, "skb_copy_bits" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ip_conntrack";


MODULE_INFO(srcversion, "608BE709D98F581FC88B7E8");
