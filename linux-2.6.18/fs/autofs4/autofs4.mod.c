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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x23d5c3c7, "get_sb_nodev" },
	{ 0xe3799424, "d_invalidate" },
	{ 0x9785aa4e, "vfs_readdir" },
	{ 0x71e3b4d3, "kill_anon_super" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x74cc238d, "current_kernel_time" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xa17ecfe, "dput" },
	{ 0x669e2d2f, "seq_printf" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0x86e9acae, "match_token" },
	{ 0xd2c05faf, "filp_close" },
	{ 0x1fa4f286, "dentry_open" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x649f370c, "generic_read_dir" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x5171f77d, "may_umount" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0x4ff943ae, "mutex_lock_interruptible" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x9ac7d267, "d_rehash" },
	{ 0x5152e605, "memcmp" },
	{ 0xc0b9dad, "d_alloc_root" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x179ec4b8, "dcache_lock" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x4e3567f7, "match_int" },
	{ 0x8e939a5e, "path_release" },
	{ 0xd6d53ba, "shrink_dcache_sb" },
	{ 0xf51976d4, "fput" },
	{ 0x7dceceac, "capable" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x369bed0b, "mntput_no_expire" },
	{ 0x4292364c, "schedule" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0xd3e8b1b9, "may_umount_tree" },
	{ 0x671de533, "simple_empty" },
	{ 0xa274eb9, "dcache_readdir" },
	{ 0x118bc8c2, "register_filesystem" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x10f7d369, "dcache_dir_open" },
	{ 0xe84923ef, "follow_down" },
	{ 0xc317c43f, "iput" },
	{ 0x5eecc786, "dcache_dir_close" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0x61dc8e70, "fget" },
	{ 0xef5dbef3, "generic_readlink" },
	{ 0x3b056490, "simple_statfs" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x933eb75d, "unregister_filesystem" },
	{ 0x3105bd2e, "new_inode" },
	{ 0x7406bbc, "d_instantiate" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "CAA4F37545803DF8BC918AF");
