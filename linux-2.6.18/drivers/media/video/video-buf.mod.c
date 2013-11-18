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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x61bed476, "up_read" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x7d4e29ae, "page_address" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1985af2a, "down_read" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xd4abb36c, "__alloc_pages" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x8a9eec75, "contig_page_data" },
	{ 0xad33325b, "zone_table" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xddbcef4b, "get_user_pages" },
	{ 0x4292364c, "schedule" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x946be58e, "put_page" },
	{ 0x96f21b16, "vmalloc_to_page" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "9B3F3CBB848369BD2E7ACF4");
