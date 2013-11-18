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
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x93304684, "param_get_string" },
	{ 0x683a3221, "param_set_copystring" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xed5c73bf, "__tasklet_schedule" },
	{ 0x13c12a56, "skb_queue_tail" },
	{ 0x9a5962fa, "wireless_send_event" },
	{ 0xf251c670, "netif_device_detach" },
	{ 0xb9d47c9b, "hostap_set_hostapd_sta" },
	{ 0xd815f9fe, "hostap_set_hostapd" },
	{ 0xf9294dd0, "hostap_remove_proc" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0xdb82d826, "hostap_free_data" },
	{ 0xf21a8115, "skb_queue_purge" },
	{ 0x4827a016, "del_timer" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0xeeb1f52e, "hostap_remove_interface" },
	{ 0x42020b6e, "hostap_get_stats" },
	{ 0x3abcbf80, "hostap_dump_tx_header" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xa143539c, "pcmcia_register_driver" },
	{ 0x70a92fd0, "hostap_init_ap_proc" },
	{ 0x4a8bda6d, "hostap_init_proc" },
	{ 0xa99d5102, "netif_carrier_off" },
	{ 0x9ccd0bdb, "hostap_add_interface" },
	{ 0x94c5aaac, "pcmcia_request_configuration" },
	{ 0xd9273e5a, "pcmcia_request_irq" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x1c2ff1f2, "hostap_init_data" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x81279ce0, "register_netdevice" },
	{ 0x298255fd, "dev_alloc_name" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x59ca6c5d, "hostap_80211_header_parse" },
	{ 0xf81a10a7, "hostap_master_start_xmit" },
	{ 0x2864403f, "hostap_setup_dev" },
	{ 0x9b4b4a63, "hostap_info_init" },
	{ 0xc089a779, "hostap_set_multicast_list_queue" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xd12ca23c, "pccard_get_next_tuple" },
	{ 0xb4fb5977, "cs_error" },
	{ 0x8a8d6f30, "pcmcia_request_io" },
	{ 0x838abde1, "pcmcia_get_configuration_info" },
	{ 0xcd2ac1c1, "pccard_parse_tuple" },
	{ 0xa2d20b5c, "pccard_get_tuple_data" },
	{ 0xbc08d5a8, "pccard_get_first_tuple" },
	{ 0x2bc95bd4, "memset" },
	{ 0x8f69cb52, "prism2_update_comms_qual" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x229895ef, "hostap_info_process" },
	{ 0x7e79a8dd, "hostap_80211_rx" },
	{ 0x27a069d6, "hostap_dump_rx_header" },
	{ 0x3a233a33, "skb_dequeue" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x4935e5e5, "hostap_handle_sta_tx_exc" },
	{ 0x8235805b, "memmove" },
	{ 0x6903f16c, "hostap_80211_get_hdrlen" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0x66d603cb, "pcmcia_dev_present" },
	{ 0xe91eae94, "pcmcia_access_configuration_register" },
	{ 0x13d45792, "pcmcia_disable_device" },
	{ 0x8ee0ad09, "hostap_set_auth_algs" },
	{ 0xb9726906, "hostap_set_roaming" },
	{ 0x8f1e462, "hostap_set_encryption" },
	{ 0x5a174a30, "hostap_set_string" },
	{ 0x358d9607, "hostap_get_porttype" },
	{ 0x2e60bace, "memcpy" },
	{ 0xcbb24812, "hostap_check_sta_fw_version" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x625acc81, "__down_failed_interruptible" },
	{ 0xda4008e6, "cond_resched" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x817c07c7, "netif_device_attach" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0x94ce50b1, "hostap_set_antsel" },
	{ 0x5ccff92a, "hostap_set_word" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0x5152e605, "memcmp" },
	{ 0x760a0f4f, "yield" },
	{ 0x7d11c268, "jiffies" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x37a0cba, "kfree" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1b7d4074, "printk" },
	{ 0x30910043, "pcmcia_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=hostap";

MODULE_ALIAS("pcmcia:m000Bc7100f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m000Bc7300f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0101c0777f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0126c8000f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0138c0002f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0250c0002f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m026Fc030Bf*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0274c1612f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0274c1613f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m028Ac0002f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m02AAc0002f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m02D2c0001f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m50C2c0001f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m50C2c7300f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:mD601c0002f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:mD601c0005f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:mD601c0010f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0156c0002f*fn*pfn*pa74C5E40Dpb*pc*pd*");
MODULE_ALIAS("pcmcia:m0156c0002f*fn*pfn*pa4B801A17pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn00pfn*pa7A954BD9pb74BE00C6pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa4B801A17pb6345A0BFpcC9049A39pdC23ADC0E*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paE6EC52CEpb08649AF2pc4B74BAA0pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa71B18589pbB6F1B0ABpc4B74BAA0pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa11D901AFpb6E9BD926pc4B74BAA0pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paC4F8B18Bpb474A1F2Apc4B74BAA0pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2DECECE3pb82067C18pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa54F7C49Cpb15A75E5Bpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa74C5E40DpbDB472A18pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0733CC81pb0C52F395pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa273FE3DBpb32A1EAEEpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa1CADD3E5pbE697636Cpc7A5BFCF1pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paC7B8DF9Dpb1700D087pc4B74BAA0pd*");

MODULE_INFO(srcversion, "927DEDB82A7526292FE2606");
