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
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x17d9ce1a, "i2c_add_adapter" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xdd334e07, "pci_dev_put" },
	{ 0x4c3af445, "__request_region" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0xfe7afd73, "pci_bus_write_config_byte" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0x129cbf09, "pci_get_device" },
	{ 0x1b7d4074, "printk" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0xa4d29bf3, "i2c_del_adapter" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=i2c-core";

MODULE_ALIAS("pci:v00001039d00000008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00000018sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "85D59E95E77572AFD8598D1");
