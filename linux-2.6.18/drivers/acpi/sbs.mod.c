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
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x1b7d4074, "printk" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x1807e38b, "acpi_evaluate_integer" },
	{ 0xa0c3869, "acpi_get_ec_hc" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x76038bb4, "acpi_bus_register_driver" },
	{ 0x2ae73185, "acpi_lock_battery_dir" },
	{ 0x40d18d8e, "acpi_lock_ac_dir" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0xc12e8a55, "proc_mkdir" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x669e2d2f, "seq_printf" },
	{ 0x96b27088, "__down_failed" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x73022589, "acpi_bus_generate_event" },
	{ 0xdb01fdc3, "single_open" },
	{ 0xad13c689, "acpi_os_execute" },
	{ 0xf9a482f9, "msleep" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9ab2eef, "acpi_os_wait_events_complete" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0x7ac7c0fb, "acpi_unlock_battery_dir" },
	{ 0xb77b9673, "acpi_unlock_ac_dir" },
	{ 0x843b114, "acpi_bus_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=i2c_ec";


MODULE_INFO(srcversion, "F83704BCE86560688E6FB97");
