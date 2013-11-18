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
	{ 0xcff53400, "kref_put" },
	{ 0xa4935a88, "alloc_disk" },
	{ 0xc65e73c, "scsi_normalize_sense" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x4c272f3, "cdrom_number_of_slots" },
	{ 0xfef96e23, "__scsi_print_command" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xf72d2450, "scsi_io_completion" },
	{ 0x4cb5cca8, "unregister_cdrom" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x9aab8738, "scsi_print_sense" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xbe3b478b, "cdrom_open" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x577785bd, "scsi_execute_req" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x4246687b, "scsi_execute" },
	{ 0x1b7d4074, "printk" },
	{ 0x8098329b, "cdrom_release" },
	{ 0x700d5f9, "del_gendisk" },
	{ 0xaf3dd7dc, "scsi_logging_level" },
	{ 0x3e158c0e, "driver_unregister" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xeac1c4af, "unregister_blkdev" },
	{ 0xdf704809, "blk_queue_hardsect_size" },
	{ 0x6ce1aae, "scsi_device_put" },
	{ 0xb6dd947d, "cdrom_media_changed" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xeb16b463, "scsi_nonblockable_ioctl" },
	{ 0xa5bb0128, "scsi_ioctl" },
	{ 0x5fe7f92a, "put_disk" },
	{ 0x7ae7cd7e, "scsi_register_driver" },
	{ 0x8cc19a95, "scsi_block_when_processing_errors" },
	{ 0xc4cb9d2f, "scsi_test_unit_ready" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x3ae831b6, "kref_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xe10dc728, "add_disk" },
	{ 0x8a1203a9, "kref_get" },
	{ 0x331d6f0d, "cdrom_ioctl" },
	{ 0xa92f10d2, "register_cdrom" },
	{ 0x37ac91a4, "scsi_device_get" },
	{ 0x5e1b80a, "scsi_mode_sense" },
	{ 0xca5dbc50, "scsi_print_sense_hdr" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=scsi_mod,cdrom";


MODULE_INFO(srcversion, "9267A2CE06209CDC39BA18F");
