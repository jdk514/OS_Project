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
	{ 0xf7013d4e, "ethtool_op_get_link" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x817c07c7, "netif_device_attach" },
	{ 0x26e96637, "request_irq" },
	{ 0x49653ec1, "pci_restore_state" },
	{ 0x81dabb5c, "netif_receive_skb" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0xd8c152cd, "raise_softirq_irqoff" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xe8e53e56, "per_cpu__softnet_data" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x5598dc19, "register_netdev" },
	{ 0xb8435063, "pci_save_state" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0x9728b2f9, "pci_set_consistent_dma_mask" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xf251c670, "netif_device_detach" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0x1e5b7e01, "generic_mii_ioctl" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xa99d5102, "netif_carrier_off" },
	{ 0xc767785d, "netif_carrier_on" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0x37a0cba, "kfree" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x31f06050, "__netif_rx_schedule" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xa09539e, "pci_bus_write_config_dword" },
	{ 0x59981248, "pci_bus_read_config_dword" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x548de514, "__alloc_skb" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0x1b7d4074, "printk" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=mii";

MODULE_ALIAS("pci:v000014E4d00004401sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004402sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000170Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B46514B3B4DF7A61E8ED18A");