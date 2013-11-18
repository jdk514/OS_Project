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
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x4ff943ae, "mutex_lock_interruptible" },
	{ 0x1e8e5fac, "register_chrdev" },
	{ 0xd3597019, "scsi_scan_host" },
	{ 0x26e96637, "request_irq" },
	{ 0x7f12bc25, "scsi_add_host" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xdec27e6e, "scsi_host_alloc" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x16b86be, "kunmap_atomic" },
	{ 0xa6367e45, "kmap_atomic" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0xa635ffaf, "scsi_adjust_queue_depth" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x25da070, "snprintf" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0xf4bef259, "scsi_host_put" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0x89535602, "scsi_remove_host" },
	{ 0x37a0cba, "kfree" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7d11c268, "jiffies" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0x1b7d4074, "printk" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

MODULE_ALIAS("pci:v000013C1d00001002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013C1d00001003sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "029473DD729D96D687985E4");
