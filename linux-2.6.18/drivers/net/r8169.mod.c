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
	{ 0x3c8d7cc1, "ethtool_op_get_perm_addr" },
	{ 0x6900ec70, "ethtool_op_set_tso" },
	{ 0xa5f201bb, "ethtool_op_get_tso" },
	{ 0x4767d536, "ethtool_op_set_sg" },
	{ 0x3140fca, "ethtool_op_get_sg" },
	{ 0x2d98d0b8, "ethtool_op_set_tx_csum" },
	{ 0xf7712dbb, "ethtool_op_get_tx_csum" },
	{ 0xf7013d4e, "ethtool_op_get_link" },
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xc52109a7, "skb_pad" },
	{ 0x7d4e29ae, "page_address" },
	{ 0xff271466, "pci_choose_state" },
	{ 0xb8435063, "pci_save_state" },
	{ 0xf251c670, "netif_device_detach" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0xd8c152cd, "raise_softirq_irqoff" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xe8e53e56, "per_cpu__softnet_data" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0xfe7afd73, "pci_bus_write_config_byte" },
	{ 0x5598dc19, "register_netdev" },
	{ 0xdf7ae87e, "pci_clear_mwi" },
	{ 0x9eac042a, "__ioremap" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0x20645ff6, "pci_find_capability" },
	{ 0xfe0df06f, "pci_set_mwi" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x26e96637, "request_irq" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x31f06050, "__netif_rx_schedule" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0xa99d5102, "netif_carrier_off" },
	{ 0xc767785d, "netif_carrier_on" },
	{ 0xf3b39202, "mod_timer" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xbaeb160c, "bitreverse" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0x81dabb5c, "netif_receive_skb" },
	{ 0x7d11c268, "jiffies" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x1b7d4074, "printk" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x38379ca3, "pci_enable_wake" },
	{ 0x49653ec1, "pci_restore_state" },
	{ 0x7e9fcf24, "pci_set_power_state" },
	{ 0x817c07c7, "netif_device_attach" },
	{ 0xd3dad18a, "schedule_delayed_work" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x2e60bace, "memcpy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000010ECd00008169sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008129sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016ECd00000116sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001737d00001032sv*sd00000024bc*sc*i*");

MODULE_INFO(srcversion, "D5EDA4980B92CA2CF677B62");
