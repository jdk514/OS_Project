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
	{ 0x8c0be9b4, "queue_work" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x8e30cd1b, "i2c_register_driver" },
	{ 0xf88325a2, "i2c_smbus_write_byte_data" },
	{ 0xa1906d09, "i2c_attach_client" },
	{ 0xf2766228, "__create_workqueue" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x1b7d4074, "printk" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0xb4bd5035, "i2c_smbus_read_byte_data" },
	{ 0x82f49e12, "i2c_probe" },
	{ 0x31153eb8, "destroy_workqueue" },
	{ 0x37a0cba, "kfree" },
	{ 0xd1aaaaa5, "i2c_detach_client" },
	{ 0xaa5c63a9, "i2c_del_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=i2c-core";


MODULE_INFO(srcversion, "3099048044E002D83915D47");
