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
	{ 0xd3597019, "scsi_scan_host" },
	{ 0x7f12bc25, "scsi_add_host" },
	{ 0x26e96637, "request_irq" },
	{ 0xafd234a5, "scsi_register" },
	{ 0x4c3af445, "__request_region" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x72808e8d, "pci_find_device" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0x59981248, "pci_bus_read_config_dword" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0xaee32001, "scsi_unregister" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x89535602, "scsi_remove_host" },
	{ 0x1b7d4074, "printk" },
	{ 0x7d11c268, "jiffies" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";


MODULE_INFO(srcversion, "79FC3CC1E9DF15119632870");
