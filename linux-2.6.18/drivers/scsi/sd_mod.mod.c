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
	{ 0x13ab04d7, "scsi_set_medium_removal" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa4935a88, "alloc_disk" },
	{ 0x85898a89, "class_register" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xf72d2450, "scsi_io_completion" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x9aab8738, "scsi_print_sense" },
	{ 0x77a595de, "scsi_mode_select" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x577785bd, "scsi_execute_req" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xa8bed6df, "class_device_put" },
	{ 0xe6c247b4, "class_device_del" },
	{ 0x3851a0b9, "check_disk_change" },
	{ 0x1b7d4074, "printk" },
	{ 0x700d5f9, "del_gendisk" },
	{ 0x93618160, "class_unregister" },
	{ 0xaf3dd7dc, "scsi_logging_level" },
	{ 0x3e158c0e, "driver_unregister" },
	{ 0x516537b8, "class_device_get" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xa7409aaf, "idr_remove" },
	{ 0xeac1c4af, "unregister_blkdev" },
	{ 0xdf704809, "blk_queue_hardsect_size" },
	{ 0x6ce1aae, "scsi_device_put" },
	{ 0x52a7207f, "idr_pre_get" },
	{ 0x7dceceac, "capable" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x1fe72a83, "class_device_add" },
	{ 0xa9615177, "put_device" },
	{ 0xeb16b463, "scsi_nonblockable_ioctl" },
	{ 0xa5bb0128, "scsi_ioctl" },
	{ 0x5fe7f92a, "put_disk" },
	{ 0x7ae7cd7e, "scsi_register_driver" },
	{ 0x8cc19a95, "scsi_block_when_processing_errors" },
	{ 0xc4cb9d2f, "scsi_test_unit_ready" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x22eb6716, "scsi_command_normalize_sense" },
	{ 0x7de6dcd6, "get_device" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x28e5c9c8, "scsicam_bios_param" },
	{ 0x37a0cba, "kfree" },
	{ 0xe10dc728, "add_disk" },
	{ 0x32b02a04, "scsi_cmd_ioctl" },
	{ 0x796fc5ce, "scsi_get_sense_info_fld" },
	{ 0x25da070, "snprintf" },
	{ 0x37ac91a4, "scsi_device_get" },
	{ 0xce2f066b, "blk_queue_ordered" },
	{ 0x2d29e50a, "idr_get_new" },
	{ 0x5e1b80a, "scsi_mode_sense" },
	{ 0x58c6b902, "class_device_initialize" },
	{ 0xca5dbc50, "scsi_print_sense_hdr" },
	{ 0x3a65725a, "set_disk_ro" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";


MODULE_INFO(srcversion, "1CA025A0B2D98F141AB8FCC");
