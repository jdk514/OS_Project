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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x61bed476, "up_read" },
	{ 0xcc4c11a9, "_write_unlock_bh" },
	{ 0x27514859, "class_device_destroy" },
	{ 0xd10fc04d, "class_device_create" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0xcc6a24fd, "slhc_init" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0x8ead0478, "slhc_remember" },
	{ 0xd73fd490, "slhc_uncompress" },
	{ 0xcf81566a, "alloc_netdev" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0x53c0767c, "sk_chk_filter" },
	{ 0x1985af2a, "down_read" },
	{ 0x96f7398e, "netif_rx" },
	{ 0xc4be936d, "__pskb_pull_tail" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xf21a8115, "skb_queue_purge" },
	{ 0x21968b7f, "_read_lock_bh" },
	{ 0x93ba42f1, "_write_lock_bh" },
	{ 0x1b7d4074, "printk" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x5598dc19, "register_netdev" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xc83decb4, "class_create" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0xde0c05c3, "up_write" },
	{ 0xbca92367, "down_write" },
	{ 0x7e71b7cf, "slhc_free" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x13c12a56, "skb_queue_tail" },
	{ 0x7dceceac, "capable" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x4292364c, "schedule" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xe3038592, "skb_under_panic" },
	{ 0x1e8e5fac, "register_chrdev" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x8bf46c54, "_read_unlock_bh" },
	{ 0x2f2a91b1, "skb_pull_rcsum" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0xda8af372, "sk_run_filter" },
	{ 0x37a0cba, "kfree" },
	{ 0x98adfde2, "request_module" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0x5c95a422, "slhc_compress" },
	{ 0x93538172, "class_destroy" },
	{ 0x3a233a33, "skb_dequeue" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0xb1922cfe, "skb_copy_bits" },
	{ 0xf39d9785, "slhc_toss" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0xf1f0ab07, "__init_rwsem" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=slhc";


MODULE_INFO(srcversion, "4377CB5484C03E7EEA77B2A");
