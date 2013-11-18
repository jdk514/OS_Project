#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
};

static const struct modversion_info ____versions[]
__attribute_used__
__attribute__((section("__versions"))) = {
	{ 0xb499ef18, "struct_module" },
	{ 0x9785aa4e, "vfs_readdir" },
	{ 0x52ff6e80, "is_bad_inode" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xa17ecfe, "dput" },
	{ 0x3cade16f, "dget_locked" },
	{ 0x1fa4f286, "dentry_open" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x1b7d4074, "printk" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x179ec4b8, "dcache_lock" },
	{ 0xf51976d4, "fput" },
	{ 0x9de1c4d5, "unlock_new_inode" },
	{ 0xc317c43f, "iput" },
	{ 0xb9a6b637, "lookup_one_len" },
	{ 0x3adfbb8b, "d_alloc_anon" },
	{ 0x604893e0, "iget_locked" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4D1BBA47A639154B88DFE71");
