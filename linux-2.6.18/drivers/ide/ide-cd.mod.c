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
	{ 0x27833764, "ide_bus_type" },
	{ 0xe3decee2, "__ide_abort" },
	{ 0x1eb84996, "__ide_error" },
	{ 0xaa136450, "param_get_charp" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x4d101f5f, "driver_register" },
	{ 0x9b05ea5c, "scsi_command_size" },
	{ 0xc493dd17, "ide_set_handler" },
	{ 0x3c8117cc, "__ide_dma_off" },
	{ 0x9973d1c9, "elv_dequeue_request" },
	{ 0xef0bcc26, "ide_error" },
	{ 0x4609ea9f, "blk_plug_device" },
	{ 0x680d02b7, "blk_dump_rq_flags" },
	{ 0x7d4e29ae, "page_address" },
	{ 0x71f372e6, "ide_stall_queue" },
	{ 0xa5366cab, "ide_end_request" },
	{ 0xfcf3ea47, "end_that_request_last" },
	{ 0x9465c3fa, "end_that_request_chunk" },
	{ 0x6e6991d5, "ide_end_dequeued_request" },
	{ 0x8b51ede2, "ide_dump_status" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xb0e42262, "ide_lock" },
	{ 0x35435b26, "ide_execute_command" },
	{ 0x5c323d43, "ide_wait_stat" },
	{ 0xe10dc728, "add_disk" },
	{ 0x63b1bd2, "ide_add_setting" },
	{ 0xa92f10d2, "register_cdrom" },
	{ 0xd49152b7, "ide_dma_verbose" },
	{ 0x4c272f3, "cdrom_number_of_slots" },
	{ 0xc2449a6e, "blk_queue_dma_alignment" },
	{ 0x3ae831b6, "kref_init" },
	{ 0xb57f5f1d, "ide_register_subdriver" },
	{ 0x606ea309, "ide_init_disk" },
	{ 0xa4935a88, "alloc_disk" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x612d8f97, "cdrom_get_last_written" },
	{ 0xdf704809, "blk_queue_hardsect_size" },
	{ 0x22642111, "cdrom_get_media_event" },
	{ 0xbe3b478b, "cdrom_open" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x8a1203a9, "kref_get" },
	{ 0x8098329b, "cdrom_release" },
	{ 0x331d6f0d, "cdrom_ioctl" },
	{ 0x3df94ccc, "generic_ide_ioctl" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x78aed213, "cdrom_mode_select" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x8bb5490c, "cdrom_mode_sense" },
	{ 0x4f476e96, "init_cdrom_command" },
	{ 0xb6dd947d, "cdrom_media_changed" },
	{ 0x5fe7f92a, "put_disk" },
	{ 0xcb537be, "blk_queue_prep_rq" },
	{ 0x4cb5cca8, "unregister_cdrom" },
	{ 0x37a0cba, "kfree" },
	{ 0x1b7d4074, "printk" },
	{ 0x700d5f9, "del_gendisk" },
	{ 0x2036ffa3, "ide_unregister_subdriver" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xcff53400, "kref_put" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7d11c268, "jiffies" },
	{ 0x8fd86470, "ide_do_drive_cmd" },
	{ 0xee55dd57, "ide_init_drive_cmd" },
	{ 0x3e158c0e, "driver_unregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=cdrom";


MODULE_INFO(srcversion, "5715AF82F6EB37F92A67653");
