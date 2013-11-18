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
	{ 0x4767d536, "ethtool_op_set_sg" },
	{ 0x3140fca, "ethtool_op_get_sg" },
	{ 0xf7712dbb, "ethtool_op_get_tx_csum" },
	{ 0xf7013d4e, "ethtool_op_get_link" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xf3b39202, "mod_timer" },
	{ 0xff271466, "pci_choose_state" },
	{ 0xf251c670, "netif_device_detach" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0x69c560c8, "pci_disable_msi" },
	{ 0xa6172ba8, "pci_enable_msi" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x81dabb5c, "netif_receive_skb" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x5598dc19, "register_netdev" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0xb8435063, "pci_save_state" },
	{ 0x6bc7760e, "pci_get_slot" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0x9728b2f9, "pci_set_consistent_dma_mask" },
	{ 0x3762cb6e, "ioremap_nocache" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x7dceceac, "capable" },
	{ 0x2d98d0b8, "ethtool_op_set_tx_csum" },
	{ 0xb24e8b13, "ethtool_op_set_tx_hw_csum" },
	{ 0x6900ec70, "ethtool_op_set_tso" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0xc78194a4, "skb_copy" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0xa1ec188b, "skb_gso_segment" },
	{ 0x3235dbeb, "pskb_expand_head" },
	{ 0xedc03953, "iounmap" },
	{ 0x3145216f, "pci_dev_present" },
	{ 0xdd334e07, "pci_dev_put" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0x129cbf09, "pci_get_device" },
	{ 0x31f06050, "__netif_rx_schedule" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x26e96637, "request_irq" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x20645ff6, "pci_find_capability" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x817c07c7, "netif_device_attach" },
	{ 0xf86e951e, "dev_close" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xe6d97ff1, "__netdev_alloc_skb" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0x49653ec1, "pci_restore_state" },
	{ 0xc767785d, "netif_carrier_on" },
	{ 0xa99d5102, "netif_carrier_off" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x59981248, "pci_bus_read_config_dword" },
	{ 0xa09539e, "pci_bus_write_config_dword" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1b7d4074, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000014E4d00001644sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001645sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001646sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001647sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001648sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000164Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001653sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001654sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000165Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000165Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001696sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000169Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000169Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000170Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000170Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001649sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000166Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001658sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001659sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001676sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001677sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016F7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016FDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016FEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001672sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001673sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000169Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000169Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001693sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001668sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001669sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001678sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001679sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000166Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000166Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016DDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00004400sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00004500sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000173Bd000003E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000173Bd000003E9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000173Bd000003EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000173Bd000003EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00001645sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3B5CF4C8C87C44F97A1B25B");
