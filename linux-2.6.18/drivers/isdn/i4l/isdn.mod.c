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
	{ 0xec7bc0d, "__mod_timer" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x4827a016, "del_timer" },
	{ 0x28b9d1e0, "qdisc_reset" },
	{ 0x1bc64a0b, "send_sig" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x9b22a5d, "alloc_tty_driver" },
	{ 0x876edfe8, "tty_hung_up_p" },
	{ 0x96befe4d, "no_llseek" },
	{ 0xcc6a24fd, "slhc_init" },
	{ 0xa3e9fd5e, "interruptible_sleep_on" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0x8ead0478, "slhc_remember" },
	{ 0xd73fd490, "slhc_uncompress" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb5ff2338, "tty_register_driver" },
	{ 0x441ce43c, "tty_buffer_request_room" },
	{ 0x2fd1d81c, "vfree" },
	{ 0xd16ac615, "__get_user_1" },
	{ 0x81cfa94c, "put_tty_driver" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xddabf283, "skb_realloc_headroom" },
	{ 0xaf5f9c5f, "nonseekable_open" },
	{ 0x7d11c268, "jiffies" },
	{ 0x70b3c64, "tty_set_operations" },
	{ 0x53c0767c, "sk_chk_filter" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x96f7398e, "netif_rx" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xf21a8115, "skb_queue_purge" },
	{ 0x1b7d4074, "printk" },
	{ 0x5152e605, "memcmp" },
	{ 0xb2433ebe, "tty_ldisc_flush" },
	{ 0x5568be43, "lock_kernel" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x5598dc19, "register_netdev" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x625acc81, "__down_failed_interruptible" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0x7e71b7cf, "slhc_free" },
	{ 0xccac1736, "tty_insert_flip_string_flags" },
	{ 0x5dfe8f1a, "unlock_kernel" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x13c12a56, "skb_queue_tail" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x89ac5254, "tty_std_termios" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xd75beaaf, "tty_wait_until_sent" },
	{ 0x548de514, "__alloc_skb" },
	{ 0xe9d9168f, "arp_find" },
	{ 0x4292364c, "schedule" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xe3038592, "skb_under_panic" },
	{ 0x1e8e5fac, "register_chrdev" },
	{ 0xf60c8df5, "tty_insert_flip_string" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0xed6d6a06, "ether_setup" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x4171b957, "tty_unregister_driver" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x9785f810, "tty_hangup" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0xda8af372, "sk_run_filter" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x51ad53f1, "tty_check_change" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0x5c95a422, "slhc_compress" },
	{ 0x3a233a33, "skb_dequeue" },
	{ 0x41d418f, "tty_flip_buffer_push" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x8235805b, "memmove" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0xd1913548, "tty_wakeup" },
	{ 0xf2a644fb, "copy_from_user" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=slhc";


MODULE_INFO(srcversion, "E25503B50AD7DF9A668130F");
