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
	{ 0x7d4e29ae, "page_address" },
	{ 0x96f7398e, "netif_rx" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0xd8c152cd, "raise_softirq_irqoff" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xe8e53e56, "per_cpu__softnet_data" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x5598dc19, "register_netdev" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x43c7d5be, "pci_unmap_rom" },
	{ 0x82135672, "pci_map_rom" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x26e96637, "request_irq" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x4827a016, "del_timer" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x1b7d4074, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v0000108Ed00001001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C62928445B7C001CA4C1A31");
