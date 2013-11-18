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
	{ 0x5a1d6f47, "seq_release" },
	{ 0x3dccf731, "single_release" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xa5bb0128, "scsi_ioctl" },
	{ 0x9a4adce3, "sg_scsi_ioctl" },
	{ 0xa91b0926, "scsi_reset_provider" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0xa13798f8, "printk_ratelimit" },
	{ 0x9b05ea5c, "scsi_command_size" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x4292364c, "schedule" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x8cc19a95, "scsi_block_when_processing_errors" },
	{ 0xaf5f9c5f, "nonseekable_open" },
	{ 0x2ef69a16, "sysfs_create_link" },
	{ 0xd10fc04d, "class_device_create" },
	{ 0x229fb2ef, "cdev_add" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x8aceb563, "cdev_alloc" },
	{ 0xa4935a88, "alloc_disk" },
	{ 0xf9b907c1, "seq_lseek" },
	{ 0xe6eee95b, "seq_read" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0xc12e8a55, "proc_mkdir" },
	{ 0xd9b2daf5, "scsi_register_interface" },
	{ 0xc83decb4, "class_create" },
	{ 0xd8e484f0, "register_chrdev_region" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0xebb99830, "seq_open" },
	{ 0x669e2d2f, "seq_printf" },
	{ 0xdb01fdc3, "single_open" },
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0x93538172, "class_destroy" },
	{ 0x6c86c620, "class_interface_unregister" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0xd7474566, "__copy_to_user_ll" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x67f6d6d5, "scsi_execute_async" },
	{ 0x61bed476, "up_read" },
	{ 0xddbcef4b, "get_user_pages" },
	{ 0x1985af2a, "down_read" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xc65e73c, "scsi_normalize_sense" },
	{ 0x69d38ed9, "__scsi_print_sense" },
	{ 0x1af40e18, "__copy_from_user_ll" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x7dceceac, "capable" },
	{ 0xd4abb36c, "__alloc_pages" },
	{ 0x8a9eec75, "contig_page_data" },
	{ 0x7d4e29ae, "page_address" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x37ac91a4, "scsi_device_get" },
	{ 0x54ee23d3, "fasync_helper" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5fe7f92a, "put_disk" },
	{ 0xdc3debb9, "cdev_del" },
	{ 0x27514859, "class_device_destroy" },
	{ 0x4149cb93, "sysfs_remove_link" },
	{ 0x14126ae8, "kill_fasync" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x6ce1aae, "scsi_device_put" },
	{ 0x65734b02, "__free_pages" },
	{ 0x946be58e, "put_page" },
	{ 0x553d0022, "_read_unlock_irqrestore" },
	{ 0x496a442, "_read_lock_irqsave" },
	{ 0x7d11c268, "jiffies" },
	{ 0x52c0a61d, "_write_unlock_irqrestore" },
	{ 0x3093180f, "_write_lock_irqsave" },
	{ 0x1b7d4074, "printk" },
	{ 0xaf3dd7dc, "scsi_logging_level" },
	{ 0x37a0cba, "kfree" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";


MODULE_INFO(srcversion, "031A006FCE4E1CC3A2A8BCF");
