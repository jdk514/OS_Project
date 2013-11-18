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
	{ 0xc220dd00, "seq_release_private" },
	{ 0xe6eee95b, "seq_read" },
	{ 0x72216fa9, "param_get_uint" },
	{ 0x8abac70a, "param_set_uint" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0xa68124fa, "hweight8" },
	{ 0xebb99830, "seq_open" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xc12e8a55, "proc_mkdir" },
	{ 0x5219501f, "xt_register_match" },
	{ 0x1b6314fd, "in_aton" },
	{ 0x8d3894f2, "_ctype" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x669e2d2f, "seq_printf" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0xe6be1c28, "proc_net" },
	{ 0x60b4e935, "xt_unregister_match" },
	{ 0x7d11c268, "jiffies" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=x_tables";


MODULE_INFO(srcversion, "024B03CFC03ECDF048C67F6");
