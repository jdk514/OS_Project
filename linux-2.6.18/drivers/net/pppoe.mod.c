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
	{ 0x5a1d6f47, "seq_release" },
	{ 0xe6eee95b, "seq_read" },
	{ 0xf9b907c1, "seq_lseek" },
	{ 0x29c9c48, "sock_no_mmap" },
	{ 0x594b12f4, "sock_no_getsockopt" },
	{ 0x8692a11, "sock_no_setsockopt" },
	{ 0x2cdfdecd, "sock_no_shutdown" },
	{ 0x7e869f04, "sock_no_listen" },
	{ 0x6e98407b, "pppox_ioctl" },
	{ 0x8e30c1e7, "datagram_poll" },
	{ 0x19c25cde, "sock_no_accept" },
	{ 0x7900058d, "sock_no_socketpair" },
	{ 0x69fa0a17, "sock_no_bind" },
	{ 0xf21a8115, "skb_queue_purge" },
	{ 0x1f6d6e11, "sk_receive_skb" },
	{ 0x60445e73, "sock_queue_rcv_skb" },
	{ 0x70354e72, "ppp_input" },
	{ 0xc73109d0, "___pskb_trim" },
	{ 0x2f2a91b1, "skb_pull_rcsum" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xc4be936d, "__pskb_pull_tail" },
	{ 0x92f50af9, "ppp_register_channel" },
	{ 0xbf8e93eb, "dev_get_by_name" },
	{ 0xcc4c11a9, "_write_unlock_bh" },
	{ 0x93ba42f1, "_write_lock_bh" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x9fb3dd30, "memcpy_fromiovec" },
	{ 0xd5e5106d, "sock_wmalloc" },
	{ 0x669e2d2f, "seq_printf" },
	{ 0xdd7b7024, "seq_puts" },
	{ 0xebb99830, "seq_open" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0x3047c858, "dev_add_pack" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0xccb85ed2, "register_pppox_proto" },
	{ 0x189f12c0, "proto_register" },
	{ 0x7fce77eb, "dev_queue_xmit" },
	{ 0xe3038592, "skb_under_panic" },
	{ 0xf93cb7da, "skb_clone" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x548de514, "__alloc_skb" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x9ceb163c, "memcpy_toiovec" },
	{ 0x8e01a41e, "skb_recv_datagram" },
	{ 0x3f13c534, "sock_init_data" },
	{ 0x8f338b7f, "sk_alloc" },
	{ 0x5152e605, "memcmp" },
	{ 0x769f4612, "sk_free" },
	{ 0xc147557a, "release_sock" },
	{ 0x1d80021b, "pppox_unbind_sock" },
	{ 0x8123901d, "lock_sock" },
	{ 0x21968b7f, "_read_lock_bh" },
	{ 0x8bf46c54, "_read_unlock_bh" },
	{ 0x6495dd71, "proto_unregister" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0xf46f821, "dev_remove_pack" },
	{ 0xe0ff7a18, "unregister_pppox_proto" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=pppox,ppp_generic";


MODULE_INFO(srcversion, "B473AC2881B553F1FDEAC66");
