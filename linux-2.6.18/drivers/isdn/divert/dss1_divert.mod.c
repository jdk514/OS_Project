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
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x4827a016, "del_timer" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x96befe4d, "no_llseek" },
	{ 0xa3e9fd5e, "interruptible_sleep_on" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xaf5f9c5f, "nonseekable_open" },
	{ 0x7d11c268, "jiffies" },
	{ 0xfa06820f, "isdn_register_divert" },
	{ 0xc12e8a55, "proc_mkdir" },
	{ 0x1b7d4074, "printk" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0xf2a644fb, "copy_from_user" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=isdn";


MODULE_INFO(srcversion, "77FB48C443A40629B3D1B4A");
