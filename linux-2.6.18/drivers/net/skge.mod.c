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
	{ 0x3140fca, "ethtool_op_get_sg" },
	{ 0xf7712dbb, "ethtool_op_get_tx_csum" },
	{ 0xf7013d4e, "ethtool_op_get_link" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0x7e3f931f, "_spin_trylock" },
	{ 0xc52109a7, "skb_pad" },
	{ 0xbaeb160c, "bitreverse" },
	{ 0x81dabb5c, "netif_receive_skb" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x5598dc19, "register_netdev" },
	{ 0x25da070, "snprintf" },
	{ 0x26e96637, "request_irq" },
	{ 0x3762cb6e, "ioremap_nocache" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x9728b2f9, "pci_set_consistent_dma_mask" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xff271466, "pci_choose_state" },
	{ 0xb8435063, "pci_save_state" },
	{ 0xf251c670, "netif_device_detach" },
	{ 0xedc03953, "iounmap" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0x7dceceac, "capable" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0x2d98d0b8, "ethtool_op_set_tx_csum" },
	{ 0x4767d536, "ethtool_op_set_sg" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x31f06050, "__netif_rx_schedule" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0xf86e951e, "dev_close" },
	{ 0x817c07c7, "netif_device_attach" },
	{ 0x38379ca3, "pci_enable_wake" },
	{ 0x49653ec1, "pci_restore_state" },
	{ 0x7e9fcf24, "pci_set_power_state" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0x548de514, "__alloc_skb" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0xc767785d, "netif_carrier_on" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0xa99d5102, "netif_carrier_off" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x7d11c268, "jiffies" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xa09539e, "pci_bus_write_config_dword" },
	{ 0x59981248, "pci_bus_read_config_dword" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1b7d4074, "printk" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000010B7d00001700sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d000080EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00004300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00004320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004C00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004B01sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00005005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001371d0000434Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001737d00001064sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001737d00001032sv*sd00000015bc*sc*i*");

MODULE_INFO(srcversion, "AB816507046035F0986FB53");
