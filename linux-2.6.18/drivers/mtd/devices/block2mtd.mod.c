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
	{ 0xb9203fc0, "del_mtd_device" },
	{ 0xbe38cd62, "mtd_erase_callback" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x159c1518, "unlock_page" },
	{ 0xe2244aca, "set_page_dirty" },
	{ 0xa0c130fa, "__lock_page" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x5152e605, "memcmp" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xc31ab280, "sync_blockdev" },
	{ 0x946be58e, "put_page" },
	{ 0x7d4e29ae, "page_address" },
	{ 0x8a76b715, "read_cache_page" },
	{ 0x2c4337e9, "read_cache_pages" },
	{ 0xd4abb36c, "__alloc_pages" },
	{ 0x8a9eec75, "contig_page_data" },
	{ 0x57bc81bf, "radix_tree_lookup" },
	{ 0x5a0e1e92, "_read_lock_irq" },
	{ 0x6d2bcfdd, "add_mtd_device" },
	{ 0x2eb5b6e0, "default_mtd_writev" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0xaeeff4a2, "open_bdev_excl" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x85df9b6c, "strsep" },
	{ 0xb7240635, "close_bdev_excl" },
	{ 0x1808117a, "invalidate_inode_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0x1b7d4074, "printk" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=mtdcore,mtdpart";


MODULE_INFO(srcversion, "608EF7F0FCDA5E9E187BF26");
