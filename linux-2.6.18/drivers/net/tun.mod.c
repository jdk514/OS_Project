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
	{ 0x96befe4d, "no_llseek" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x14126ae8, "kill_fasync" },
	{ 0x13c12a56, "skb_queue_tail" },
	{ 0x8499fd55, "__dev_get_by_name" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x81279ce0, "register_netdevice" },
	{ 0x298255fd, "dev_alloc_name" },
	{ 0xed6d6a06, "ether_setup" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xcf81566a, "alloc_netdev" },
	{ 0x7dceceac, "capable" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x1ef3eb01, "misc_register" },
	{ 0x1b7d4074, "printk" },
	{ 0xf21a8115, "skb_queue_purge" },
	{ 0xe6df8b19, "f_setown" },
	{ 0x54ee23d3, "fasync_helper" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x29c568d6, "skb_copy_datagram_iovec" },
	{ 0x9ceb163c, "memcpy_toiovec" },
	{ 0x5152e605, "memcmp" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0x4292364c, "schedule" },
	{ 0x3a233a33, "skb_dequeue" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xbaeb160c, "bitreverse" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0x7d11c268, "jiffies" },
	{ 0x62c81488, "netif_rx_ni" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x9fb3dd30, "memcpy_fromiovec" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x7930fe23, "unregister_netdevice" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x25dd4bad, "misc_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C0FE3C11A88F4A24924EFDD");
