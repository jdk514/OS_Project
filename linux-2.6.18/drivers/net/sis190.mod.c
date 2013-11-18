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
	{ 0xf7013d4e, "ethtool_op_get_link" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x26e96637, "request_irq" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0xc52109a7, "skb_pad" },
	{ 0x5598dc19, "register_netdev" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xdd334e07, "pci_dev_put" },
	{ 0xfe7afd73, "pci_bus_write_config_byte" },
	{ 0x129cbf09, "pci_get_device" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0x9eac042a, "__ioremap" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc767785d, "netif_carrier_on" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2e60bace, "memcpy" },
	{ 0xa99d5102, "netif_carrier_off" },
	{ 0xf3b39202, "mod_timer" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0x1e5b7e01, "generic_mii_ioctl" },
	{ 0x7f374097, "mii_nway_restart" },
	{ 0xb16b8e31, "mii_ethtool_sset" },
	{ 0x375cd688, "mii_ethtool_gset" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0xd8c152cd, "raise_softirq_irqoff" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xe8e53e56, "per_cpu__softnet_data" },
	{ 0x7d11c268, "jiffies" },
	{ 0x96f7398e, "netif_rx" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x548de514, "__alloc_skb" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xbaeb160c, "bitreverse" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0x1b7d4074, "printk" },
	{ 0xf9a482f9, "msleep" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=mii";

MODULE_ALIAS("pci:v00001039d00000190sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00000191sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "23DDAAF28F27D881720C59A");
