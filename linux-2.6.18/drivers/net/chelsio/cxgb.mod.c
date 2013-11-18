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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x7e3f931f, "_spin_trylock" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0x2d98d0b8, "ethtool_op_set_tx_csum" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0xc767785d, "netif_carrier_on" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x3140fca, "ethtool_op_get_sg" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0xa99d5102, "netif_carrier_off" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xddabf283, "skb_realloc_headroom" },
	{ 0x7d11c268, "jiffies" },
	{ 0x96f7398e, "netif_rx" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x6900ec70, "ethtool_op_set_tso" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0x1b7d4074, "printk" },
	{ 0xf7013d4e, "ethtool_op_get_link" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0x5598dc19, "register_netdev" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x81dabb5c, "netif_receive_skb" },
	{ 0xa09539e, "pci_bus_write_config_dword" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0x9eac042a, "__ioremap" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x7dceceac, "capable" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x548de514, "__alloc_skb" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0x4767d536, "ethtool_op_set_sg" },
	{ 0x59981248, "pci_bus_read_config_dword" },
	{ 0xd3dad18a, "schedule_delayed_work" },
	{ 0x156a70fb, "skb_checksum_help" },
	{ 0x26e96637, "request_irq" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xe3038592, "skb_under_panic" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x74ce7f8b, "proc_root_driver" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xf7712dbb, "ethtool_op_get_tx_csum" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0xa5f201bb, "ethtool_op_get_tso" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x9728b2f9, "pci_set_consistent_dma_mask" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x31f06050, "__netif_rx_schedule" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001425d00000007sv*sd00000000bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000000Asv*sd00000001bc*sc*i*");

MODULE_INFO(srcversion, "921B824A79B0B4CE13F2A32");
