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
	{ 0xacd81448, "skb_queue_head" },
	{ 0xdb5ea3f9, "module_refcount" },
	{ 0x3f13c534, "sock_init_data" },
	{ 0x61bed476, "up_read" },
	{ 0xb407100a, "kernel_sendmsg" },
	{ 0xb4e83653, "sockfd_lookup" },
	{ 0x3da60680, "attach_capi_ctr" },
	{ 0xcc4c11a9, "_write_unlock_bh" },
	{ 0x8692a11, "sock_no_setsockopt" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x594b12f4, "sock_no_getsockopt" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0xfed0110c, "sock_no_getname" },
	{ 0xd42dd828, "capi_ctr_handle_message" },
	{ 0xaf669f8c, "bt_sock_register" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x6ad4e84c, "sock_no_poll" },
	{ 0x1985af2a, "down_read" },
	{ 0x29c9c48, "sock_no_mmap" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x18d75f66, "sock_no_recvmsg" },
	{ 0xf21a8115, "skb_queue_purge" },
	{ 0x7900058d, "sock_no_socketpair" },
	{ 0x8f338b7f, "sk_alloc" },
	{ 0x93ba42f1, "_write_lock_bh" },
	{ 0x1b7d4074, "printk" },
	{ 0x69fa0a17, "sock_no_bind" },
	{ 0x5152e605, "memcmp" },
	{ 0xcc1fb551, "baswap" },
	{ 0x65e4602a, "capi_ctr_ready" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x7e869f04, "sock_no_listen" },
	{ 0x19c25cde, "sock_no_accept" },
	{ 0x769f4612, "sk_free" },
	{ 0xf19294db, "bt_sock_unregister" },
	{ 0xde0c05c3, "up_write" },
	{ 0xbca92367, "down_write" },
	{ 0xf51976d4, "fput" },
	{ 0x2cdfdecd, "sock_no_shutdown" },
	{ 0x2ac6138c, "capi_ctr_reseted" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x13c12a56, "skb_queue_tail" },
	{ 0x7dceceac, "capable" },
	{ 0x189f12c0, "proto_register" },
	{ 0xc2066af0, "batostr" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x4292364c, "schedule" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x6495dd71, "proto_unregister" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xfc31fe88, "l2cap_load" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xb0018a09, "sock_no_connect" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0x6bdd7e8e, "sock_no_sendmsg" },
	{ 0x29c2fef5, "set_user_nice" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x7e9ebb05, "kernel_thread" },
	{ 0x41b3d0a1, "detach_capi_ctr" },
	{ 0x3a233a33, "skb_dequeue" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0xdc43a9c8, "daemonize" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=kernelcapi,bluetooth,l2cap";


MODULE_INFO(srcversion, "8DF91FC718C71EF96908497");
