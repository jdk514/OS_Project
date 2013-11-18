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
	{ 0x46b2a30d, "proc_ide_read_capacity" },
	{ 0x27833764, "ide_bus_type" },
	{ 0x5152e605, "memcmp" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0xcaf99617, "drive_is_ready" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2c715df5, "elv_next_request" },
	{ 0xfcf3ea47, "end_that_request_last" },
	{ 0x9973d1c9, "elv_dequeue_request" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x94811a22, "elv_queue_empty" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0xb0e42262, "ide_lock" },
	{ 0xf84fe74f, "ide_wait_not_busy" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x89535602, "scsi_remove_host" },
	{ 0x4d101f5f, "driver_register" },
	{ 0x7d4e29ae, "page_address" },
	{ 0x16b86be, "kunmap_atomic" },
	{ 0xa6367e45, "kmap_atomic" },
	{ 0xad33325b, "zone_table" },
	{ 0x680d02b7, "blk_dump_rq_flags" },
	{ 0xfb0366d, "SELECT_DRIVE" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0xc493dd17, "ide_set_handler" },
	{ 0xeb1435ee, "ide_do_reset" },
	{ 0x5c323d43, "ide_wait_stat" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x8fd86470, "ide_do_drive_cmd" },
	{ 0x7d11c268, "jiffies" },
	{ 0xee55dd57, "ide_init_drive_cmd" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x37a0cba, "kfree" },
	{ 0x3726456e, "ide_end_drive_cmd" },
	{ 0xa5366cab, "ide_end_request" },
	{ 0x5fe7f92a, "put_disk" },
	{ 0x2036ffa3, "ide_unregister_subdriver" },
	{ 0x45ea21ef, "ide_unregister_region" },
	{ 0xd3597019, "scsi_scan_host" },
	{ 0x7f12bc25, "scsi_add_host" },
	{ 0xa7b99a1b, "ide_register_region" },
	{ 0x63b1bd2, "ide_add_setting" },
	{ 0xb57f5f1d, "ide_register_subdriver" },
	{ 0x606ea309, "ide_init_disk" },
	{ 0xa4935a88, "alloc_disk" },
	{ 0xdec27e6e, "scsi_host_alloc" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xa635ffaf, "scsi_adjust_queue_depth" },
	{ 0x9da4337e, "scsi_host_get" },
	{ 0x3df94ccc, "generic_ide_ioctl" },
	{ 0x1b7d4074, "printk" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xf4bef259, "scsi_host_put" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x3e158c0e, "driver_unregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";


MODULE_INFO(srcversion, "671E22AF7282EE7F25554C0");
