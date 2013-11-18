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
	{ 0x5a1d6f47, "seq_release" },
	{ 0xe6eee95b, "seq_read" },
	{ 0xf9b907c1, "seq_lseek" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x948cde9, "num_physpages" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xb1922cfe, "skb_copy_bits" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x37a0cba, "kfree" },
	{ 0x669e2d2f, "seq_printf" },
	{ 0xebb99830, "seq_open" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x4827a016, "del_timer" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0xb689e344, "kmem_cache_free" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0x60b4e935, "xt_unregister_match" },
	{ 0x1c5b2327, "kmem_cache_destroy" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0xc12e8a55, "proc_mkdir" },
	{ 0xe6be1c28, "proc_net" },
	{ 0x1b7d4074, "printk" },
	{ 0xfc76e10b, "kmem_cache_create" },
	{ 0x5219501f, "xt_register_match" },
	{ 0x7d11c268, "jiffies" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=x_tables";


MODULE_INFO(srcversion, "DA1DE114C6FB81A6F28B302");
