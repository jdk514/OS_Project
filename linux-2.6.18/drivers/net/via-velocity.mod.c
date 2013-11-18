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
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x5598dc19, "register_netdev" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xff271466, "pci_choose_state" },
	{ 0xbaeb160c, "bitreverse" },
	{ 0x3771b461, "crc_ccitt" },
	{ 0xb8435063, "pci_save_state" },
	{ 0xf251c670, "netif_device_detach" },
	{ 0x7dceceac, "capable" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0x26e96637, "request_irq" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x96f7398e, "netif_rx" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0xa99d5102, "netif_carrier_off" },
	{ 0xc767785d, "netif_carrier_on" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x7d11c268, "jiffies" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0x817c07c7, "netif_device_attach" },
	{ 0x49653ec1, "pci_restore_state" },
	{ 0x38379ca3, "pci_enable_wake" },
	{ 0x7e9fcf24, "pci_set_power_state" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x3e45e9ff, "register_inetaddr_notifier" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x760b437a, "unregister_inetaddr_notifier" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xd8c152cd, "raise_softirq_irqoff" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xe8e53e56, "per_cpu__softnet_data" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0x1b7d4074, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=crc-ccitt";

MODULE_ALIAS("pci:v00001106d00003119sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1D0AB685336050564F42920");
