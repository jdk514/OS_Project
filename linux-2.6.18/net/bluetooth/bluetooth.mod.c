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
	{ 0xc147557a, "release_sock" },
	{ 0x9d489c00, "bus_register" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x3f13c534, "sock_init_data" },
	{ 0xcc4c11a9, "_write_unlock_bh" },
	{ 0x4827a016, "del_timer" },
	{ 0x3d7c39ea, "_read_lock" },
	{ 0x84e549a0, "platform_device_register_simple" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x807a89d4, "__net_timestamp" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0xf93cb7da, "skb_clone" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x60445e73, "sock_queue_rcv_skb" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0x8e01a41e, "skb_recv_datagram" },
	{ 0xd1d8adad, "atomic_notifier_chain_unregister" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x29c9c48, "sock_no_mmap" },
	{ 0xdc07f8fe, "atomic_notifier_call_chain" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xf21a8115, "skb_queue_purge" },
	{ 0x7900058d, "sock_no_socketpair" },
	{ 0x21968b7f, "_read_lock_bh" },
	{ 0x5a37ee35, "device_del" },
	{ 0xcdfb7700, "device_register" },
	{ 0x8f338b7f, "sk_alloc" },
	{ 0x93ba42f1, "_write_lock_bh" },
	{ 0x1b7d4074, "printk" },
	{ 0x5152e605, "memcmp" },
	{ 0xed5c73bf, "__tasklet_schedule" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x7e869f04, "sock_no_listen" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x19c25cde, "sock_no_accept" },
	{ 0xc83decb4, "class_create" },
	{ 0x769f4612, "sk_free" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x2c077a33, "platform_device_unregister" },
	{ 0x6e3baace, "bus_unregister" },
	{ 0x2cdfdecd, "sock_no_shutdown" },
	{ 0x79ad224b, "tasklet_kill" },
	{ 0x8123901d, "lock_sock" },
	{ 0x68e0d967, "device_create_file" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x13c12a56, "skb_queue_tail" },
	{ 0x7dceceac, "capable" },
	{ 0x189f12c0, "proto_register" },
	{ 0x548de514, "__alloc_skb" },
	{ 0xa9615177, "put_device" },
	{ 0xede74815, "atomic_notifier_chain_register" },
	{ 0x8e30c1e7, "datagram_poll" },
	{ 0x69b50ff6, "sock_register" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x6495dd71, "proto_unregister" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xe3038592, "skb_under_panic" },
	{ 0xe7ad70c3, "sock_alloc_send_skb" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0xf39bf4d9, "put_cmsg" },
	{ 0x8bf46c54, "_read_unlock_bh" },
	{ 0x29c568d6, "skb_copy_datagram_iovec" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xb0018a09, "sock_no_connect" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x98adfde2, "request_module" },
	{ 0x2394a062, "sock_unregister" },
	{ 0x9fb3dd30, "memcpy_fromiovec" },
	{ 0x93538172, "class_destroy" },
	{ 0x3a233a33, "skb_dequeue" },
	{ 0x4888a014, "__get_user_2" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x96b27088, "__down_failed" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x97df9669, "skb_free_datagram" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1E220576B92376D5041FF08");
