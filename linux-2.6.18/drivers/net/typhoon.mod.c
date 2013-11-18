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
	{ 0x6900ec70, "ethtool_op_set_tso" },
	{ 0xa5f201bb, "ethtool_op_get_tso" },
	{ 0x4767d536, "ethtool_op_set_sg" },
	{ 0x3140fca, "ethtool_op_get_sg" },
	{ 0x2d98d0b8, "ethtool_op_set_tx_csum" },
	{ 0xf7712dbb, "ethtool_op_get_tx_csum" },
	{ 0xf7013d4e, "ethtool_op_get_link" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x7d4e29ae, "page_address" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x5598dc19, "register_netdev" },
	{ 0xb8435063, "pci_save_state" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xa3599a5d, "pci_iomap" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0xfe0df06f, "pci_set_mwi" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0xff271466, "pci_choose_state" },
	{ 0xf251c670, "netif_device_detach" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x26e96637, "request_irq" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0x25da070, "snprintf" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x31f06050, "__netif_rx_schedule" },
	{ 0x81dabb5c, "netif_receive_skb" },
	{ 0x7d11c268, "jiffies" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0xdf7ae87e, "pci_clear_mwi" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0xf5eef57f, "pci_iounmap" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0xd8c152cd, "raise_softirq_irqoff" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xe8e53e56, "per_cpu__softnet_data" },
	{ 0x817c07c7, "netif_device_attach" },
	{ 0x49653ec1, "pci_restore_state" },
	{ 0x7e9fcf24, "pci_set_power_state" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0xd7359fa8, "csum_partial_copy_generic" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x5152e605, "memcmp" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd0ee38b8, "schedule_timeout_uninterruptible" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xbaeb160c, "bitreverse" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x7e3f931f, "_spin_trylock" },
	{ 0xc767785d, "netif_carrier_on" },
	{ 0xa99d5102, "netif_carrier_off" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x1b7d4074, "printk" },
	{ 0x908aa9b2, "iowrite32" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2241a928, "ioread32" },
	{ 0x38379ca3, "pci_enable_wake" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000010B7d00009900sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009902sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009903sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009904sv*sd00001000bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009904sv*sd00001102bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009904sv*sd00002000bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009905sv*sd00001101bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009905sv*sd00001102bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009905sv*sd00002101bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009905sv*sd00002102bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009908sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009909sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d0000990Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "EE9BC702AA40E2553FBF5D6");
