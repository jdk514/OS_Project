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
	{ 0x3dccf731, "single_release" },
	{ 0xe6eee95b, "seq_read" },
	{ 0xf9b907c1, "seq_lseek" },
	{ 0x20cd79f3, "generic_make_request" },
	{ 0xc0580937, "rb_erase" },
	{ 0x17a76e71, "rb_first" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0xd2965f6f, "kthread_should_stop" },
	{ 0xade698, "flush_signals" },
	{ 0x35c2ba9e, "refrigerator" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x29c2fef5, "set_user_nice" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0xd441cad1, "bd_set_size" },
	{ 0xd4abb36c, "__alloc_pages" },
	{ 0x8a9eec75, "contig_page_data" },
	{ 0x2fc94777, "bd_claim" },
	{ 0xc12e8a55, "proc_mkdir" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1ef3eb01, "misc_register" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x700d5f9, "del_gendisk" },
	{ 0xb346304, "kthread_stop" },
	{ 0x5fe7f92a, "put_disk" },
	{ 0x81db09d7, "blk_cleanup_queue" },
	{ 0xe10dc728, "add_disk" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x97e89e2c, "kthread_create" },
	{ 0x54e0450, "blk_queue_merge_bvec" },
	{ 0xeb4364da, "blk_queue_max_sectors" },
	{ 0xdf704809, "blk_queue_hardsect_size" },
	{ 0x324fb89, "blk_queue_make_request" },
	{ 0xbb8cc8f5, "set_blocksize" },
	{ 0xdb5ea3f9, "module_refcount" },
	{ 0xc47333fe, "blkdev_get" },
	{ 0x8857488c, "bdget" },
	{ 0xedfed1fa, "blk_alloc_queue" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xa4935a88, "alloc_disk" },
	{ 0xbe8a1485, "mempool_create" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0xa05c03df, "mempool_kmalloc" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x7dceceac, "capable" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x2579aa6, "bio_add_page" },
	{ 0x16b86be, "kunmap_atomic" },
	{ 0x7d4e29ae, "page_address" },
	{ 0xa6367e45, "kmap_atomic" },
	{ 0xfd98879a, "rb_next" },
	{ 0x37a9798f, "mempool_free" },
	{ 0xbf9b99c4, "bio_endio" },
	{ 0xa6dcc773, "rb_insert_color" },
	{ 0x4557a93c, "bio_pair_release" },
	{ 0x561afe01, "bio_split" },
	{ 0x2146f99f, "bio_split_pool" },
	{ 0x77a4c2ed, "blk_queue_bounce" },
	{ 0xcfaf79ba, "mempool_alloc" },
	{ 0xa42d0418, "bio_clone" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x669e2d2f, "seq_printf" },
	{ 0x697d0d13, "bdevname" },
	{ 0xdb01fdc3, "single_open" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x993d9d8c, "bio_init" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x98499464, "blkdev_put" },
	{ 0xef11c6fe, "bd_release" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x65734b02, "__free_pages" },
	{ 0x7f356de5, "bio_put" },
	{ 0xee1a2774, "blkdev_ioctl" },
	{ 0x4f476e96, "init_cdrom_command" },
	{ 0x4078c44f, "blk_put_request" },
	{ 0xa34eb072, "wait_for_completion" },
	{ 0xe9909267, "generic_unplug_device" },
	{ 0x42827246, "elv_add_request" },
	{ 0xe2d28883, "blk_end_sync_rq" },
	{ 0x9b05ea5c, "scsi_command_size" },
	{ 0x7f64488b, "blk_get_request" },
	{ 0x37a0cba, "kfree" },
	{ 0x1b7d4074, "printk" },
	{ 0xe5077a8f, "mempool_destroy" },
	{ 0xeac1c4af, "unregister_blkdev" },
	{ 0x25dd4bad, "misc_deregister" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0x74ce7f8b, "proc_root_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=cdrom";


MODULE_INFO(srcversion, "E57776D16594A1D40D035DC");
