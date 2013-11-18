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
	{ 0x96f929e9, "acpi_get_object_info" },
	{ 0x34d6a5a7, "sysfs_create_bin_file" },
	{ 0xd9091363, "acpi_install_notify_handler" },
	{ 0x8908154c, "acpiphp_register_attention" },
	{ 0x459b0928, "acpi_bus_get_device" },
	{ 0x19d5d20a, "acpi_walk_namespace" },
	{ 0x73022589, "acpi_bus_generate_event" },
	{ 0x1807e38b, "acpi_evaluate_integer" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x5152e605, "memcmp" },
	{ 0x37a0cba, "kfree" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xd0470c98, "acpi_evaluate_object" },
	{ 0x373e2705, "sysfs_remove_bin_file" },
	{ 0xc97ae59d, "pci_hotplug_slots_subsys" },
	{ 0x2bb55d6e, "acpi_remove_notify_handler" },
	{ 0xcae2e887, "acpiphp_unregister_attention" },
	{ 0x1b7d4074, "printk" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=acpiphp";


MODULE_INFO(srcversion, "15328DA36B8F93CECA8E276");
