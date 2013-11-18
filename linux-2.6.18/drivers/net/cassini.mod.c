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
	{ 0x5598dc19, "register_netdev" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xb8435063, "pci_save_state" },
	{ 0xa3599a5d, "pci_iomap" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x9728b2f9, "pci_set_consistent_dma_mask" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0xfe0df06f, "pci_set_mwi" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x26e96637, "request_irq" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0xf251c670, "netif_device_detach" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0xf5eef57f, "pci_iounmap" },
	{ 0xfe7afd73, "pci_bus_write_config_byte" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0x7dceceac, "capable" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0xc52109a7, "skb_pad" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0x9a3de8f8, "csum_partial" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x16b86be, "kunmap_atomic" },
	{ 0xa6367e45, "kmap_atomic" },
	{ 0x548de514, "__alloc_skb" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0xd8c152cd, "raise_softirq_irqoff" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xe8e53e56, "per_cpu__softnet_data" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x4292364c, "schedule" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x817c07c7, "netif_device_attach" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xcb6beb40, "hweight32" },
	{ 0x99bdf0a8, "cpu_online_map" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0xa99d5102, "netif_carrier_off" },
	{ 0xc767785d, "netif_carrier_on" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0x96f7398e, "netif_rx" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0xd4abb36c, "__alloc_pages" },
	{ 0x8a9eec75, "contig_page_data" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x37a0cba, "kfree" },
	{ 0x65734b02, "__free_pages" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x49653ec1, "pci_restore_state" },
	{ 0x1b7d4074, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v0000108Ed0000ABBAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000100Bd00000035sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F101E8B8482765C26F5FEEB");
