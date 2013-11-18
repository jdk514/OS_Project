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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xb0b0826b, "ieee80211_crypt_quiescing" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x7d11c268, "jiffies" },
	{ 0x96f7398e, "netif_rx" },
	{ 0x518accb0, "wireless_spy_update" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x2bc95bd4, "memset" },
	{ 0x1b7d4074, "printk" },
	{ 0x5152e605, "memcmp" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x279e265f, "ieee80211_crypt_deinit_handler" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x548de514, "__alloc_skb" },
	{ 0xe3038592, "skb_under_panic" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x420de98a, "ieee80211_crypt_delayed_deinit" },
	{ 0x37a0cba, "kfree" },
	{ 0x98adfde2, "request_module" },
	{ 0x25da070, "snprintf" },
	{ 0xaa19d95b, "ieee80211_crypt_deinit_entries" },
	{ 0x30151dfe, "ieee80211_get_crypto_ops" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ieee80211_crypt";


MODULE_INFO(srcversion, "8AE8C879F9BF5637336E61F");
