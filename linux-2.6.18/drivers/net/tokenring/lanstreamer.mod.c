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
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0xc767785d, "netif_carrier_on" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x26e96637, "request_irq" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x96f7398e, "netif_rx" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x1da7bfee, "tr_type_trans" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0xd8c152cd, "raise_softirq_irqoff" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xe8e53e56, "per_cpu__softnet_data" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x5598dc19, "register_netdev" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x4c3af445, "__request_region" },
	{ 0xfe0df06f, "pci_set_mwi" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0xacafa1f8, "alloc_trdev" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x8e334f2b, "interruptible_sleep_on_timeout" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xa99d5102, "netif_carrier_off" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x548de514, "__alloc_skb" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7d11c268, "jiffies" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0xdf7ae87e, "pci_clear_mwi" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0xdc3eaf70, "iomem_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0x1b7d4074, "printk" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001014d00000018sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6C72CD53A394E1CAACE327D");
