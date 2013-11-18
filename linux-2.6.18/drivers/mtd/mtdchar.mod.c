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
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x4292364c, "schedule" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x86725e89, "register_mtd_user" },
	{ 0xc83decb4, "class_create" },
	{ 0x1b7d4074, "printk" },
	{ 0x1e8e5fac, "register_chrdev" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xa813c1be, "get_mtd_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x5ba5393e, "put_mtd_device" },
	{ 0xd10fc04d, "class_device_create" },
	{ 0x27514859, "class_device_destroy" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0x93538172, "class_destroy" },
	{ 0x50671762, "unregister_mtd_user" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=mtdcore";


MODULE_INFO(srcversion, "25CAE112906F1E033E1DE1F");
