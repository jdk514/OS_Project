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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xe584a396, "ip_ct_iterate_cleanup" },
	{ 0xa72847a8, "__ip_conntrack_proto_find" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xcc4c11a9, "_write_unlock_bh" },
	{ 0xef1f6e33, "ip_conntrack_alter_reply" },
	{ 0xebace4f8, "ip_send_check" },
	{ 0xa1a9871, "ip_ct_get_tuple" },
	{ 0xafacba2f, "ip_conntrack_tuple_taken" },
	{ 0x69e1318f, "ip_conntrack_destroyed" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x8fe66050, "ip_conntrack_tcp_update" },
	{ 0x8ef8af4c, "ip_conntrack_htable_size" },
	{ 0xecdef98f, "skb_checksum" },
	{ 0x21968b7f, "_read_lock_bh" },
	{ 0x93ba42f1, "_write_lock_bh" },
	{ 0x1b7d4074, "printk" },
	{ 0xa3a28209, "ip_conntrack_untracked" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0xc3c79136, "skb_copy_expand" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x4a3e4b8a, "invert_tuplepr" },
	{ 0x8bf46c54, "_read_unlock_bh" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x2e60bace, "memcpy" },
	{ 0xf55f4ac6, "skb_make_writable" },
	{ 0x4e94c2bf, "__nfa_fill" },
	{ 0x8235805b, "memmove" },
	{ 0x9a3de8f8, "csum_partial" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0xdb5040c0, "sock_wfree" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ip_conntrack,nfnetlink";


MODULE_INFO(srcversion, "F1729394DC4ED43B13B2562");
