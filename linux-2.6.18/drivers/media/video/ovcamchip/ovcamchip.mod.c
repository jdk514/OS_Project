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
	{ 0xa1906d09, "i2c_attach_client" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb4bd5035, "i2c_smbus_read_byte_data" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xd1aaaaa5, "i2c_detach_client" },
	{ 0xaa5c63a9, "i2c_del_driver" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xf88325a2, "i2c_smbus_write_byte_data" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x1b7d4074, "printk" },
	{ 0x8e30cd1b, "i2c_register_driver" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x37a0cba, "kfree" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=i2c-core";


MODULE_INFO(srcversion, "85A6FC9D7BC90A7738D97E5");
