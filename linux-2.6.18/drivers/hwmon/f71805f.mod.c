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
	{ 0x68e0d967, "device_create_file" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x86a04728, "hwmon_device_register" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x91cc90f9, "platform_get_resource" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0xd8f153c, "platform_device_put" },
	{ 0xfe839378, "platform_device_add" },
	{ 0x70a230d7, "platform_device_add_resources" },
	{ 0x1e43d962, "platform_device_alloc" },
	{ 0x76e04e0, "platform_driver_register" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x1b7d4074, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x15bbc9cd, "hwmon_device_unregister" },
	{ 0x11f83bd2, "platform_driver_unregister" },
	{ 0x2c077a33, "platform_device_unregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=hwmon";


MODULE_INFO(srcversion, "39F89E906FC2C38397BC8F6");
