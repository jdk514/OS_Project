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
	{ 0x505ec883, "dev_driver_string" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x1075bf0, "panic" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xa4935a88, "alloc_disk" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x7dceceac, "capable" },
	{ 0x625acc81, "__down_failed_interruptible" },
	{ 0xda4008e6, "cond_resched" },
	{ 0xd4abb36c, "__alloc_pages" },
	{ 0x8a9eec75, "contig_page_data" },
	{ 0x8cc19a95, "scsi_block_when_processing_errors" },
	{ 0x37ac91a4, "scsi_device_get" },
	{ 0x6ce1aae, "scsi_device_put" },
	{ 0x4b05104f, "_write_lock" },
	{ 0x9d465476, "driver_create_file" },
	{ 0x7ae7cd7e, "scsi_register_driver" },
	{ 0x1e8e5fac, "register_chrdev" },
	{ 0xc83decb4, "class_create" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x5152e605, "memcmp" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x7d11c268, "jiffies" },
	{ 0x7e0221e4, "complete" },
	{ 0xa34eb072, "wait_for_completion" },
	{ 0x67f6d6d5, "scsi_execute_async" },
	{ 0x9b05ea5c, "scsi_command_size" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x7d4e29ae, "page_address" },
	{ 0x69d38ed9, "__scsi_print_sense" },
	{ 0x2b0ba2b0, "scsi_sense_desc_find" },
	{ 0x796fc5ce, "scsi_get_sense_info_fld" },
	{ 0xc65e73c, "scsi_normalize_sense" },
	{ 0xa5bb0128, "scsi_ioctl" },
	{ 0x5fe7f92a, "put_disk" },
	{ 0x2fd1d81c, "vfree" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0x3e158c0e, "driver_unregister" },
	{ 0x38d967c9, "driver_remove_file" },
	{ 0x65734b02, "__free_pages" },
	{ 0x93538172, "class_destroy" },
	{ 0x6180e3ac, "class_device_create_file" },
	{ 0xd10fc04d, "class_device_create" },
	{ 0x27514859, "class_device_destroy" },
	{ 0x1b7d4074, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x25da070, "snprintf" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";


MODULE_INFO(srcversion, "0845F7341ECCAA438912026");
