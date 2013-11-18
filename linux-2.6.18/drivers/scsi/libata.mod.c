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
	{ 0x4c3af445, "__request_region" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0x51135e3a, "__scsi_add_device" },
	{ 0xdec27e6e, "scsi_host_alloc" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xd0ee38b8, "schedule_timeout_uninterruptible" },
	{ 0x7d4e29ae, "page_address" },
	{ 0x74166cad, "scsi_remove_device" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x84772aff, "scsi_req_abort_cmd" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xeb4364da, "blk_queue_max_sectors" },
	{ 0x8c0be9b4, "queue_work" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x577785bd, "scsi_execute_req" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x37e74642, "get_jiffies_64" },
	{ 0xa635ffaf, "scsi_adjust_queue_depth" },
	{ 0x7d11c268, "jiffies" },
	{ 0x16b86be, "kunmap_atomic" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0xf2766228, "__create_workqueue" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xa6367e45, "kmap_atomic" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x7d104702, "blk_queue_max_phys_segments" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0x524ab68b, "scsi_rescan_device" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0x49653ec1, "pci_restore_state" },
	{ 0x6ca46354, "____request_resource" },
	{ 0xf5eef57f, "pci_iounmap" },
	{ 0x1b7d4074, "printk" },
	{ 0x7f12bc25, "scsi_add_host" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x6d6c459b, "blk_queue_max_hw_segments" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x31153eb8, "destroy_workqueue" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xf4bef259, "scsi_host_put" },
	{ 0xd0bbbd3f, "flush_workqueue" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0xf811e69d, "scsi_eh_flush_done_q" },
	{ 0xad33325b, "zone_table" },
	{ 0x6ce1aae, "scsi_device_put" },
	{ 0x7dceceac, "capable" },
	{ 0x434c7072, "scsi_eh_finish_cmd" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0x59981248, "pci_bus_read_config_dword" },
	{ 0x26e96637, "request_irq" },
	{ 0x4292364c, "schedule" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0xfaf161dd, "scsi_device_set_state" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x7e9fcf24, "pci_set_power_state" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xedc03953, "iounmap" },
	{ 0x28f35813, "scnprintf" },
	{ 0xbfc0e1d0, "scsi_schedule_eh" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x89535602, "scsi_remove_host" },
	{ 0x7e0221e4, "complete" },
	{ 0x25da070, "snprintf" },
	{ 0x37ac91a4, "scsi_device_get" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x9728b2f9, "pci_set_consistent_dma_mask" },
	{ 0x736bb1ef, "wait_for_completion_timeout" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x622ab174, "queue_delayed_work" },
	{ 0x2241a928, "ioread32" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xb8435063, "pci_save_state" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";


MODULE_INFO(srcversion, "808D5B1A06EC10443C739BA");
