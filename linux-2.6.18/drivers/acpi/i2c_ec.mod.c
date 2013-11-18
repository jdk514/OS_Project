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
	{ 0x76038bb4, "acpi_bus_register_driver" },
	{ 0xba2d8594, "ec_read" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1807e38b, "acpi_evaluate_integer" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x843b114, "acpi_bus_unregister_driver" },
	{ 0x17d9ce1a, "i2c_add_adapter" },
	{ 0x1b7d4074, "printk" },
	{ 0xa4d29bf3, "i2c_del_adapter" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x876dafc3, "ec_write" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=i2c-core";


MODULE_INFO(srcversion, "844C87139477DD9D92E55CF");
