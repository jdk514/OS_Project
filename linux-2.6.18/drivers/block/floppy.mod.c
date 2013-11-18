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
	{ 0x72b243d4, "free_dma" },
	{ 0x7054a3e4, "request_dma" },
	{ 0x1d676acf, "boot_tvec_bases" },
	{ 0xaa136450, "param_get_charp" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x6b7a447c, "__invalidate_device" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x7dceceac, "capable" },
	{ 0x2c2bc616, "file_permission" },
	{ 0x65734b02, "__free_pages" },
	{ 0xe9909267, "generic_unplug_device" },
	{ 0xfea95863, "submit_bio" },
	{ 0x993d9d8c, "bio_init" },
	{ 0xd4abb36c, "__alloc_pages" },
	{ 0x8a9eec75, "contig_page_data" },
	{ 0x2c715df5, "elv_next_request" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0x130fa010, "get_disk" },
	{ 0xe10dc728, "add_disk" },
	{ 0x68e0d967, "device_create_file" },
	{ 0xbed4bf59, "platform_device_register" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4c3af445, "__request_region" },
	{ 0x26e96637, "request_irq" },
	{ 0x2e60bace, "memcpy" },
	{ 0x9e64fbfe, "rtc_cmos_read" },
	{ 0x811afadf, "rtc_lock" },
	{ 0x45064817, "blk_register_region" },
	{ 0xeb4364da, "blk_queue_max_sectors" },
	{ 0x476f0d58, "blk_init_queue" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xa4935a88, "alloc_disk" },
	{ 0x868acba5, "get_options" },
	{ 0x37a0cba, "kfree" },
	{ 0x3851a0b9, "check_disk_change" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x7e0221e4, "complete" },
	{ 0xa34eb072, "wait_for_completion" },
	{ 0x81db09d7, "blk_cleanup_queue" },
	{ 0x5fe7f92a, "put_disk" },
	{ 0x2c077a33, "platform_device_unregister" },
	{ 0x845b7a76, "device_remove_file" },
	{ 0x700d5f9, "del_gendisk" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0xeac1c4af, "unregister_blkdev" },
	{ 0x3a9b6fb9, "blk_unregister_region" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x9941ccb8, "free_pages" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0x794487ee, "disable_hlt" },
	{ 0x107d6ba3, "__get_free_pages" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x7d4e29ae, "page_address" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x4292364c, "schedule" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x28d62f7, "dma_spin_lock" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0xfcf3ea47, "end_that_request_last" },
	{ 0x9973d1c9, "elv_dequeue_request" },
	{ 0xbbc30a60, "add_disk_randomness" },
	{ 0x33f1f594, "end_that_request_first" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x9c7077bd, "enable_hlt" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x4827a016, "del_timer" },
	{ 0x1b7d4074, "printk" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F532F52860888E835BB857C");
