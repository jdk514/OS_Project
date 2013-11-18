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
	{ 0x1d676acf, "boot_tvec_bases" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0xaa136450, "param_get_charp" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x76e04e0, "platform_driver_register" },
	{ 0xd8f153c, "platform_device_put" },
	{ 0xfe839378, "platform_device_add" },
	{ 0x1e43d962, "platform_device_alloc" },
	{ 0x9eac042a, "__ioremap" },
	{ 0xf5633477, "dmi_check_system" },
	{ 0xedc03953, "iounmap" },
	{ 0x11f83bd2, "platform_driver_unregister" },
	{ 0x2c077a33, "platform_device_unregister" },
	{ 0x4330f0ef, "input_free_device" },
	{ 0x380db0a0, "input_register_device" },
	{ 0xc59d2532, "input_allocate_device" },
	{ 0x963f24f1, "input_unregister_device" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x1b7d4074, "printk" },
	{ 0xe7c21ffd, "input_event" },
	{ 0x9e64fbfe, "rtc_cmos_read" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "5331F699E4298C9A97A9013");
