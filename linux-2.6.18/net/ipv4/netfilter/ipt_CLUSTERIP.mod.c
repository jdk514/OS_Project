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
	{ 0xe6eee95b, "seq_read" },
	{ 0xf9b907c1, "seq_lseek" },
	{ 0xe714c8c4, "dev_mc_add" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xbf8e93eb, "dev_get_by_name" },
	{ 0x8bf46c54, "_read_unlock_bh" },
	{ 0x21968b7f, "_read_lock_bh" },
	{ 0x48a40a1f, "dev_mc_delete" },
	{ 0xcc4c11a9, "_write_unlock_bh" },
	{ 0x93ba42f1, "_write_lock_bh" },
	{ 0x5a1d6f47, "seq_release" },
	{ 0xebb99830, "seq_open" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xcb6beb40, "hweight32" },
	{ 0xc12e8a55, "proc_mkdir" },
	{ 0xe6be1c28, "proc_net" },
	{ 0xde81efb5, "nf_register_hook" },
	{ 0xfcf2e40e, "xt_register_target" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x669e2d2f, "seq_printf" },
	{ 0x78fa5b46, "seq_putc" },
	{ 0x37a0cba, "kfree" },
	{ 0x786fab6c, "xt_unregister_target" },
	{ 0x91c8b5df, "nf_unregister_hook" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0x1b7d4074, "printk" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=x_tables";


MODULE_INFO(srcversion, "2EDBE5938E9EA74BCAB2F8E");
