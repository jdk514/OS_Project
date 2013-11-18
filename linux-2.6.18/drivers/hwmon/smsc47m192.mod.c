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
	{ 0x6483655c, "param_get_short" },
	{ 0x40046949, "param_set_short" },
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x8e30cd1b, "i2c_register_driver" },
	{ 0x68e0d967, "device_create_file" },
	{ 0x86a04728, "hwmon_device_register" },
	{ 0xf88325a2, "i2c_smbus_write_byte_data" },
	{ 0xa1906d09, "i2c_attach_client" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xef1c781c, "vid_which_vrm" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x1b7d4074, "printk" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x903c239, "vid_from_reg" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0xb4bd5035, "i2c_smbus_read_byte_data" },
	{ 0x7d11c268, "jiffies" },
	{ 0x96b27088, "__down_failed" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x82f49e12, "i2c_probe" },
	{ 0x37a0cba, "kfree" },
	{ 0xd1aaaaa5, "i2c_detach_client" },
	{ 0x15bbc9cd, "hwmon_device_unregister" },
	{ 0xaa5c63a9, "i2c_del_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=i2c-core,hwmon,hwmon-vid";


MODULE_INFO(srcversion, "D5E38577275C72D1BFE9184");
