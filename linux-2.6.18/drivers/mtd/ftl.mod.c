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
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x8d96fa78, "register_mtd_blktrans" },
	{ 0x2dd62515, "deregister_mtd_blktrans" },
	{ 0xf93fe8da, "add_mtd_blktrans_dev" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x578a7617, "del_mtd_blktrans_dev" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x7d11c268, "jiffies" },
	{ 0x2e60bace, "memcpy" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x37a0cba, "kfree" },
	{ 0x1b7d4074, "printk" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=mtd_blkdevs";


MODULE_INFO(srcversion, "7D598F7F1B8492A54FCD41B");
