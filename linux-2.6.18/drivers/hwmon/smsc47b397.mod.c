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
	{ 0xe3432352, "i2c_isa_add_driver" },
	{ 0x68e0d967, "device_create_file" },
	{ 0x86a04728, "hwmon_device_register" },
	{ 0xa1906d09, "i2c_attach_client" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x1b7d4074, "printk" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x4c3af445, "__request_region" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0xd1aaaaa5, "i2c_detach_client" },
	{ 0x15bbc9cd, "hwmon_device_unregister" },
	{ 0x58a04395, "i2c_isa_del_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=i2c-isa,hwmon,i2c-core";


MODULE_INFO(srcversion, "36F33E4DC333B37D93B649D");