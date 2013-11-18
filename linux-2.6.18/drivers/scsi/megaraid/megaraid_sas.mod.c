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
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xdec27e6e, "scsi_host_alloc" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0xf4bef259, "scsi_host_put" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x89535602, "scsi_remove_host" },
	{ 0x9d465476, "driver_create_file" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x1e8e5fac, "register_chrdev" },
	{ 0x96b27088, "__down_failed" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x625acc81, "__down_failed_interruptible" },
	{ 0xda4008e6, "cond_resched" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x7dceceac, "capable" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x54ee23d3, "fasync_helper" },
	{ 0x14126ae8, "kill_fasync" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x5e552f71, "dma_pool_alloc" },
	{ 0x4c09c5f1, "dma_pool_create" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x3762cb6e, "ioremap_nocache" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xf9a482f9, "msleep" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0x8a24f99e, "dma_pool_destroy" },
	{ 0x3db28e6f, "dma_pool_free" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x4292364c, "schedule" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x1b7d4074, "printk" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x25da070, "snprintf" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x38d967c9, "driver_remove_file" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

MODULE_ALIAS("pci:v00001000d00000411sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000413sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000015sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "AB557C495A76224E6F4D41D");
