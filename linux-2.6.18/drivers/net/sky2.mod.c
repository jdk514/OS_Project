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
	{ 0x6900ec70, "ethtool_op_set_tso" },
	{ 0xa5f201bb, "ethtool_op_get_tso" },
	{ 0x4767d536, "ethtool_op_set_sg" },
	{ 0x3140fca, "ethtool_op_get_sg" },
	{ 0x2d98d0b8, "ethtool_op_set_tx_csum" },
	{ 0xf7712dbb, "ethtool_op_get_tx_csum" },
	{ 0xf7013d4e, "ethtool_op_get_link" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0x3235dbeb, "pskb_expand_head" },
	{ 0x7e3f931f, "_spin_trylock" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x26e96637, "request_irq" },
	{ 0xa6172ba8, "pci_enable_msi" },
	{ 0x5598dc19, "register_netdev" },
	{ 0x3762cb6e, "ioremap_nocache" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xb8435063, "pci_save_state" },
	{ 0xf251c670, "netif_device_detach" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0xff271466, "pci_choose_state" },
	{ 0xedc03953, "iounmap" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0x69c560c8, "pci_disable_msi" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0x81dabb5c, "netif_receive_skb" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x31f06050, "__netif_rx_schedule" },
	{ 0x7dceceac, "capable" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xbaeb160c, "bitreverse" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0xc767785d, "netif_carrier_on" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xa99d5102, "netif_carrier_off" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0xf86e951e, "dev_close" },
	{ 0x817c07c7, "netif_device_attach" },
	{ 0x38379ca3, "pci_enable_wake" },
	{ 0x49653ec1, "pci_restore_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x548de514, "__alloc_skb" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0x20645ff6, "pci_find_capability" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1b7d4074, "printk" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001148d00009000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00009E00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004B00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004340sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004341sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004342sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004343sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004344sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004345sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004346sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004347sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004350sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004351sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004352sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004361sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004362sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004363sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "90B78A4BFE7069B8FD97BA7");
