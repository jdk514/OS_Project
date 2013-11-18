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
	{ 0xba7921dc, "zlib_inflateEnd" },
	{ 0xef14fd8b, "generic_file_llseek" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xab880253, "iget5_locked" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x754b66a0, "page_symlink_inode_operations" },
	{ 0x649f370c, "generic_read_dir" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x1b7d4074, "printk" },
	{ 0x9ac7d267, "d_rehash" },
	{ 0x5152e605, "memcmp" },
	{ 0xc0b9dad, "d_alloc_root" },
	{ 0x1e397ba5, "kunmap" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xacadd052, "generic_ro_fops" },
	{ 0x712c1b71, "wait_on_page_bit" },
	{ 0x159c1518, "unlock_page" },
	{ 0x6b60eef6, "zlib_inflate" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x432f6c35, "kmap" },
	{ 0x9de1c4d5, "unlock_new_inode" },
	{ 0x4bb8ccb6, "kill_block_super" },
	{ 0x118bc8c2, "register_filesystem" },
	{ 0x3b8be29d, "zlib_inflateInit2" },
	{ 0xc317c43f, "iput" },
	{ 0x8a76b715, "read_cache_page" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0xf56a3962, "zlib_inflateReset" },
	{ 0xfcc3c01d, "get_sb_bdev" },
	{ 0x946be58e, "put_page" },
	{ 0x933eb75d, "unregister_filesystem" },
	{ 0xc7fd813, "init_special_inode" },
	{ 0x7406bbc, "d_instantiate" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D12B7EF8EAC6051A27DDC62");
