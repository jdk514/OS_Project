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
	{ 0x845b7a76, "device_remove_file" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x7819fee4, "debugfs_create_dir" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x2910b276, "ieee80211_is_valid_channel" },
	{ 0x4827a016, "del_timer" },
	{ 0x2f328972, "free_ieee80211softmac" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x4a5a8112, "ieee80211softmac_stop" },
	{ 0xc6bb1347, "ieee80211softmac_wx_set_genie" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0xd7d6013d, "ieee80211softmac_wx_set_wap" },
	{ 0x90e2d925, "ieee80211softmac_wx_get_essid" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x84732315, "ieee80211_get_geo" },
	{ 0xd8c152cd, "raise_softirq_irqoff" },
	{ 0x56907021, "ieee80211_rx_mgt" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xd5b19fa3, "debugfs_create_file" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x733141d3, "ieee80211softmac_wx_get_rate" },
	{ 0x7d11c268, "jiffies" },
	{ 0x8920c935, "ieee80211softmac_wx_get_wap" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0xa13798f8, "printk_ratelimit" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x2bc95bd4, "memset" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0x49653ec1, "pci_restore_state" },
	{ 0xf5eef57f, "pci_iounmap" },
	{ 0xc71aedb5, "cancel_rearming_delayed_work" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0xf7013d4e, "ethtool_op_get_link" },
	{ 0x859204af, "sscanf" },
	{ 0x5152e605, "memcmp" },
	{ 0xed5c73bf, "__tasklet_schedule" },
	{ 0x5598dc19, "register_netdev" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0xaab4112d, "debugfs_remove" },
	{ 0xa09539e, "pci_bus_write_config_dword" },
	{ 0x5765beca, "ieee80211_rx" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xcd844759, "ieee80211softmac_wx_set_essid" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x4bffdb41, "ieee80211softmac_start" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0x9bdd8d3b, "ieee80211softmac_wx_get_genie" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xefb6c0ca, "ieee80211_set_geo" },
	{ 0x68e0d967, "device_create_file" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x7dceceac, "capable" },
	{ 0x817c07c7, "netif_device_attach" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xf251c670, "netif_device_detach" },
	{ 0x548de514, "__alloc_skb" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0x59981248, "pci_bus_read_config_dword" },
	{ 0x4b5bd3c, "ieee80211softmac_wx_get_scan_results" },
	{ 0xd3dad18a, "schedule_delayed_work" },
	{ 0x26e96637, "request_irq" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x707e31d1, "hwrng_register" },
	{ 0x683a3221, "param_set_copystring" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xf3dcc4a5, "ieee80211_wx_get_auth" },
	{ 0x2a6e3dd7, "ieee80211softmac_wx_trigger_scan" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x7e9fcf24, "pci_set_power_state" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x4775eacf, "iowrite16" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0x7a6de1c3, "alloc_ieee80211softmac" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x70dc0e3, "request_firmware" },
	{ 0xdcf7ed7f, "ieee80211_wx_set_encodeext" },
	{ 0x3960713, "ioread16" },
	{ 0xfd59ba5f, "ieee80211_wx_set_auth" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0xafeef0f3, "ieee80211_txb_free" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x7db43f29, "ieee80211softmac_wx_set_rate" },
	{ 0x25da070, "snprintf" },
	{ 0xff271466, "pci_choose_state" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x93304684, "param_get_string" },
	{ 0x8235805b, "memmove" },
	{ 0xa3599a5d, "pci_iomap" },
	{ 0x742b91a8, "ieee80211_wx_get_encode" },
	{ 0xd205af0a, "hwrng_unregister" },
	{ 0x96b27088, "__down_failed" },
	{ 0x579a0956, "ieee80211_wx_set_encode" },
	{ 0x908aa9b2, "iowrite32" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x9728b2f9, "pci_set_consistent_dma_mask" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x33934162, "release_firmware" },
	{ 0x2241a928, "ioread32" },
	{ 0x6653308e, "ieee80211_wx_get_encodeext" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xb8435063, "pci_save_state" },
	{ 0xe8e53e56, "per_cpu__softnet_data" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ieee80211,ieee80211softmac";

MODULE_ALIAS("pci:v000014E4d00004301sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004307sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004318sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004319sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004324sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004325sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5D3737EC1140A5CF673660E");
