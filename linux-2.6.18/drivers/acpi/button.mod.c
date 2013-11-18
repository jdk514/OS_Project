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
	{ 0xf47d47e0, "acpi_enable_gpe" },
	{ 0xa3bbcd80, "acpi_set_gpe_type" },
	{ 0xd9091363, "acpi_install_notify_handler" },
	{ 0x5ac376a5, "acpi_install_fixed_event_handler" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x1b7d4074, "printk" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x76038bb4, "acpi_bus_register_driver" },
	{ 0xc12e8a55, "proc_mkdir" },
	{ 0x669e2d2f, "seq_printf" },
	{ 0x1807e38b, "acpi_evaluate_integer" },
	{ 0xdb01fdc3, "single_open" },
	{ 0x73022589, "acpi_bus_generate_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x2bb55d6e, "acpi_remove_notify_handler" },
	{ 0x2005e68a, "acpi_remove_fixed_event_handler" },
	{ 0x8aafb3c, "acpi_root_dir" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0x843b114, "acpi_bus_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1DE14683A37A03738CB92E9");
