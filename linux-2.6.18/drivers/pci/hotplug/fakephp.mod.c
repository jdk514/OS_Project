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
	{ 0x129cbf09, "pci_get_device" },
	{ 0x82c3213, "pci_root_buses" },
	{ 0xa5a028c4, "pci_bus_add_device" },
	{ 0xd1009062, "pci_scan_single_device" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0x6fedff41, "pci_dev_get" },
	{ 0x4b4fb743, "pci_hp_register" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xaeb96d3c, "pci_remove_bus_device" },
	{ 0x3da7382a, "pci_find_slot" },
	{ 0xdd334e07, "pci_dev_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x23d283e, "pci_hp_deregister" },
	{ 0x1b7d4074, "printk" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "384FDB9EAE1BE6689F69D64");
