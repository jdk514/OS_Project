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
	{ 0xf3b39202, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd16ac615, "__get_user_1" },
	{ 0xaf5f9c5f, "nonseekable_open" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x4c3af445, "__request_region" },
	{ 0x1e8e5fac, "register_chrdev" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x4827a016, "del_timer" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x1b7d4074, "printk" },
	{ 0xba497f13, "loops_per_jiffy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4AD684E1DB7A13D7DDD2EC6");
