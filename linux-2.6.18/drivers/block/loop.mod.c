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
	{ 0xdb5ea3f9, "module_refcount" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xa4935a88, "alloc_disk" },
	{ 0x81db09d7, "blk_cleanup_queue" },
	{ 0xb0eb26ed, "bio_alloc" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x7d4e29ae, "page_address" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x16b86be, "kunmap_atomic" },
	{ 0xca396630, "invalidate_bdev" },
	{ 0xa34eb072, "wait_for_completion" },
	{ 0xa6367e45, "kmap_atomic" },
	{ 0xd4abb36c, "__alloc_pages" },
	{ 0x1ddfbdda, "set_device_ro" },
	{ 0xedfed1fa, "blk_alloc_queue" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0x700d5f9, "del_gendisk" },
	{ 0x3cc5e8cc, "find_or_create_page" },
	{ 0x1e397ba5, "kunmap" },
	{ 0xdebaee08, "wait_for_completion_interruptible" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x159c1518, "unlock_page" },
	{ 0xf51976d4, "fput" },
	{ 0x8a9eec75, "contig_page_data" },
	{ 0xbf9b99c4, "bio_endio" },
	{ 0x7f356de5, "bio_put" },
	{ 0xeac1c4af, "unregister_blkdev" },
	{ 0x7dceceac, "capable" },
	{ 0x65734b02, "__free_pages" },
	{ 0xd441cad1, "bd_set_size" },
	{ 0x432f6c35, "kmap" },
	{ 0x324fb89, "blk_queue_make_request" },
	{ 0x5fe7f92a, "put_disk" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x37a0cba, "kfree" },
	{ 0xe10dc728, "add_disk" },
	{ 0x29c2fef5, "set_user_nice" },
	{ 0x61dc8e70, "fget" },
	{ 0x946be58e, "put_page" },
	{ 0x7e9ebb05, "kernel_thread" },
	{ 0x7e0221e4, "complete" },
	{ 0xbb8cc8f5, "set_blocksize" },
	{ 0x5894b75, "vfs_getattr" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0xdc43a9c8, "daemonize" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8D33EA2144FB1712D97C73B");
