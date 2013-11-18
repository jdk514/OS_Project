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
	{ 0xf9a482f9, "msleep" },
	{ 0x8397630e, "usb_buffer_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x4a5a8112, "ieee80211softmac_stop" },
	{ 0xc6bb1347, "ieee80211softmac_wx_set_genie" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xd509b8b4, "usb_buffer_free" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0x5635c457, "usb_reset_configuration" },
	{ 0xd19c107e, "ieee80211softmac_wx_set_mlme" },
	{ 0xdede2a7e, "free_ieee80211" },
	{ 0xd7d6013d, "ieee80211softmac_wx_set_wap" },
	{ 0x90e2d925, "ieee80211softmac_wx_get_essid" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xd8c152cd, "raise_softirq_irqoff" },
	{ 0x56907021, "ieee80211_rx_mgt" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x733141d3, "ieee80211softmac_wx_get_rate" },
	{ 0x7d11c268, "jiffies" },
	{ 0x8920c935, "ieee80211softmac_wx_get_wap" },
	{ 0x5eea5f42, "usb_deregister" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0x5152e605, "memcmp" },
	{ 0x5598dc19, "register_netdev" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x5765beca, "ieee80211_rx" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xcd844759, "ieee80211softmac_wx_set_essid" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x4bffdb41, "ieee80211softmac_start" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0x9bdd8d3b, "ieee80211softmac_wx_get_genie" },
	{ 0xefb6c0ca, "ieee80211_set_geo" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x4b5bd3c, "ieee80211softmac_wx_get_scan_results" },
	{ 0xc7d3775e, "usb_reset_device" },
	{ 0xbb7ca41d, "usb_bulk_msg" },
	{ 0xe3038592, "skb_under_panic" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0xc2fd27c0, "usb_get_intf" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xf3dcc4a5, "ieee80211_wx_get_auth" },
	{ 0x2a6e3dd7, "ieee80211softmac_wx_trigger_scan" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x7a6de1c3, "alloc_ieee80211softmac" },
	{ 0x28f35813, "scnprintf" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x70dc0e3, "request_firmware" },
	{ 0xdcf7ed7f, "ieee80211_wx_set_encodeext" },
	{ 0xfd59ba5f, "ieee80211_wx_set_auth" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0xafeef0f3, "ieee80211_txb_free" },
	{ 0x7db43f29, "ieee80211softmac_wx_set_rate" },
	{ 0x7e0221e4, "complete" },
	{ 0x742b91a8, "ieee80211_wx_get_encode" },
	{ 0x579a0956, "ieee80211_wx_set_encode" },
	{ 0x736bb1ef, "wait_for_completion_timeout" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0x33934162, "release_firmware" },
	{ 0x6653308e, "ieee80211_wx_get_encodeext" },
	{ 0x1e62b30a, "usb_alloc_urb" },
	{ 0xea637a5d, "usb_put_intf" },
	{ 0xe8e53e56, "per_cpu__softnet_data" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ieee80211softmac,ieee80211";

MODULE_ALIAS("usb:v0ACEp1211d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p6001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v126FpA006d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v6891pA727d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p9071d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v157Ep300Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0ACEp1215d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v157Ep300Dd*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "061166A516CB32EBFB8AD47");
