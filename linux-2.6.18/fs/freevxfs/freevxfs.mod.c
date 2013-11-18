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
	{ 0x7d4e29ae, "page_address" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x3659eefd, "block_read_full_page" },
	{ 0x754b66a0, "page_symlink_inode_operations" },
	{ 0x1b7d4074, "printk" },
	{ 0x9ac7d267, "d_rehash" },
	{ 0x5152e605, "memcmp" },
	{ 0xc0b9dad, "d_alloc_root" },
	{ 0x5568be43, "lock_kernel" },
	{ 0x1e397ba5, "kunmap" },
	{ 0xb689e344, "kmem_cache_free" },
	{ 0xacadd052, "generic_ro_fops" },
	{ 0x712c1b71, "wait_on_page_bit" },
	{ 0x159c1518, "unlock_page" },
	{ 0x78b8d9f9, "__brelse" },
	{ 0x5dfe8f1a, "unlock_kernel" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x432f6c35, "kmap" },
	{ 0x9de1c4d5, "unlock_new_inode" },
	{ 0x4bb8ccb6, "kill_block_super" },
	{ 0xfc76e10b, "kmem_cache_create" },
	{ 0x118bc8c2, "register_filesystem" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xc317c43f, "iput" },
	{ 0x8a76b715, "read_cache_page" },
	{ 0x37a0cba, "kfree" },
	{ 0xfcc3c01d, "get_sb_bdev" },
	{ 0xe85b5632, "sb_set_blocksize" },
	{ 0xef5dbef3, "generic_readlink" },
	{ 0x946be58e, "put_page" },
	{ 0xfe5c69e5, "block_sync_page" },
	{ 0x933eb75d, "unregister_filesystem" },
	{ 0xc7fd813, "init_special_inode" },
	{ 0x3105bd2e, "new_inode" },
	{ 0x7406bbc, "d_instantiate" },
	{ 0x53887751, "generic_block_bmap" },
	{ 0x604893e0, "iget_locked" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "AE1039AE32EC25028C125BC");
