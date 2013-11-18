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
	{ 0x9d489c00, "bus_register" },
	{ 0x845b7a76, "device_remove_file" },
	{ 0x85898a89, "class_register" },
	{ 0x4d101f5f, "driver_register" },
	{ 0x5253a3a4, "class_device_unregister" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xa34eb072, "wait_for_completion" },
	{ 0xcdfb7700, "device_register" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x93618160, "class_unregister" },
	{ 0x3e158c0e, "driver_unregister" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x6e3baace, "bus_unregister" },
	{ 0xa7409aaf, "idr_remove" },
	{ 0x68e0d967, "device_create_file" },
	{ 0x52a7207f, "idr_pre_get" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x3c2b8737, "class_device_register" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0xc2ced370, "platform_bus" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x761ca99d, "device_unregister" },
	{ 0x7e0221e4, "complete" },
	{ 0x25da070, "snprintf" },
	{ 0xf6a98ae7, "idr_find" },
	{ 0x2d29e50a, "idr_get_new" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "2128BBCDB5EA25585D5BE1D");
