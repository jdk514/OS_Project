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
	{ 0x5598dc19, "register_netdev" },
	{ 0x908aa9b2, "iowrite32" },
	{ 0x2241a928, "ioread32" },
	{ 0x389e200f, "ioread8" },
	{ 0xed47b224, "hermes_struct_init" },
	{ 0x1f4c9e31, "alloc_orinocodev" },
	{ 0xa3599a5d, "pci_iomap" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0xc48abcf5, "__orinoco_up" },
	{ 0x817c07c7, "netif_device_attach" },
	{ 0xb666e37e, "orinoco_reinit_firmware" },
	{ 0x26e96637, "request_irq" },
	{ 0x36feb7f6, "orinoco_interrupt" },
	{ 0x49653ec1, "pci_restore_state" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xbe93b89, "__orinoco_down" },
	{ 0x7e9fcf24, "pci_set_power_state" },
	{ 0xb8435063, "pci_save_state" },
	{ 0xf251c670, "netif_device_detach" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x1b7d4074, "printk" },
	{ 0x3960713, "ioread16" },
	{ 0x7d11c268, "jiffies" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x375bf494, "iowrite8" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0xf5eef57f, "pci_iounmap" },
	{ 0xd487849f, "free_orinocodev" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=hermes,orinoco";

MODULE_ALIAS("pci:v0000111Ad00001023sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001385d00004100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015E8d00000130sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001638d00001100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016ABd00001100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016ABd00001101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016ABd00001102sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016ECd00003685sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000EC80d0000EC00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00007770sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0D3A13D1C9A71ED95912BC3");
