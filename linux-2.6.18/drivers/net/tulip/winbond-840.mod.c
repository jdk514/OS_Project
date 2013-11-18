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
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x26e96637, "request_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0xd8c152cd, "raise_softirq_irqoff" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xe8e53e56, "per_cpu__softnet_data" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x96f7398e, "netif_rx" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xf251c670, "netif_device_detach" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0x7dceceac, "capable" },
	{ 0x15b22ef2, "mii_link_ok" },
	{ 0x7f374097, "mii_nway_restart" },
	{ 0xb16b8e31, "mii_ethtool_sset" },
	{ 0x375cd688, "mii_ethtool_gset" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0xf5eef57f, "pci_iounmap" },
	{ 0x5598dc19, "register_netdev" },
	{ 0xa3599a5d, "pci_iomap" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0x817c07c7, "netif_device_attach" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x375bf494, "iowrite8" },
	{ 0xbaeb160c, "bitreverse" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0xc767785d, "netif_carrier_on" },
	{ 0xa99d5102, "netif_carrier_off" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x1b7d4074, "printk" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x2241a928, "ioread32" },
	{ 0x908aa9b2, "iowrite32" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=mii";

MODULE_ALIAS("pci:v00001050d00000840sv*sd00008153bc*sc*i*");
MODULE_ALIAS("pci:v00001050d00000840sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F6d00002011sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "28C7B19A1001EB589E658D4");
