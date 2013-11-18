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
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0x81dabb5c, "netif_receive_skb" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x26e96637, "request_irq" },
	{ 0xf251c670, "netif_device_detach" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x7dceceac, "capable" },
	{ 0x37a0cba, "kfree" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x5598dc19, "register_netdev" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xa09539e, "pci_bus_write_config_dword" },
	{ 0x59981248, "pci_bus_read_config_dword" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0xd8c152cd, "raise_softirq_irqoff" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xe8e53e56, "per_cpu__softnet_data" },
	{ 0x31f06050, "__netif_rx_schedule" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x817c07c7, "netif_device_attach" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xbaeb160c, "bitreverse" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0xc767785d, "netif_carrier_on" },
	{ 0xa99d5102, "netif_carrier_off" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x1b7d4074, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v0000100Bd00000020sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CB96BB71033CDC81CA5FB86");
