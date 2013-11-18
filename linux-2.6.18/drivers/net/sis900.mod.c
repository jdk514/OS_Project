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
	{ 0xec7bc0d, "__mod_timer" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x26e96637, "request_irq" },
	{ 0x5598dc19, "register_netdev" },
	{ 0x760a0f4f, "yield" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xc767785d, "netif_carrier_on" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdd334e07, "pci_dev_put" },
	{ 0xfe7afd73, "pci_bus_write_config_byte" },
	{ 0x129cbf09, "pci_get_device" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xa09539e, "pci_bus_write_config_dword" },
	{ 0x59981248, "pci_bus_read_config_dword" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x4827a016, "del_timer" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xb8435063, "pci_save_state" },
	{ 0xf251c670, "netif_device_detach" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x817c07c7, "netif_device_attach" },
	{ 0x7e9fcf24, "pci_set_power_state" },
	{ 0x49653ec1, "pci_restore_state" },
	{ 0x375cd688, "mii_ethtool_gset" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x7dceceac, "capable" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0xd8c152cd, "raise_softirq_irqoff" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xe8e53e56, "per_cpu__softnet_data" },
	{ 0x7d11c268, "jiffies" },
	{ 0x96f7398e, "netif_rx" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xb16b8e31, "mii_ethtool_sset" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0x7f374097, "mii_nway_restart" },
	{ 0x15b22ef2, "mii_link_ok" },
	{ 0xa99d5102, "netif_carrier_off" },
	{ 0xbaeb160c, "bitreverse" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x1b7d4074, "printk" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=mii";

MODULE_ALIAS("pci:v00001039d00000900sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00007016sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "AE6FE2E3294B0F85C4E7BF7");
