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
	{ 0x3dccf731, "single_release" },
	{ 0xe6eee95b, "seq_read" },
	{ 0xf9b907c1, "seq_lseek" },
	{ 0x1b7d4074, "printk" },
	{ 0xd9091363, "acpi_install_notify_handler" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0xc12e8a55, "proc_mkdir" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x76038bb4, "acpi_bus_register_driver" },
	{ 0x2ae73185, "acpi_lock_battery_dir" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x669e2d2f, "seq_printf" },
	{ 0xdb01fdc3, "single_open" },
	{ 0x73022589, "acpi_bus_generate_event" },
	{ 0x2bfeb410, "acpi_get_handle" },
	{ 0x99ab50e1, "acpi_bus_get_status" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xe93cc1b3, "acpi_extract_package" },
	{ 0xc9fd878f, "acpi_ut_exception" },
	{ 0xd0470c98, "acpi_evaluate_object" },
	{ 0x37a0cba, "kfree" },
	{ 0x2bb55d6e, "acpi_remove_notify_handler" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0x7ac7c0fb, "acpi_unlock_battery_dir" },
	{ 0x843b114, "acpi_bus_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "A8C54309DE899B1E57CC838");
