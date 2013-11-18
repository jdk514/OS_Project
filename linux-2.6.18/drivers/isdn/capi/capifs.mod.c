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
	{ 0x71e3b4d3, "kill_anon_super" },
	{ 0x74cc238d, "current_kernel_time" },
	{ 0xa17ecfe, "dput" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xf5efcaf2, "d_delete" },
	{ 0xd4a51edf, "get_sb_single" },
	{ 0x1b7d4074, "printk" },
	{ 0x859204af, "sscanf" },
	{ 0xc0b9dad, "d_alloc_root" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x92902a6a, "kern_mount" },
	{ 0xafcd88eb, "simple_dir_operations" },
	{ 0x369bed0b, "mntput_no_expire" },
	{ 0x118bc8c2, "register_filesystem" },
	{ 0xc317c43f, "iput" },
	{ 0x3b056490, "simple_statfs" },
	{ 0x933eb75d, "unregister_filesystem" },
	{ 0xc7fd813, "init_special_inode" },
	{ 0x3105bd2e, "new_inode" },
	{ 0xb9a6b637, "lookup_one_len" },
	{ 0x421039ba, "simple_dir_inode_operations" },
	{ 0x7406bbc, "d_instantiate" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8911D64141D4B740691FE6B");
