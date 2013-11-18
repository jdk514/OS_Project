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
	{ 0x1c5b2327, "kmem_cache_destroy" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x3f13c534, "sock_init_data" },
	{ 0x8ab7ffea, "genl_register_family" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xcc4c11a9, "_write_unlock_bh" },
	{ 0x45ecc7f9, "genl_sock" },
	{ 0xc7ec6c27, "strspn" },
	{ 0xfb80340d, "genl_unregister_family" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xf93cb7da, "skb_clone" },
	{ 0xc78194a4, "skb_copy" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x2bc95bd4, "memset" },
	{ 0x21968b7f, "_read_lock_bh" },
	{ 0x8f338b7f, "sk_alloc" },
	{ 0x93ba42f1, "_write_lock_bh" },
	{ 0x1b7d4074, "printk" },
	{ 0x859204af, "sscanf" },
	{ 0x5152e605, "memcmp" },
	{ 0xed5c73bf, "__tasklet_schedule" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x50754443, "dev_base" },
	{ 0xb689e344, "kmem_cache_free" },
	{ 0x625acc81, "__down_failed_interruptible" },
	{ 0x769f4612, "sk_free" },
	{ 0xf46f821, "dev_remove_pack" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x942aa696, "netlink_unicast" },
	{ 0x79ad224b, "tasklet_kill" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x13c12a56, "skb_queue_tail" },
	{ 0x7dceceac, "capable" },
	{ 0x189f12c0, "proto_register" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x69b50ff6, "sock_register" },
	{ 0x4292364c, "schedule" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x6495dd71, "proto_unregister" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xe3038592, "skb_under_panic" },
	{ 0xf39bf4d9, "put_cmsg" },
	{ 0x3235dbeb, "pskb_expand_head" },
	{ 0x8bf46c54, "_read_unlock_bh" },
	{ 0xfc76e10b, "kmem_cache_create" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0x2394a062, "sock_unregister" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x26f952b4, "genl_register_ops" },
	{ 0x3a233a33, "skb_dequeue" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x25da070, "snprintf" },
	{ 0x3047c858, "dev_add_pack" },
	{ 0xc6bf4844, "_spin_trylock_bh" },
	{ 0x8235805b, "memmove" },
	{ 0x7fce77eb, "dev_queue_xmit" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x782b0008, "vsprintf" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BA179BC9E6770DC035F62CB");
