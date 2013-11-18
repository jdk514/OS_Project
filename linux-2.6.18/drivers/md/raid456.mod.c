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
	{ 0x1c5b2327, "kmem_cache_destroy" },
	{ 0xd0ee38b8, "schedule_timeout_uninterruptible" },
	{ 0x7d4e29ae, "page_address" },
	{ 0x4609ea9f, "blk_plug_device" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0xc4d65887, "boot_cpu_data" },
	{ 0xbb348188, "md_check_recovery" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x6af731e4, "md_write_end" },
	{ 0x669e2d2f, "seq_printf" },
	{ 0x347e9f39, "bitmap_endwrite" },
	{ 0x807473ee, "bitmap_unplug" },
	{ 0xed3427c, "md_new_event" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xa727fc18, "unregister_md_personality" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x91ed7e93, "sysfs_remove_group" },
	{ 0x7d11c268, "jiffies" },
	{ 0x16b86be, "kunmap_atomic" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xa6367e45, "kmap_atomic" },
	{ 0x4920b123, "bitmap_start_sync" },
	{ 0xd4abb36c, "__alloc_pages" },
	{ 0x7bcbd1af, "md_register_thread" },
	{ 0x993d9d8c, "bio_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0x692d1a65, "sysfs_create_group" },
	{ 0x5152e605, "memcmp" },
	{ 0x4998fabc, "md_do_sync" },
	{ 0x27faf10f, "bitmap_close_sync" },
	{ 0xb689e344, "kmem_cache_free" },
	{ 0x3e7f7e2d, "blk_sync_queue" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x20cd79f3, "generic_make_request" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xbfd30a63, "xor_block" },
	{ 0x8a9eec75, "contig_page_data" },
	{ 0xbf9b99c4, "bio_endio" },
	{ 0x1e7cfadc, "md_done_sync" },
	{ 0x2ef69a16, "sysfs_create_link" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x275fdd48, "md_write_start" },
	{ 0x697d0d13, "bdevname" },
	{ 0x107d6ba3, "__get_free_pages" },
	{ 0x4292364c, "schedule" },
	{ 0x2893faa5, "md_wakeup_thread" },
	{ 0xfc76e10b, "kmem_cache_create" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x9941ccb8, "free_pages" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xd2965f6f, "kthread_should_stop" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0xf2f88927, "md_unregister_thread" },
	{ 0x7d6d42cb, "blk_remove_plug" },
	{ 0x37a0cba, "kfree" },
	{ 0x4232376d, "bitmap_startwrite" },
	{ 0x2e60bace, "memcpy" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0x6334ca17, "md_error" },
	{ 0x946be58e, "put_page" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x8857488c, "bdget" },
	{ 0x67dc93bf, "bdput" },
	{ 0x87b9a132, "register_md_personality" },
	{ 0x541a254, "bitmap_end_sync" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=xor";


MODULE_INFO(srcversion, "DA2873D2C7453AF0081036A");
