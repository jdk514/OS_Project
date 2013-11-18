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
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0x5765beca, "ieee80211_rx" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x56907021, "ieee80211_rx_mgt" },
	{ 0x8235805b, "memmove" },
	{ 0x692d1a65, "sysfs_create_group" },
	{ 0x5598dc19, "register_netdev" },
	{ 0x26e96637, "request_irq" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xf2766228, "__create_workqueue" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x5f14efa7, "alloc_ieee80211" },
	{ 0x3762cb6e, "ioremap_nocache" },
	{ 0xed5c73bf, "__tasklet_schedule" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x6653308e, "ieee80211_wx_get_encodeext" },
	{ 0xdcf7ed7f, "ieee80211_wx_set_encodeext" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x742b91a8, "ieee80211_wx_get_encode" },
	{ 0x579a0956, "ieee80211_wx_set_encode" },
	{ 0x63aef1c3, "ieee80211_wx_get_scan" },
	{ 0x5152e605, "memcmp" },
	{ 0xb8435063, "pci_save_state" },
	{ 0xf251c670, "netif_device_detach" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0xdede2a7e, "free_ieee80211" },
	{ 0xedc03953, "iounmap" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0x91ed7e93, "sysfs_remove_group" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x2e60bace, "memcpy" },
	{ 0xc767785d, "netif_carrier_on" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x548de514, "__alloc_skb" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0x31153eb8, "destroy_workqueue" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x9a5962fa, "wireless_send_event" },
	{ 0x817c07c7, "netif_device_attach" },
	{ 0xa09539e, "pci_bus_write_config_dword" },
	{ 0x59981248, "pci_bus_read_config_dword" },
	{ 0x49653ec1, "pci_restore_state" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x7e9fcf24, "pci_set_power_state" },
	{ 0xefb6c0ca, "ieee80211_set_geo" },
	{ 0x70dc0e3, "request_firmware" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x2bc95bd4, "memset" },
	{ 0xd0ee38b8, "schedule_timeout_uninterruptible" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x7d11c268, "jiffies" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x8c0be9b4, "queue_work" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0xa99d5102, "netif_carrier_off" },
	{ 0xb56717cf, "xtime" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x622ab174, "queue_delayed_work" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x93805374, "max_cstate" },
	{ 0xafeef0f3, "ieee80211_txb_free" },
	{ 0x33934162, "release_firmware" },
	{ 0x8d3894f2, "_ctype" },
	{ 0x25da070, "snprintf" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1b7d4074, "printk" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ieee80211";

MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002520bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002521bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002524bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002525bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002526bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002522bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002523bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002527bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002528bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002529bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd0000252Bbc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd0000252Cbc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd0000252Dbc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002550bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002551bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002553bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002554bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002555bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002560bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002562bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002563bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002561bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002565bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002566bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002567bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002570bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002580bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002582bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002583bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002581bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002585bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002586bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002587bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002590bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002592bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002591bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002593bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002596bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002598bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd000025A0bc*sc*i*");

MODULE_INFO(srcversion, "DFA03E56090DA1F82F3B4A5");
