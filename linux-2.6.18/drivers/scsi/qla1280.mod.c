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
	{ 0xaa136450, "param_get_charp" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0xd3597019, "scsi_scan_host" },
	{ 0x7f12bc25, "scsi_add_host" },
	{ 0x26e96637, "request_irq" },
	{ 0x9eac042a, "__ioremap" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0xdec27e6e, "scsi_host_alloc" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xf4bef259, "scsi_host_put" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0xedc03953, "iounmap" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x89535602, "scsi_remove_host" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xa635ffaf, "scsi_adjust_queue_depth" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0xa34eb072, "wait_for_completion" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x1b7d4074, "printk" },
	{ 0x7e0221e4, "complete" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

MODULE_ALIAS("pci:v00001077d00001216sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00001020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00001080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00001240sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00001280sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00001016sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "077585915167B8021B68788");
