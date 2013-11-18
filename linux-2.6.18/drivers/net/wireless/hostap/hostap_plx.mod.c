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
	{ 0x70a92fd0, "hostap_init_ap_proc" },
	{ 0x4a8bda6d, "hostap_init_proc" },
	{ 0xa99d5102, "netif_carrier_off" },
	{ 0x9ccd0bdb, "hostap_add_interface" },
	{ 0x26e96637, "request_irq" },
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
	{ 0x9eac042a, "__ioremap" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x9a5962fa, "wireless_send_event" },
	{ 0xed5c73bf, "__tasklet_schedule" },
	{ 0x13c12a56, "skb_queue_tail" },
	{ 0x42020b6e, "hostap_get_stats" },
	{ 0x3abcbf80, "hostap_dump_tx_header" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
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
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0x94ce50b1, "hostap_set_antsel" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x760a0f4f, "yield" },
	{ 0x5ccff92a, "hostap_set_word" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0x8f69cb52, "prism2_update_comms_qual" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x5152e605, "memcmp" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x229895ef, "hostap_info_process" },
	{ 0x7e79a8dd, "hostap_80211_rx" },
	{ 0x27a069d6, "hostap_dump_rx_header" },
	{ 0x3a233a33, "skb_dequeue" },
	{ 0x4935e5e5, "hostap_handle_sta_tx_exc" },
	{ 0x8235805b, "memmove" },
	{ 0x6903f16c, "hostap_80211_get_hdrlen" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0x7d11c268, "jiffies" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xedc03953, "iounmap" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0xc06e26f7, "kfree_skb" },
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
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x37a0cba, "kfree" },
	{ 0x1b7d4074, "printk" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=hostap";

MODULE_ALIAS("pci:v000010B7d00007770sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000111Ad00001023sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000126Cd00008030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001562d00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001385d00004100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015E8d00000130sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015E8d00000131sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001638d00001100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016ABd00001100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016ABd00001101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016ABd00001102sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016ABd00001103sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016ECd00003685sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000EC80d0000EC00sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C200C8B95C51D06971AACFD");
