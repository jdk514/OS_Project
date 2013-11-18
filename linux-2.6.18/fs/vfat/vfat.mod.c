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
	{ 0xce956a7c, "fat_detach" },
	{ 0x26fb1aeb, "__mark_inode_dirty" },
	{ 0xe3799424, "d_invalidate" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xa17ecfe, "dput" },
	{ 0x582ad16a, "d_find_alias" },
	{ 0x727b6e0a, "fat_sync_inode" },
	{ 0x40e64660, "fat_add_entries" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0x8b96729a, "fat_remove_entries" },
	{ 0xfb95f0f2, "fat_notify_change" },
	{ 0xb0a81894, "fat_alloc_new_dir" },
	{ 0xb56717cf, "xtime" },
	{ 0x6befcf28, "fat_fill_super" },
	{ 0x87d7c96c, "fat_build_inode" },
	{ 0x8d3894f2, "_ctype" },
	{ 0x1f6566ff, "fat_attach" },
	{ 0x5568be43, "lock_kernel" },
	{ 0x8b9b5d73, "sync_dirty_buffer" },
	{ 0x7d850612, "utf8_mbstowcs" },
	{ 0x78b8d9f9, "__brelse" },
	{ 0x5dfe8f1a, "unlock_kernel" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x107d6ba3, "__get_free_pages" },
	{ 0x4bb8ccb6, "kill_block_super" },
	{ 0x3302b75, "fat_search_long" },
	{ 0x8b18831, "fat_date_unix2dos" },
	{ 0xfba76e4f, "fat_scan" },
	{ 0x118bc8c2, "register_filesystem" },
	{ 0x9941ccb8, "free_pages" },
	{ 0xc317c43f, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x3eca7ec7, "d_splice_alias" },
	{ 0xfcc3c01d, "get_sb_bdev" },
	{ 0xda6ed2cf, "fat_free_clusters" },
	{ 0xb4f6e4bb, "fat_get_dotdot_entry" },
	{ 0x8148ec5f, "fat_fs_panic" },
	{ 0x41d14f32, "mark_buffer_dirty" },
	{ 0x933eb75d, "unregister_filesystem" },
	{ 0x8e6c4b15, "fat_dir_empty" },
	{ 0x7406bbc, "d_instantiate" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=fat";


MODULE_INFO(srcversion, "DDEB508593EBB46B110BA45");
