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
	{ 0x79ad224b, "tasklet_kill" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0xd8c152cd, "raise_softirq_irqoff" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xe8e53e56, "per_cpu__softnet_data" },
	{ 0x96f7398e, "netif_rx" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0xed5c73bf, "__tasklet_schedule" },
	{ 0x25da070, "snprintf" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x5598dc19, "register_netdev" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x7d11c268, "jiffies" },
	{ 0x26e96637, "request_irq" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x9eac042a, "__ioremap" },
	{ 0xfe7afd73, "pci_bus_write_config_byte" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x1b7d4074, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xedc03953, "iounmap" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000012AEd00000001sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v000012AEd00000002sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v000010B7d00000001sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00001385d0000620Asv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00001385d0000630Asv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00001011d0000001Asv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v000012AEd000000FAsv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v000010A9d00000009sv*sd*bc02sc00i*");

MODULE_INFO(srcversion, "7062633FAA544F6CE425B5F");
