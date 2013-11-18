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
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x9de012e5, "skb_copy_and_csum_dev" },
	{ 0xc52109a7, "skb_pad" },
	{ 0xb8435063, "pci_save_state" },
	{ 0xf251c670, "netif_device_detach" },
	{ 0x1e5b7e01, "generic_mii_ioctl" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0x15b22ef2, "mii_link_ok" },
	{ 0x7f374097, "mii_nway_restart" },
	{ 0xb16b8e31, "mii_ethtool_sset" },
	{ 0x375cd688, "mii_ethtool_gset" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0xf5eef57f, "pci_iounmap" },
	{ 0xa99d5102, "netif_carrier_off" },
	{ 0x5598dc19, "register_netdev" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa3599a5d, "pci_iomap" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0x7d11c268, "jiffies" },
	{ 0x81dabb5c, "netif_receive_skb" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xc767785d, "netif_carrier_on" },
	{ 0x3960713, "ioread16" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0xd8c152cd, "raise_softirq_irqoff" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xe8e53e56, "per_cpu__softnet_data" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x31f06050, "__netif_rx_schedule" },
	{ 0x817c07c7, "netif_device_attach" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x49653ec1, "pci_restore_state" },
	{ 0x7e9fcf24, "pci_set_power_state" },
	{ 0x26e96637, "request_irq" },
	{ 0x4775eacf, "iowrite16" },
	{ 0xc540620f, "mii_check_media" },
	{ 0xbaeb160c, "bitreverse" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0x908aa9b2, "iowrite32" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x548de514, "__alloc_skb" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x1b7d4074, "printk" },
	{ 0x389e200f, "ioread8" },
	{ 0x375bf494, "iowrite8" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=mii";

MODULE_ALIAS("pci:v00001106d00003043sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003065sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003106sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003053sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "25AA3E1B52E6B96D7BC7C53");
