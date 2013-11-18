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
	{ 0xe88ce9ae, "ethtool_op_set_ufo" },
	{ 0xb0c7d8ca, "ethtool_op_get_ufo" },
	{ 0x4767d536, "ethtool_op_set_sg" },
	{ 0x3140fca, "ethtool_op_get_sg" },
	{ 0xf7712dbb, "ethtool_op_get_tx_csum" },
	{ 0xf7013d4e, "ethtool_op_get_link" },
	{ 0x72216fa9, "param_get_uint" },
	{ 0x8abac70a, "param_set_uint" },
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0x5598dc19, "register_netdev" },
	{ 0xb8435063, "pci_save_state" },
	{ 0x9eac042a, "__ioremap" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0x4c3af445, "__request_region" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0x9728b2f9, "pci_set_consistent_dma_mask" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x31f06050, "__netif_rx_schedule" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0xed5c73bf, "__tasklet_schedule" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0xe3038592, "skb_under_panic" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x81dabb5c, "netif_receive_skb" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x26e96637, "request_irq" },
	{ 0x43fb7f82, "pci_enable_msix" },
	{ 0xa6172ba8, "pci_enable_msi" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0xd8c152cd, "raise_softirq_irqoff" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xe8e53e56, "per_cpu__softnet_data" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x79ad224b, "tasklet_kill" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x69c560c8, "pci_disable_msi" },
	{ 0x54804e7a, "pci_disable_msix" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xc767785d, "netif_carrier_on" },
	{ 0xa99d5102, "netif_carrier_off" },
	{ 0x72808e8d, "pci_find_device" },
	{ 0x59981248, "pci_bus_read_config_dword" },
	{ 0xfe7afd73, "pci_bus_write_config_byte" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xa09539e, "pci_bus_write_config_dword" },
	{ 0x49653ec1, "pci_restore_state" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0xdc3eaf70, "iomem_resource" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0xedc03953, "iounmap" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x1b7d4074, "printk" },
	{ 0x2e60bace, "memcpy" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000017D5d00005731sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D5d00005831sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D5d00005732sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D5d00005832sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F688CB73C62FF40794026B9");
