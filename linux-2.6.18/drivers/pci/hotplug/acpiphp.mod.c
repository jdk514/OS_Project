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
	{ 0x89fbd001, "acpi_get_hp_params_from_firmware" },
	{ 0x636a5691, "acpi_register_ioapic" },
	{ 0xa0e2231b, "pci_release_region" },
	{ 0x2bb55d6e, "acpi_remove_notify_handler" },
	{ 0x1807e38b, "acpi_evaluate_integer" },
	{ 0xd9091363, "acpi_install_notify_handler" },
	{ 0x6bc7760e, "pci_get_slot" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x459b0928, "acpi_bus_get_device" },
	{ 0x6fedff41, "pci_dev_get" },
	{ 0xd0470c98, "acpi_evaluate_object" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0x77c65c8c, "pci_bus_assign_resources" },
	{ 0x23d283e, "pci_hp_deregister" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xbd506a46, "unregister_hotplug_dock_device" },
	{ 0xf400bf0c, "acpi_bus_add" },
	{ 0x318920b1, "register_dock_notifier" },
	{ 0x8f15ecaa, "acpi_bus_start" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x100c48a2, "unregister_dock_notifier" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0xa09539e, "pci_bus_write_config_dword" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x3025fb04, "pci_bus_add_devices" },
	{ 0xe3d020d3, "pci_find_bus" },
	{ 0x2611fbee, "register_hotplug_dock_device" },
	{ 0x2ce48be6, "pci_scan_slot" },
	{ 0x2bfeb410, "acpi_get_handle" },
	{ 0x141f4265, "acpi_bus_trim" },
	{ 0x4b4fb743, "pci_hp_register" },
	{ 0xb8b4a2c7, "pci_enable_bridges" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0x59981248, "pci_bus_read_config_dword" },
	{ 0xcf732416, "pci_scan_bridge" },
	{ 0x58c75d9, "acpi_get_pci_id" },
	{ 0xca6c95f8, "acpi_get_name" },
	{ 0xd1472061, "acpi_pci_register_driver" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xfe7afd73, "pci_bus_write_config_byte" },
	{ 0x37a0cba, "kfree" },
	{ 0xfb0443fb, "acpi_get_parent" },
	{ 0x1ad3b491, "acpi_root_bridge" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xdd334e07, "pci_dev_put" },
	{ 0x25da070, "snprintf" },
	{ 0xf8cebe4f, "pci_bus_max_busnr" },
	{ 0x19d5d20a, "acpi_walk_namespace" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xcc6ab305, "is_dock_device" },
	{ 0x2822ea4b, "pci_request_region" },
	{ 0xaeb96d3c, "pci_remove_bus_device" },
	{ 0x6d93b442, "pci_bus_size_bridges" },
	{ 0x43385ad9, "acpi_pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "AD1AEABB67DD4BF8E7C5194");
