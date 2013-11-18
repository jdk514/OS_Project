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
	{ 0x81279ce0, "register_netdevice" },
	{ 0x52c0a61d, "_write_unlock_irqrestore" },
	{ 0x24c26754, "iw_handler_set_thrspy" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x7930fe23, "unregister_netdevice" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0x4827a016, "del_timer" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x3093180f, "_write_lock_irqsave" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc767785d, "netif_carrier_on" },
	{ 0xf93cb7da, "skb_clone" },
	{ 0xc78194a4, "skb_copy" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0x806d5133, "param_array_get" },
	{ 0xa99d5102, "netif_carrier_off" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xddabf283, "skb_realloc_headroom" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x7d11c268, "jiffies" },
	{ 0x96f7398e, "netif_rx" },
	{ 0x518accb0, "wireless_spy_update" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xf21a8115, "skb_queue_purge" },
	{ 0xc12e8a55, "proc_mkdir" },
	{ 0x21968b7f, "_read_lock_bh" },
	{ 0xe6be1c28, "proc_net" },
	{ 0x1b7d4074, "printk" },
	{ 0x5152e605, "memcmp" },
	{ 0x46688607, "iw_handler_get_spy" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x9a5962fa, "wireless_send_event" },
	{ 0xf86e951e, "dev_close" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0xe96df29f, "dev_open" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x13c12a56, "skb_queue_tail" },
	{ 0x7dceceac, "capable" },
	{ 0x817c07c7, "netif_device_attach" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xf251c670, "netif_device_detach" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0x8372fc9a, "iw_handler_get_thrspy" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xe3038592, "skb_under_panic" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x3235dbeb, "pskb_expand_head" },
	{ 0x8bf46c54, "_read_unlock_bh" },
	{ 0xed6d6a06, "ether_setup" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0xebfa457d, "iw_handler_set_spy" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x98adfde2, "request_module" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x298255fd, "dev_alloc_name" },
	{ 0x3a233a33, "skb_dequeue" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0x25da070, "snprintf" },
	{ 0x7fce77eb, "dev_queue_xmit" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x30151dfe, "ieee80211_get_crypto_ops" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ieee80211_crypt";


MODULE_INFO(srcversion, "844D14A5E33C02427821285");
