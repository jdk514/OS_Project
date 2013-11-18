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
	{ 0xe6eee95b, "seq_read" },
	{ 0xf9b907c1, "seq_lseek" },
	{ 0x7244ef73, "rtc_interface_register" },
	{ 0xae0fadbe, "rtc_read_alarm" },
	{ 0x669e2d2f, "seq_printf" },
	{ 0x4107f84f, "rtc_read_time" },
	{ 0xdb01fdc3, "single_open" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x3dccf731, "single_release" },
	{ 0x1b7d4074, "printk" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x6c86c620, "class_interface_unregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=rtc-core";


MODULE_INFO(srcversion, "D05DD5CA527904D353BC30A");
