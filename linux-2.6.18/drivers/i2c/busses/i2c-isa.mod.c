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
	{ 0x845b7a76, "device_remove_file" },
	{ 0x4d101f5f, "driver_register" },
	{ 0x5253a3a4, "class_device_unregister" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x121ba35b, "i2c_adapter_class" },
	{ 0xa34eb072, "wait_for_completion" },
	{ 0xcdfb7700, "device_register" },
	{ 0x5bd082e7, "i2c_bus_type" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x3e158c0e, "driver_unregister" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xe654117d, "i2c_adapter_driver" },
	{ 0x3d024edf, "i2c_adapter_dev_release" },
	{ 0x68e0d967, "device_create_file" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x3c2b8737, "class_device_register" },
	{ 0xc2ced370, "platform_bus" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x761ca99d, "device_unregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=i2c-core";


MODULE_INFO(srcversion, "CB7D040087ECE7F1371AA9D");
