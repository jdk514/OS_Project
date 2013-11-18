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
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0xe7c21ffd, "input_event" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x2cd3086, "__down_failed_trylock" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x380db0a0, "input_register_device" },
	{ 0xc59d2532, "input_allocate_device" },
	{ 0x692d1a65, "sysfs_create_group" },
	{ 0x84e549a0, "platform_device_register_simple" },
	{ 0x76e04e0, "platform_driver_register" },
	{ 0x4c3af445, "__request_region" },
	{ 0xf5633477, "dmi_check_system" },
	{ 0x2bc95bd4, "memset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x96b27088, "__down_failed" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x859204af, "sscanf" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1b7d4074, "printk" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0x11f83bd2, "platform_driver_unregister" },
	{ 0x2c077a33, "platform_device_unregister" },
	{ 0x91ed7e93, "sysfs_remove_group" },
	{ 0x963f24f1, "input_unregister_device" },
	{ 0xc659d5a, "del_timer_sync" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "652B100E7F4EE8803131469");
