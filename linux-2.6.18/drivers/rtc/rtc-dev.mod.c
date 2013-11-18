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
	{ 0xd10fc04d, "class_device_create" },
	{ 0x229fb2ef, "cdev_add" },
	{ 0xc171912, "cdev_init" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x4292364c, "schedule" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0xc6183807, "mutex_trylock" },
	{ 0x7244ef73, "rtc_interface_register" },
	{ 0x1b7d4074, "printk" },
	{ 0x29537c9e, "alloc_chrdev_region" },
	{ 0xc83decb4, "class_create" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xfe6d131f, "rtc_set_alarm" },
	{ 0x25fb6cca, "rtc_set_time" },
	{ 0x4107f84f, "rtc_read_time" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0xae0fadbe, "rtc_read_alarm" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x7dceceac, "capable" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x54ee23d3, "fasync_helper" },
	{ 0xdc3debb9, "cdev_del" },
	{ 0x5253a3a4, "class_device_unregister" },
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0x93538172, "class_destroy" },
	{ 0x6c86c620, "class_interface_unregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=rtc-core";


MODULE_INFO(srcversion, "B32A1F18920693FF26B97CD");
