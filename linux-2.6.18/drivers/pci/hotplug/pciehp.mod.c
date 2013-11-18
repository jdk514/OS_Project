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
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x20c8fc33, "pci_osc_control_set" },
	{ 0x7f8723bd, "pcie_mch_quirk" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x4827a016, "del_timer" },
	{ 0x6bc7760e, "pci_get_slot" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x77c65c8c, "pci_bus_assign_resources" },
	{ 0x7d11c268, "jiffies" },
	{ 0x23d283e, "pci_hp_deregister" },
	{ 0xda4008e6, "cond_resched" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x5568be43, "lock_kernel" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0xa09539e, "pci_bus_write_config_dword" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x3025fb04, "pci_bus_add_devices" },
	{ 0x625acc81, "__down_failed_interruptible" },
	{ 0xe3d020d3, "pci_find_bus" },
	{ 0x2ce48be6, "pci_scan_slot" },
	{ 0x20645ff6, "pci_find_capability" },
	{ 0x5dfe8f1a, "unlock_kernel" },
	{ 0x4b4fb743, "pci_hp_register" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xb8b4a2c7, "pci_enable_bridges" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0x59981248, "pci_bus_read_config_dword" },
	{ 0xc03bd76a, "pcie_port_service_unregister" },
	{ 0xcf732416, "pci_scan_bridge" },
	{ 0x26e96637, "request_irq" },
	{ 0xbf7e58f6, "pci_hp_change_slot_info" },
	{ 0xca6c95f8, "acpi_get_name" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x771cdb9, "pcie_port_service_register" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xaeea0069, "acpi_run_oshp" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xfe7afd73, "pci_bus_write_config_byte" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69c560c8, "pci_disable_msi" },
	{ 0xfb0443fb, "acpi_get_parent" },
	{ 0x7e9ebb05, "kernel_thread" },
	{ 0x1ad3b491, "acpi_root_bridge" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xdd334e07, "pci_dev_put" },
	{ 0x1f8ec1b3, "acpi_get_pci_rootbridge_handle" },
	{ 0x25da070, "snprintf" },
	{ 0xedd457ec, "pci_fixup_device" },
	{ 0x96b27088, "__down_failed" },
	{ 0xaeb96d3c, "pci_remove_bus_device" },
	{ 0xdc43a9c8, "daemonize" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x6d93b442, "pci_bus_size_bridges" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "AB62A2B102C9F13E1950339");
