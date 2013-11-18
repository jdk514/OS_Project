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
	{ 0x33bfc6eb, "mark_buffer_dirty_inode" },
	{ 0x34733912, "__bread" },
	{ 0xb6eea871, "unload_nls" },
	{ 0x8fff062e, "make_bad_inode" },
	{ 0x26fb1aeb, "__mark_inode_dirty" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x7d4e29ae, "page_address" },
	{ 0x815b5dd4, "match_octal" },
	{ 0x74cc238d, "current_kernel_time" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x52ff6e80, "is_bad_inode" },
	{ 0x5cc273cb, "generic_file_open" },
	{ 0x9e428ee6, "ll_rw_block" },
	{ 0x3bb70d5, "__lock_buffer" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0x86e9acae, "match_token" },
	{ 0x3659eefd, "block_read_full_page" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x754b66a0, "page_symlink_inode_operations" },
	{ 0x649f370c, "generic_read_dir" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x8553417b, "unlock_buffer" },
	{ 0x1afe6552, "block_prepare_write" },
	{ 0xda4008e6, "cond_resched" },
	{ 0xe652b8e4, "__insert_inode_hash" },
	{ 0xd2117bd9, "inode_add_bytes" },
	{ 0x28a54161, "current_fs_time" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x9ac7d267, "d_rehash" },
	{ 0x5152e605, "memcmp" },
	{ 0x3cc5e8cc, "find_or_create_page" },
	{ 0xc0b9dad, "d_alloc_root" },
	{ 0x5568be43, "lock_kernel" },
	{ 0x1e397ba5, "kunmap" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xb689e344, "kmem_cache_free" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x30af7393, "__wait_on_buffer" },
	{ 0x8b9b5d73, "sync_dirty_buffer" },
	{ 0x4e3567f7, "match_int" },
	{ 0x159c1518, "unlock_page" },
	{ 0x78b8d9f9, "__brelse" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x29ceab62, "inode_init_once" },
	{ 0x5dfe8f1a, "unlock_kernel" },
	{ 0x7dceceac, "capable" },
	{ 0x2c2bc616, "file_permission" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xa82fc81f, "sync_mapping_buffers" },
	{ 0x52114262, "generic_file_mmap" },
	{ 0xd0bc7b6d, "generic_file_sendfile" },
	{ 0x432f6c35, "kmap" },
	{ 0x441fe1cd, "block_write_full_page" },
	{ 0xf42f67e2, "inode_sub_bytes" },
	{ 0x48cae51f, "load_nls" },
	{ 0x857343d1, "generic_commit_write" },
	{ 0x9de1c4d5, "unlock_new_inode" },
	{ 0x4bb8ccb6, "kill_block_super" },
	{ 0xfc76e10b, "kmem_cache_create" },
	{ 0x118bc8c2, "register_filesystem" },
	{ 0xc317c43f, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0xce5144a1, "load_nls_default" },
	{ 0xfcc3c01d, "get_sb_bdev" },
	{ 0xaa44ac27, "block_truncate_page" },
	{ 0x946be58e, "put_page" },
	{ 0xfe5c69e5, "block_sync_page" },
	{ 0x41d14f32, "mark_buffer_dirty" },
	{ 0x1288a397, "ioctl_by_bdev" },
	{ 0x933eb75d, "unregister_filesystem" },
	{ 0xc7fd813, "init_special_inode" },
	{ 0x795cd420, "generic_file_write" },
	{ 0x3105bd2e, "new_inode" },
	{ 0x8235805b, "memmove" },
	{ 0x45b21ed2, "__getblk" },
	{ 0x107cc40, "generic_file_read" },
	{ 0x782b0008, "vsprintf" },
	{ 0xe516fd25, "clear_inode" },
	{ 0x7406bbc, "d_instantiate" },
	{ 0x53887751, "generic_block_bmap" },
	{ 0x604893e0, "iget_locked" },
	{ 0xa9eadee1, "truncate_inode_pages" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "40A4C365D63C07FE5D14EE8");
