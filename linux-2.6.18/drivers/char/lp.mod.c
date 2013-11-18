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
	{ 0xaa136450, "param_get_charp" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x4292364c, "schedule" },
	{ 0x37a0cba, "kfree" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0xb7e77072, "parport_read" },
	{ 0x625acc81, "__down_failed_interruptible" },
	{ 0xda4008e6, "cond_resched" },
	{ 0xe676d461, "parport_register_driver" },
	{ 0xc83decb4, "class_create" },
	{ 0x1e8e5fac, "register_chrdev" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x7d11c268, "jiffies" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xc1edf4ae, "register_console" },
	{ 0x1b7d4074, "printk" },
	{ 0xd10fc04d, "class_device_create" },
	{ 0xa7d6af18, "parport_register_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe33d9502, "parport_claim_or_block" },
	{ 0x20ca67eb, "parport_release" },
	{ 0x3bfa71f3, "parport_write" },
	{ 0x8b131447, "parport_set_timeout" },
	{ 0xef276433, "parport_claim" },
	{ 0xe38e0a9d, "parport_negotiate" },
	{ 0x93538172, "class_destroy" },
	{ 0x27514859, "class_device_destroy" },
	{ 0xea1ea44c, "parport_unregister_device" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0x6da9db6f, "parport_unregister_driver" },
	{ 0x8264068, "unregister_console" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=parport";


MODULE_INFO(srcversion, "3B97CBF6A63877A4E026DA9");
