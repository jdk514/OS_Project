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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf249d793, "sb_min_blocksize" },
	{ 0x34733912, "__bread" },
	{ 0xb6eea871, "unload_nls" },
	{ 0x8fff062e, "make_bad_inode" },
	{ 0xef14fd8b, "generic_file_llseek" },
	{ 0x26fb1aeb, "__mark_inode_dirty" },
	{ 0x815b5dd4, "match_octal" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xc1d50464, "match_strdup" },
	{ 0x15c3b73c, "cont_prepare_write" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x669e2d2f, "seq_printf" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0x86e9acae, "match_token" },
	{ 0x3659eefd, "block_read_full_page" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x754b66a0, "page_symlink_inode_operations" },
	{ 0x649f370c, "generic_read_dir" },
	{ 0x304faeeb, "igrab" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xe2244aca, "set_page_dirty" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x16250200, "_atomic_dec_and_lock" },
	{ 0xe652b8e4, "__insert_inode_hash" },
	{ 0xb56717cf, "xtime" },
	{ 0xd2117bd9, "inode_add_bytes" },
	{ 0x6a0c009f, "file_fsync" },
	{ 0x1b7d4074, "printk" },
	{ 0x9ac7d267, "d_rehash" },
	{ 0x5152e605, "memcmp" },
	{ 0x3cc5e8cc, "find_or_create_page" },
	{ 0xc0b9dad, "d_alloc_root" },
	{ 0x1075bf0, "panic" },
	{ 0x1e397ba5, "kunmap" },
	{ 0xa2b5f672, "mpage_writepages" },
	{ 0xb689e344, "kmem_cache_free" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xd2791b8c, "page_symlink" },
	{ 0x8b9b5d73, "sync_dirty_buffer" },
	{ 0x4e3567f7, "match_int" },
	{ 0x159c1518, "unlock_page" },
	{ 0x78b8d9f9, "__brelse" },
	{ 0x6be3b48, "mark_page_accessed" },
	{ 0x29ceab62, "inode_init_once" },
	{ 0x7dceceac, "capable" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x52114262, "generic_file_mmap" },
	{ 0xd0bc7b6d, "generic_file_sendfile" },
	{ 0x432f6c35, "kmap" },
	{ 0x441fe1cd, "block_write_full_page" },
	{ 0x78e8f570, "try_to_free_buffers" },
	{ 0x48cae51f, "load_nls" },
	{ 0x857343d1, "generic_commit_write" },
	{ 0x4292364c, "schedule" },
	{ 0x9de1c4d5, "unlock_new_inode" },
	{ 0x4bb8ccb6, "kill_block_super" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x17c50e07, "inode_set_bytes" },
	{ 0xfc76e10b, "kmem_cache_create" },
	{ 0x118bc8c2, "register_filesystem" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xc317c43f, "iput" },
	{ 0x8a76b715, "read_cache_page" },
	{ 0x37a0cba, "kfree" },
	{ 0x1543fc26, "generic_permission" },
	{ 0x2e60bace, "memcpy" },
	{ 0xce5144a1, "load_nls_default" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xfcc3c01d, "get_sb_bdev" },
	{ 0xe85b5632, "sb_set_blocksize" },
	{ 0x946be58e, "put_page" },
	{ 0xb4f00a82, "__blockdev_direct_IO" },
	{ 0xfe5c69e5, "block_sync_page" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x41d14f32, "mark_buffer_dirty" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x1288a397, "ioctl_by_bdev" },
	{ 0x933eb75d, "unregister_filesystem" },
	{ 0xc7fd813, "init_special_inode" },
	{ 0x795cd420, "generic_file_write" },
	{ 0x3105bd2e, "new_inode" },
	{ 0x8235805b, "memmove" },
	{ 0x107cc40, "generic_file_read" },
	{ 0x96b27088, "__down_failed" },
	{ 0x7406bbc, "d_instantiate" },
	{ 0x53887751, "generic_block_bmap" },
	{ 0x604893e0, "iget_locked" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7CA5E01DFD32CAB2597BC2D");
