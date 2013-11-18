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
	{ 0xcc4c11a9, "_write_unlock_bh" },
	{ 0x332eb002, "__next_cpu" },
	{ 0xebb99830, "seq_open" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x669e2d2f, "seq_printf" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x2fd1d81c, "vfree" },
	{ 0xe6eee95b, "seq_read" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xe6be1c28, "proc_net" },
	{ 0x93ba42f1, "_write_lock_bh" },
	{ 0x4ff943ae, "mutex_lock_interruptible" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xf4a91d48, "__first_cpu" },
	{ 0x948cde9, "num_physpages" },
	{ 0x5dfd3f0d, "cpu_possible_map" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xf9b907c1, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x98adfde2, "request_module" },
	{ 0x5a1d6f47, "seq_release" },
	{ 0x23fd3028, "vmalloc_node" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1C199D8C21BCE35FC1F9EB9");
