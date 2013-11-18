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
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x26e96637, "request_irq" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0xc71aedb5, "cancel_rearming_delayed_work" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x9de012e5, "skb_copy_and_csum_dev" },
	{ 0xf251c670, "netif_device_detach" },
	{ 0xb8435063, "pci_save_state" },
	{ 0x1e5b7e01, "generic_mii_ioctl" },
	{ 0x15b22ef2, "mii_link_ok" },
	{ 0x7f374097, "mii_nway_restart" },
	{ 0xb16b8e31, "mii_ethtool_sset" },
	{ 0x375cd688, "mii_ethtool_gset" },
	{ 0x81dabb5c, "netif_receive_skb" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd3dad18a, "schedule_delayed_work" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0x5598dc19, "register_netdev" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xa3599a5d, "pci_iomap" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0x31f06050, "__netif_rx_schedule" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0xf5eef57f, "pci_iounmap" },
	{ 0x817c07c7, "netif_device_attach" },
	{ 0x7e9fcf24, "pci_set_power_state" },
	{ 0x49653ec1, "pci_restore_state" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x908aa9b2, "iowrite32" },
	{ 0xbaeb160c, "bitreverse" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0x1b7d4074, "printk" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xc540620f, "mii_check_media" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4775eacf, "iowrite16" },
	{ 0x3960713, "ioread16" },
	{ 0x2241a928, "ioread32" },
	{ 0x389e200f, "ioread8" },
	{ 0x375bf494, "iowrite8" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=mii";

MODULE_ALIAS("pci:v000010ECd00008139sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008138sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001113d00001211sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001500d00001360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00004033d00001360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00001300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00001340sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013D1d0000AB06sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001259d0000A117sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001259d0000A11Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014EAd0000AB06sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014EAd0000AB07sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011DBd00001234sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00009130sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000002ACd00001012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000018Ad00000106sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000126Cd00001211sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001743d00008139sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000021Bd00008139sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008129sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v*d00008139sv000010ECsd00008139bc*sc*i*");
MODULE_ALIAS("pci:v*d00008139sv00001186sd00001300bc*sc*i*");
MODULE_ALIAS("pci:v*d00008139sv000013D1sd0000AB06bc*sc*i*");

MODULE_INFO(srcversion, "25D12261A1AAFA6ED0E67AE");
