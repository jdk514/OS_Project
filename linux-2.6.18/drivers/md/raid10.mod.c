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
	{ 0xb0eb26ed, "bio_alloc" },
	{ 0x54e0450, "blk_queue_merge_bvec" },
	{ 0x7bcbd1af, "md_register_thread" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd4abb36c, "__alloc_pages" },
	{ 0x8a9eec75, "contig_page_data" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x946be58e, "put_page" },
	{ 0x6af731e4, "md_write_end" },
	{ 0x347e9f39, "bitmap_endwrite" },
	{ 0x2579aa6, "bio_add_page" },
	{ 0x4920b123, "bitmap_start_sync" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x27faf10f, "bitmap_close_sync" },
	{ 0x541a254, "bitmap_end_sync" },
	{ 0xbe8a1485, "mempool_create" },
	{ 0xa13798f8, "printk_ratelimit" },
	{ 0x8cc1ceba, "sync_page_io" },
	{ 0x5152e605, "memcmp" },
	{ 0x7d4e29ae, "page_address" },
	{ 0x807473ee, "bitmap_unplug" },
	{ 0x7d6d42cb, "blk_remove_plug" },
	{ 0xbb348188, "md_check_recovery" },
	{ 0x6334ca17, "md_error" },
	{ 0x1e7cfadc, "md_done_sync" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x669e2d2f, "seq_printf" },
	{ 0x87b9a132, "register_md_personality" },
	{ 0x4609ea9f, "blk_plug_device" },
	{ 0x4232376d, "bitmap_startwrite" },
	{ 0xa42d0418, "bio_clone" },
	{ 0xcfaf79ba, "mempool_alloc" },
	{ 0x275fdd48, "md_write_start" },
	{ 0x4557a93c, "bio_pair_release" },
	{ 0x20cd79f3, "generic_make_request" },
	{ 0x561afe01, "bio_split" },
	{ 0x2146f99f, "bio_split_pool" },
	{ 0x7f356de5, "bio_put" },
	{ 0xbf9b99c4, "bio_endio" },
	{ 0xe5077a8f, "mempool_destroy" },
	{ 0x3e7f7e2d, "blk_sync_queue" },
	{ 0xf2f88927, "md_unregister_thread" },
	{ 0xddc3ea6d, "blk_queue_stack_limits" },
	{ 0x697d0d13, "bdevname" },
	{ 0x1b7d4074, "printk" },
	{ 0x37a9798f, "mempool_free" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x4292364c, "schedule" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0x2893faa5, "md_wakeup_thread" },
	{ 0xa727fc18, "unregister_md_personality" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8301DE26A03C7844E4ED067");
