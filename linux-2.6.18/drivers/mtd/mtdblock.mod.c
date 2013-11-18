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
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x8d96fa78, "register_mtd_blktrans" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x2fd1d81c, "vfree" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x4292364c, "schedule" },
	{ 0x1b7d4074, "printk" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xf93fe8da, "add_mtd_blktrans_dev" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x37a0cba, "kfree" },
	{ 0x578a7617, "del_mtd_blktrans_dev" },
	{ 0x2dd62515, "deregister_mtd_blktrans" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=mtd_blkdevs";


MODULE_INFO(srcversion, "CB08F5D67A8B40635146F37");
