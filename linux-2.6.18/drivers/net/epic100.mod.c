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
	{ 0x3140fca, "ethtool_op_get_sg" },
	{ 0xf7712dbb, "ethtool_op_get_tx_csum" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x26e96637, "request_irq" },
	{ 0x5598dc19, "register_netdev" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0xc52109a7, "skb_pad" },
	{ 0x1e5b7e01, "generic_mii_ioctl" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xd8c152cd, "raise_softirq_irqoff" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xe8e53e56, "per_cpu__softnet_data" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x31f06050, "__netif_rx_schedule" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0xb16b8e31, "mii_ethtool_sset" },
	{ 0x375cd688, "mii_ethtool_gset" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x7f374097, "mii_nway_restart" },
	{ 0x15b22ef2, "mii_link_ok" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x7d11c268, "jiffies" },
	{ 0x81dabb5c, "netif_receive_skb" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x548de514, "__alloc_skb" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5152e605, "memcmp" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0x1b7d4074, "printk" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=mii";

MODULE_ALIAS("pci:v000010B8d00000005sv00001092sd00000AB4bc*sc*i*");
MODULE_ALIAS("pci:v000010B8d00000005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B8d00000006sv*sd*bc02sc00i*");

MODULE_INFO(srcversion, "1FD55B1E91C8C9E86C09C7C");
