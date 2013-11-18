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
	{ 0x6a57c543, "input_open_device" },
	{ 0x7d11c268, "jiffies" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x4292364c, "schedule" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x2ef69a16, "sysfs_create_link" },
	{ 0xd10fc04d, "class_device_create" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x1b7d4074, "printk" },
	{ 0x770be114, "input_register_handler" },
	{ 0x14126ae8, "kill_fasync" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x27514859, "class_device_destroy" },
	{ 0x4149cb93, "sysfs_remove_link" },
	{ 0x620d1a11, "input_class" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0xed58416d, "input_close_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x54ee23d3, "fasync_helper" },
	{ 0x1cdfe237, "input_unregister_handler" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*0,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*8,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*6,*m*l*s*f*w*");

MODULE_INFO(srcversion, "750C0C08E65178E6C4B5E74");
