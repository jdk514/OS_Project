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
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0xd700d99e, "nf_log_register" },
	{ 0xfcf2e40e, "xt_register_target" },
	{ 0x7e011933, "netlink_kernel_create" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0xb1922cfe, "skb_copy_bits" },
	{ 0x807a89d4, "__net_timestamp" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0x5e66a425, "netlink_broadcast" },
	{ 0x1b7d4074, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x548de514, "__alloc_skb" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x4827a016, "del_timer" },
	{ 0x81cbc788, "sock_release" },
	{ 0x786fab6c, "xt_unregister_target" },
	{ 0xac27241e, "nf_log_unregister_logger" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=x_tables";


MODULE_INFO(srcversion, "E4BA70DAE763D7F06A42509");
