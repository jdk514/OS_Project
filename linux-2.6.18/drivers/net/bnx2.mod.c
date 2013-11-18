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
	{ 0x2d98d0b8, "ethtool_op_set_tx_csum" },
	{ 0xf7712dbb, "ethtool_op_get_tx_csum" },
	{ 0xf7013d4e, "ethtool_op_get_link" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x26e96637, "request_irq" },
	{ 0xa6172ba8, "pci_enable_msi" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0x3235dbeb, "pskb_expand_head" },
	{ 0xff271466, "pci_choose_state" },
	{ 0xf251c670, "netif_device_detach" },
	{ 0x2e60bace, "memcpy" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x5598dc19, "register_netdev" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xa09539e, "pci_bus_write_config_dword" },
	{ 0x3762cb6e, "ioremap_nocache" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x9728b2f9, "pci_set_consistent_dma_mask" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0x20645ff6, "pci_find_capability" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x7dceceac, "capable" },
	{ 0x69c560c8, "pci_disable_msi" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0x81dabb5c, "netif_receive_skb" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x31f06050, "__netif_rx_schedule" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x817c07c7, "netif_device_attach" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0xc767785d, "netif_carrier_on" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0xa99d5102, "netif_carrier_off" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xe6d97ff1, "__netdev_alloc_skb" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0xba7921dc, "zlib_inflateEnd" },
	{ 0x6b60eef6, "zlib_inflate" },
	{ 0x3b8be29d, "zlib_inflateInit2" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1b7d4074, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000014E4d0000164Asv0000103Csd00003101bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000164Asv0000103Csd00003106bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000164Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000164Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016AAsv0000103Csd00003102bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016ACsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0B59B566A893A2D54ED8FAB");
