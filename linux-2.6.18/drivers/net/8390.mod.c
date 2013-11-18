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
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xbaeb160c, "bitreverse" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xcf81566a, "alloc_netdev" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x7d11c268, "jiffies" },
	{ 0x96f7398e, "netif_rx" },
	{ 0x1b7d4074, "printk" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x548de514, "__alloc_skb" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0xed6d6a06, "ether_setup" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xc5e58afb, "__netif_schedule" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "2A7FBC1E81DC3811386A032");
