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
	{ 0xe656ef3a, "proc_dointvec_jiffies" },
	{ 0x8aebc0b9, "ip_ct_port_nfattr_to_tuple" },
	{ 0xf82fef9e, "ip_ct_port_tuple_to_nfattr" },
	{ 0xf11c81fb, "__ip_ct_refresh_acct" },
	{ 0xcc4c11a9, "_write_unlock_bh" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0xa89a3e69, "__ip_ct_event_cache_init" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0xd805905b, "per_cpu__ip_conntrack_ecache" },
	{ 0x93ba42f1, "_write_lock_bh" },
	{ 0x2bc95bd4, "memset" },
	{ 0x4f71ea18, "register_sysctl_table" },
	{ 0x1b7d4074, "printk" },
	{ 0xd3e320ad, "ip_conntrack_protocol_register" },
	{ 0x669e2d2f, "seq_printf" },
	{ 0x8bf46c54, "_read_unlock_bh" },
	{ 0x21968b7f, "_read_lock_bh" },
	{ 0xb1922cfe, "skb_copy_bits" },
	{ 0x4f8cddbf, "unregister_sysctl_table" },
	{ 0x76946b86, "ip_conntrack_protocol_unregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ip_conntrack";


MODULE_INFO(srcversion, "A80F05131B4E93E947C7474");
