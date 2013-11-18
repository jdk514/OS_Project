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
	{ 0x8372fc9a, "iw_handler_get_thrspy" },
	{ 0x24c26754, "iw_handler_set_thrspy" },
	{ 0x46688607, "iw_handler_get_spy" },
	{ 0xebfa457d, "iw_handler_set_spy" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x2bc95bd4, "memset" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x31153eb8, "destroy_workqueue" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x91ed7e93, "sysfs_remove_group" },
	{ 0x692d1a65, "sysfs_create_group" },
	{ 0x26e96637, "request_irq" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xf2766228, "__create_workqueue" },
	{ 0x3762cb6e, "ioremap_nocache" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0x9728b2f9, "pci_set_consistent_dma_mask" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0xed5c73bf, "__tasklet_schedule" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x742b91a8, "ieee80211_wx_get_encode" },
	{ 0x579a0956, "ieee80211_wx_set_encode" },
	{ 0x63aef1c3, "ieee80211_wx_get_scan" },
	{ 0xea1affaa, "ieee80211_freq_to_channel" },
	{ 0x6653308e, "ieee80211_wx_get_encodeext" },
	{ 0xdcf7ed7f, "ieee80211_wx_set_encodeext" },
	{ 0xff271466, "pci_choose_state" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0xb8435063, "pci_save_state" },
	{ 0xf251c670, "netif_device_detach" },
	{ 0x2e60bace, "memcpy" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x38d967c9, "driver_remove_file" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x9d465476, "driver_create_file" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xc767785d, "netif_carrier_on" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x9a5962fa, "wireless_send_event" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x96f7398e, "netif_rx" },
	{ 0xe3038592, "skb_under_panic" },
	{ 0x56907021, "ieee80211_rx_mgt" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0x5765beca, "ieee80211_rx" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0xc78194a4, "skb_copy" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0xefb6c0ca, "ieee80211_set_geo" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x70dc0e3, "request_firmware" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x8235805b, "memmove" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x6f67061, "ieee80211_channel_to_index" },
	{ 0x84732315, "ieee80211_get_geo" },
	{ 0xa9fb135f, "escape_essid" },
	{ 0x5152e605, "memcmp" },
	{ 0x33934162, "release_firmware" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0xafeef0f3, "ieee80211_txb_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x859204af, "sscanf" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x2910b276, "ieee80211_is_valid_channel" },
	{ 0x5598dc19, "register_netdev" },
	{ 0x5f14efa7, "alloc_ieee80211" },
	{ 0xdede2a7e, "free_ieee80211" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0xa99d5102, "netif_carrier_off" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x622ab174, "queue_delayed_work" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x7d11c268, "jiffies" },
	{ 0x8d3894f2, "_ctype" },
	{ 0x25da070, "snprintf" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8c0be9b4, "queue_work" },
	{ 0x817c07c7, "netif_device_attach" },
	{ 0xa09539e, "pci_bus_write_config_dword" },
	{ 0x59981248, "pci_bus_read_config_dword" },
	{ 0x49653ec1, "pci_restore_state" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x7e9fcf24, "pci_set_power_state" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x1b7d4074, "printk" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ieee80211";

MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002701bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002702bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002711bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002712bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002721bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002722bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002731bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002732bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002741bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv0000103Csd00002741bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002742bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002751bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002752bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002753bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002754bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002761bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002762bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004220sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004221sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004223sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004224sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "741238A39A8C7372DBF7F77");
