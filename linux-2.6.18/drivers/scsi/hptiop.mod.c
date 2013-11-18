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
	{ 0xe2e90e7d, "mem_map" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x7f12bc25, "scsi_add_host" },
	{ 0xd3597019, "scsi_scan_host" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x26e96637, "request_irq" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xdec27e6e, "scsi_host_alloc" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xa635ffaf, "scsi_adjust_queue_depth" },
	{ 0x25da070, "snprintf" },
	{ 0xf4bef259, "scsi_host_put" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x89535602, "scsi_remove_host" },
	{ 0x1b7d4074, "printk" },
	{ 0xf9a482f9, "msleep" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

MODULE_ALIAS("pci:v00001103d00003220sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003320sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0369B7AAE648EF4F9779992");
