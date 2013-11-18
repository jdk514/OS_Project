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
	{ 0x4246221a, "genphy_read_status" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xe1a5f738, "phy_driver_unregister" },
	{ 0x6fe506b7, "phy_device_create" },
	{ 0x598092c, "device_bind_driver" },
	{ 0xcdfb7700, "device_register" },
	{ 0x1b7d4074, "printk" },
	{ 0xc8eab7f6, "phy_driver_register" },
	{ 0xde0c05c3, "up_write" },
	{ 0xbca92367, "down_write" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x761ca99d, "device_unregister" },
	{ 0x25da070, "snprintf" },
	{ 0x1d1d986d, "mdio_bus_type" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=libphy";


MODULE_INFO(srcversion, "AB3614E42E544FC959B751D");
