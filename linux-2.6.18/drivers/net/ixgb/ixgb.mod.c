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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x7e3f931f, "_spin_trylock" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0xc767785d, "netif_carrier_on" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x3140fca, "ethtool_op_get_sg" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0x806d5133, "param_array_get" },
	{ 0xa99d5102, "netif_carrier_off" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0xd8c152cd, "raise_softirq_irqoff" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x7d11c268, "jiffies" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0x1b7d4074, "printk" },
	{ 0xf7013d4e, "ethtool_op_get_link" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x5598dc19, "register_netdev" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x81dabb5c, "netif_receive_skb" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0x9eac042a, "__ioremap" },
	{ 0xa6172ba8, "pci_enable_msi" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x4767d536, "ethtool_op_set_sg" },
	{ 0x26e96637, "request_irq" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0x3235dbeb, "pskb_expand_head" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0x69c560c8, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0xa5f201bb, "ethtool_op_get_tso" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x9728b2f9, "pci_set_consistent_dma_mask" },
	{ 0x3c8d7cc1, "ethtool_op_get_perm_addr" },
	{ 0x31f06050, "__netif_rx_schedule" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xe8e53e56, "per_cpu__softnet_data" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00008086d00001048sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000109Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A48sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001B48sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F922BF4E1D60F51BB5FB667");
