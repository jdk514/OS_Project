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
	{ 0xe2e90e7d, "mem_map" },
	{ 0x7e3f931f, "_spin_trylock" },
	{ 0xf251c670, "netif_device_detach" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0x81dabb5c, "netif_receive_skb" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xd8c152cd, "raise_softirq_irqoff" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xe8e53e56, "per_cpu__softnet_data" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0x817c07c7, "netif_device_attach" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x7dceceac, "capable" },
	{ 0x5598dc19, "register_netdev" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x43c7d5be, "pci_unmap_rom" },
	{ 0x82135672, "pci_map_rom" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x9eac042a, "__ioremap" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x760a0f4f, "yield" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x31f06050, "__netif_rx_schedule" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x26e96637, "request_irq" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0xc767785d, "netif_carrier_on" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x548de514, "__alloc_skb" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0xa99d5102, "netif_carrier_off" },
	{ 0xceaf37db, "mii_phy_probe" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1b7d4074, "printk" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=sungem_phy";

MODULE_ALIAS("pci:v0000108Ed00002BADsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000108Ed00001101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00000021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00000024sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00000032sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd0000004Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00000051sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd0000006Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "95FF10047565DDFDA76DA16");
