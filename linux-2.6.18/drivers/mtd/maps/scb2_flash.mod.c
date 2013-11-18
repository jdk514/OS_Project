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
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x6d2bcfdd, "add_mtd_device" },
	{ 0x612ced3a, "do_map_probe" },
	{ 0x3762cb6e, "ioremap_nocache" },
	{ 0x1b7d4074, "printk" },
	{ 0x4c3af445, "__request_region" },
	{ 0xfe7afd73, "pci_bus_write_config_byte" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0xdc3eaf70, "iomem_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0xd83d7167, "map_destroy" },
	{ 0xb9203fc0, "del_mtd_device" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=mtdcore,chipreg";

MODULE_ALIAS("pci:v00001166d00000201sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D4A62BF70A76573B0BF0AB2");
