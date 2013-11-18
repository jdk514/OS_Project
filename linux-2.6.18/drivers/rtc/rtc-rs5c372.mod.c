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
	{ 0x8e30cd1b, "i2c_register_driver" },
	{ 0x68e0d967, "device_create_file" },
	{ 0xf81b1471, "rtc_device_register" },
	{ 0xa1906d09, "i2c_attach_client" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xa9a2b1a0, "i2c_master_send" },
	{ 0x669e2d2f, "seq_printf" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x1b7d4074, "printk" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x5cca4df3, "i2c_transfer" },
	{ 0x82f49e12, "i2c_probe" },
	{ 0x37a0cba, "kfree" },
	{ 0xd1aaaaa5, "i2c_detach_client" },
	{ 0x1a28d5d6, "rtc_device_unregister" },
	{ 0xaa5c63a9, "i2c_del_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=i2c-core,rtc-core";


MODULE_INFO(srcversion, "8D77B8026D1C680A05EF848");
