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
	{ 0x5418d52a, "param_get_ushort" },
	{ 0xc4c5509d, "param_set_ushort" },
	{ 0x68e0d967, "device_create_file" },
	{ 0x86a04728, "hwmon_device_register" },
	{ 0xa1906d09, "i2c_attach_client" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xfe7afd73, "pci_bus_write_config_byte" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0x4c3af445, "__request_region" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xe3432352, "i2c_isa_add_driver" },
	{ 0x6fedff41, "pci_dev_get" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0x129cbf09, "pci_get_device" },
	{ 0x1b7d4074, "printk" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0xd1aaaaa5, "i2c_detach_client" },
	{ 0x15bbc9cd, "hwmon_device_unregister" },
	{ 0xdd334e07, "pci_dev_put" },
	{ 0x58a04395, "i2c_isa_del_driver" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=hwmon,i2c-core,i2c-isa";

MODULE_ALIAS("pci:v00001039d00000008sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "231213915F8449FD6B89850");
