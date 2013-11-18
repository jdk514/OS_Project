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
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x2ef69a16, "sysfs_create_link" },
	{ 0x6180e3ac, "class_device_create_file" },
	{ 0xd10fc04d, "class_device_create" },
	{ 0x229fb2ef, "cdev_add" },
	{ 0x8aceb563, "cdev_alloc" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x3ae831b6, "kref_init" },
	{ 0x1075bf0, "panic" },
	{ 0xa4935a88, "alloc_disk" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x8235805b, "memmove" },
	{ 0x32b02a04, "scsi_cmd_ioctl" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x7dceceac, "capable" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0xeb16b463, "scsi_nonblockable_ioctl" },
	{ 0x625acc81, "__down_failed_interruptible" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x37ac91a4, "scsi_device_get" },
	{ 0x8a1203a9, "kref_get" },
	{ 0xdc3debb9, "cdev_del" },
	{ 0x27514859, "class_device_destroy" },
	{ 0x4149cb93, "sysfs_remove_link" },
	{ 0x4b05104f, "_write_lock" },
	{ 0x7e0221e4, "complete" },
	{ 0x9d465476, "driver_create_file" },
	{ 0x7ae7cd7e, "scsi_register_driver" },
	{ 0xd8e484f0, "register_chrdev_region" },
	{ 0xc83decb4, "class_create" },
	{ 0x93538172, "class_destroy" },
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0x3e158c0e, "driver_unregister" },
	{ 0x38d967c9, "driver_remove_file" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x8cc19a95, "scsi_block_when_processing_errors" },
	{ 0x67f6d6d5, "scsi_execute_async" },
	{ 0x9b05ea5c, "scsi_command_size" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x61bed476, "up_read" },
	{ 0xddbcef4b, "get_user_pages" },
	{ 0x1985af2a, "down_read" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x946be58e, "put_page" },
	{ 0x7d4e29ae, "page_address" },
	{ 0xd4abb36c, "__alloc_pages" },
	{ 0x8a9eec75, "contig_page_data" },
	{ 0xa34eb072, "wait_for_completion" },
	{ 0x1b7d4074, "printk" },
	{ 0x69d38ed9, "__scsi_print_sense" },
	{ 0x2b0ba2b0, "scsi_sense_desc_find" },
	{ 0x796fc5ce, "scsi_get_sense_info_fld" },
	{ 0xc65e73c, "scsi_normalize_sense" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x6ce1aae, "scsi_device_put" },
	{ 0xcff53400, "kref_put" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xa5bb0128, "scsi_ioctl" },
	{ 0x5fe7f92a, "put_disk" },
	{ 0x65734b02, "__free_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0x25da070, "snprintf" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";


MODULE_INFO(srcversion, "255BEB5421879B00E29F552");
