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
	{ 0x7244ef73, "rtc_interface_register" },
	{ 0x692d1a65, "sysfs_create_group" },
	{ 0x1b7d4074, "printk" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xb98a0185, "rtc_tm_to_time" },
	{ 0x4107f84f, "rtc_read_time" },
	{ 0x91ed7e93, "sysfs_remove_group" },
	{ 0x6c86c620, "class_interface_unregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=rtc-core,rtc-lib";


MODULE_INFO(srcversion, "2C3ABE0A6C27A60AB4E34E8");
