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
	{ 0xede74815, "atomic_notifier_chain_register" },
	{ 0x34201a8a, "nfnetlink_subsys_register" },
	{ 0xeca95329, "nfnetlink_has_listeners" },
	{ 0xa3a28209, "ip_conntrack_untracked" },
	{ 0x35a17f31, "nfnetlink_send" },
	{ 0xbc7a646b, "ip_ct_unlink_expect" },
	{ 0x3b3373b, "ip_conntrack_unexpect_related" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x942aa696, "netlink_unicast" },
	{ 0x548de514, "__alloc_skb" },
	{ 0xb3cac0b6, "ip_conntrack_expect_find" },
	{ 0xe788deb3, "netlink_dump_start" },
	{ 0x20b62dc0, "ip_ct_remove_expectations" },
	{ 0xbaff2a8, "__ip_conntrack_helper_find_byname" },
	{ 0x3d189e9, "ip_conntrack_free" },
	{ 0xda1d355d, "ip_conntrack_helper_put" },
	{ 0x8b47815b, "ip_conntrack_hash_insert" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x1f68aa5c, "ip_conntrack_helper_find_get" },
	{ 0xd10120cd, "ip_nat_setup_info" },
	{ 0x1c7ff535, "ip_conntrack_alloc" },
	{ 0x1cb57bc4, "__ip_conntrack_find" },
	{ 0x4827a016, "del_timer" },
	{ 0xcdb1850a, "ip_conntrack_flush" },
	{ 0x8ef8af4c, "ip_conntrack_htable_size" },
	{ 0x386855a5, "ip_conntrack_hash" },
	{ 0x349b8b61, "nfnetlink_subsys_unregister" },
	{ 0x5a34fa6d, "ip_conntrack_chain" },
	{ 0xd1d8adad, "atomic_notifier_chain_unregister" },
	{ 0x3cbc3465, "ip_conntrack_expect_chain" },
	{ 0x3497dfd, "ip_conntrack_expect_put" },
	{ 0x40aa2744, "ip_conntrack_expect_related" },
	{ 0x6749cc66, "ip_conntrack_expect_alloc" },
	{ 0x93e8ac3c, "ip_conntrack_find_get" },
	{ 0xcc4c11a9, "_write_unlock_bh" },
	{ 0x49739f80, "__ip_conntrack_expect_find" },
	{ 0x93ba42f1, "_write_lock_bh" },
	{ 0x254e03c9, "ip_nat_proto_put" },
	{ 0x92bad375, "ip_nat_proto_find_get" },
	{ 0xef509d51, "nfattr_parse" },
	{ 0x8bf46c54, "_read_unlock_bh" },
	{ 0x62ffb0b6, "ip_conntrack_expect_list" },
	{ 0x21968b7f, "_read_lock_bh" },
	{ 0xa2834c44, "ip_conntrack_lock" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x1b7d4074, "printk" },
	{ 0xcc084b38, "ip_conntrack_proto_put" },
	{ 0xdc9b6964, "ip_conntrack_proto_find_get" },
	{ 0x4e94c2bf, "__nfa_fill" },
	{ 0x7d11c268, "jiffies" },
	{ 0xfc108d60, "skb_over_panic" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=nfnetlink,ip_conntrack,ip_nat";


MODULE_INFO(srcversion, "FD7EE4EF553019036B4E473");
