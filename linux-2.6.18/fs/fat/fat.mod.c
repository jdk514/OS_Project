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
	{ 0xf249d793, "sb_min_blocksize" },
	{ 0x34733912, "__bread" },
	{ 0xb6eea871, "unload_nls" },
	{ 0x8fff062e, "make_bad_inode" },
	{ 0xef14fd8b, "generic_file_llseek" },
	{ 0x26fb1aeb, "__mark_inode_dirty" },
	{ 0x815b5dd4, "match_octal" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xdd7b7024, "seq_puts" },
	{ 0x52ff6e80, "is_bad_inode" },
	{ 0xc1d50464, "match_strdup" },
	{ 0x15c3b73c, "cont_prepare_write" },
	{ 0x9e428ee6, "ll_rw_block" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x1c92e258, "generic_file_aio_read" },
	{ 0x669e2d2f, "seq_printf" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0x86e9acae, "match_token" },
	{ 0x7c3a14dc, "generic_file_writev" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x649f370c, "generic_read_dir" },
	{ 0x304faeeb, "igrab" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x4847e26b, "generic_file_aio_write" },
	{ 0x84a8e83e, "inode_setattr" },
	{ 0xda4008e6, "cond_resched" },
	{ 0xe652b8e4, "__insert_inode_hash" },
	{ 0x6a399375, "mpage_readpages" },
	{ 0xb56717cf, "xtime" },
	{ 0x279a1b55, "mpage_readpage" },
	{ 0x6a0c009f, "file_fsync" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x5152e605, "memcmp" },
	{ 0xc0b9dad, "d_alloc_root" },
	{ 0x5568be43, "lock_kernel" },
	{ 0xa2b5f672, "mpage_writepages" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xaec4759f, "vprintk" },
	{ 0xb689e344, "kmem_cache_free" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x30af7393, "__wait_on_buffer" },
	{ 0x8b9b5d73, "sync_dirty_buffer" },
	{ 0x4e3567f7, "match_int" },
	{ 0x78b8d9f9, "__brelse" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x29ceab62, "inode_init_once" },
	{ 0x5dfe8f1a, "unlock_kernel" },
	{ 0x7dceceac, "capable" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xd0bc7b6d, "generic_file_sendfile" },
	{ 0x52114262, "generic_file_mmap" },
	{ 0x441fe1cd, "block_write_full_page" },
	{ 0x725dd5b7, "generic_cont_expand_simple" },
	{ 0x107d6ba3, "__get_free_pages" },
	{ 0x48cae51f, "load_nls" },
	{ 0x857343d1, "generic_commit_write" },
	{ 0x38d69f21, "__breadahead" },
	{ 0x23a3ff5, "do_sync_read" },
	{ 0x9de1c4d5, "unlock_new_inode" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x9f45a66e, "inode_change_ok" },
	{ 0xfc76e10b, "kmem_cache_create" },
	{ 0x9941ccb8, "free_pages" },
	{ 0xabb15f54, "sync_page_range_nolock" },
	{ 0xc317c43f, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0xf90ab04a, "iunique" },
	{ 0xe432d9c8, "do_sync_write" },
	{ 0x2e60bace, "memcpy" },
	{ 0xe85b5632, "sb_set_blocksize" },
	{ 0x4ef88542, "__bforget" },
	{ 0xb4f00a82, "__blockdev_direct_IO" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0xfe5c69e5, "block_sync_page" },
	{ 0x64a81210, "inode_needs_sync" },
	{ 0xeccf2ca1, "__find_get_block" },
	{ 0x41d14f32, "mark_buffer_dirty" },
	{ 0x863cb91a, "utf8_wcstombs" },
	{ 0x3105bd2e, "new_inode" },
	{ 0x39fe9d57, "generic_file_readv" },
	{ 0x45b21ed2, "__getblk" },
	{ 0x3adfbb8b, "d_alloc_anon" },
	{ 0xdadaf927, "notify_change" },
	{ 0xe516fd25, "clear_inode" },
	{ 0x53887751, "generic_block_bmap" },
	{ 0x604893e0, "iget_locked" },
	{ 0xa9eadee1, "truncate_inode_pages" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "0EDD022F6478640EF8B2B96");
