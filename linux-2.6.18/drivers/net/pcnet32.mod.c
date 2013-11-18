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
	{ 0xa5f201bb, "ethtool_op_get_tso" },
	{ 0x3140fca, "ethtool_op_get_sg" },
	{ 0xf7712dbb, "ethtool_op_get_tx_csum" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x4c3af445, "__request_region" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x5598dc19, "register_netdev" },
	{ 0xab600421, "probe_irq_off" },
	{ 0xb121390a, "probe_irq_on" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x5152e605, "memcmp" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0x26e96637, "request_irq" },
	{ 0xc767785d, "netif_carrier_on" },
	{ 0x2e60bace, "memcpy" },
	{ 0xa99d5102, "netif_carrier_off" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0x1e5b7e01, "generic_mii_ioctl" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0xd8c152cd, "raise_softirq_irqoff" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xe8e53e56, "per_cpu__softnet_data" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x96f7398e, "netif_rx" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x375cd688, "mii_ethtool_gset" },
	{ 0xb16b8e31, "mii_ethtool_sset" },
	{ 0x7f374097, "mii_nway_restart" },
	{ 0x15b22ef2, "mii_link_ok" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x1b7d4074, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=mii";

MODULE_ALIAS("pci:v00001022d00002001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00002000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00002000sv*sd*bc02sc00i*");

MODULE_INFO(srcversion, "F81443556AAE169CBF80F55");
