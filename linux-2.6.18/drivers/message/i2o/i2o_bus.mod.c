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
	{ 0xa3baa26e, "i2o_driver_unregister" },
	{ 0x1e40d4fc, "i2o_driver_register" },
	{ 0x1b7d4074, "printk" },
	{ 0x68e0d967, "device_create_file" },
	{ 0xfce62e60, "i2o_msg_post_wait_mem" },
	{ 0xa9615177, "put_device" },
	{ 0x7de6dcd6, "get_device" },
	{ 0xf584b61f, "i2o_msg_get_wait" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=i2o_core";


MODULE_INFO(srcversion, "BFB8886A93BB36FE8DB6D25");
