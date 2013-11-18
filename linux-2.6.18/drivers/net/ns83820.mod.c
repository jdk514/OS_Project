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
	{ 0xe2e90e7d, "mem_map" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x81279ce0, "register_netdevice" },
	{ 0xf9a482f9, "msleep" },
	{ 0x298255fd, "dev_alloc_name" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x26e96637, "request_irq" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x3762cb6e, "ioremap_nocache" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0xedc03953, "iounmap" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xf3b39202, "mod_timer" },
	{ 0xed5c73bf, "__tasklet_schedule" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x96f7398e, "netif_rx" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0x548de514, "__alloc_skb" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0xd8c152cd, "raise_softirq_irqoff" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xe8e53e56, "per_cpu__softnet_data" },
	{ 0x1b7d4074, "printk" },
	{ 0xd0ee38b8, "schedule_timeout_uninterruptible" },
	{ 0x7d11c268, "jiffies" },
	{ 0x4292364c, "schedule" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v0000100Bd00000022sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1A831124D4EBF90A03A0512");
