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
	{ 0x4774f4f1, "simple_pin_fs" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xb197788a, "kernel_subsys" },
	{ 0xcff53400, "kref_put" },
	{ 0x2c2512ea, "get_zeroed_page" },
	{ 0x61bed476, "up_read" },
	{ 0xef14fd8b, "generic_file_llseek" },
	{ 0xc045ad4e, "timespec_trunc" },
	{ 0x85b97aa8, "subsystem_unregister" },
	{ 0x67a7fa2f, "simple_release_fs" },
	{ 0x74cc238d, "current_kernel_time" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x61f0a291, "simple_commit_write" },
	{ 0x1374d67, "simple_lookup" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x9271012a, "generic_delete_inode" },
	{ 0xa17ecfe, "dput" },
	{ 0x3cade16f, "dget_locked" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x649f370c, "generic_read_dir" },
	{ 0x84a8e83e, "inode_setattr" },
	{ 0x1985af2a, "down_read" },
	{ 0xf5efcaf2, "d_delete" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x1616d35c, "subsystem_register" },
	{ 0xd4a51edf, "get_sb_single" },
	{ 0x656a4576, "kill_litter_super" },
	{ 0x1b7d4074, "printk" },
	{ 0x9ac7d267, "d_rehash" },
	{ 0xc0b9dad, "d_alloc_root" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xb689e344, "kmem_cache_free" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x179ec4b8, "dcache_lock" },
	{ 0x70f9bc3b, "simple_readpage" },
	{ 0x8e939a5e, "path_release" },
	{ 0x7dceceac, "capable" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xabd399bf, "simple_unlink" },
	{ 0xa1ad4b3c, "path_lookup" },
	{ 0x836a6200, "d_alloc" },
	{ 0xc3cf1128, "in_group_p" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x9f45a66e, "inode_change_ok" },
	{ 0xfc76e10b, "kmem_cache_create" },
	{ 0x118bc8c2, "register_filesystem" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x6989a769, "vsnprintf" },
	{ 0x9941ccb8, "free_pages" },
	{ 0xc317c43f, "iput" },
	{ 0x3ae831b6, "kref_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xf90ab04a, "iunique" },
	{ 0x8a1203a9, "kref_get" },
	{ 0xef5dbef3, "generic_readlink" },
	{ 0x3b056490, "simple_statfs" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x933eb75d, "unregister_filesystem" },
	{ 0x25da070, "snprintf" },
	{ 0x3105bd2e, "new_inode" },
	{ 0x96b27088, "__down_failed" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x7406bbc, "d_instantiate" },
	{ 0xb2db6e42, "simple_rmdir" },
	{ 0x63392c2, "simple_prepare_write" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E16091D9F8E433D885C690F");
