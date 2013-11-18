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
	{ 0x96befe4d, "no_llseek" },
	{ 0x7d11c268, "jiffies" },
	{ 0x33101736, "parport_put_port" },
	{ 0xa7d6af18, "parport_register_device" },
	{ 0xc6f72b15, "parport_find_number" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xb7e77072, "parport_read" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x3bfa71f3, "parport_write" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x8b131447, "parport_set_timeout" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xe676d461, "parport_register_driver" },
	{ 0xc83decb4, "class_create" },
	{ 0x1e8e5fac, "register_chrdev" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xe38e0a9d, "parport_negotiate" },
	{ 0x37a0cba, "kfree" },
	{ 0xea1ea44c, "parport_unregister_device" },
	{ 0x1b7d4074, "printk" },
	{ 0x20ca67eb, "parport_release" },
	{ 0xe33d9502, "parport_claim_or_block" },
	{ 0xd10fc04d, "class_device_create" },
	{ 0x27514859, "class_device_destroy" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0x93538172, "class_destroy" },
	{ 0x6da9db6f, "parport_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=parport";


MODULE_INFO(srcversion, "6C27A3CD65BCDD3BF658444");
