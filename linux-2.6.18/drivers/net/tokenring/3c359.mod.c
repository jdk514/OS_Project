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
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x26e96637, "request_irq" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x96f7398e, "netif_rx" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x1da7bfee, "tr_type_trans" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x5598dc19, "register_netdev" },
	{ 0x9eac042a, "__ioremap" },
	{ 0xacafa1f8, "alloc_trdev" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0x5152e605, "memcmp" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0xd8c152cd, "raise_softirq_irqoff" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xe8e53e56, "per_cpu__softnet_data" },
	{ 0x4292364c, "schedule" },
	{ 0x1b7d4074, "printk" },
	{ 0x7d11c268, "jiffies" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000010B7d00003590sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "642C31DB86A93FBE73FA68E");
