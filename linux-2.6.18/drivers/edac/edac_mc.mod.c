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
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xadcdf031, "sysdev_class_register" },
	{ 0x7d4a1f83, "kobject_set_name" },
	{ 0xba09992e, "kobject_unregister" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x8706fba7, "call_rcu" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x1139ffc, "max_mapnr" },
	{ 0x7d11c268, "jiffies" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x16b86be, "kunmap_atomic" },
	{ 0xa34eb072, "wait_for_completion" },
	{ 0xa6367e45, "kmap_atomic" },
	{ 0x8d3894f2, "_ctype" },
	{ 0x1b7d4074, "printk" },
	{ 0xb346304, "kthread_stop" },
	{ 0x1075bf0, "panic" },
	{ 0x1926e344, "sysdev_class_unregister" },
	{ 0x4149cb93, "sysfs_remove_link" },
	{ 0xad33325b, "zone_table" },
	{ 0x2ef69a16, "sysfs_create_link" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0x59981248, "pci_bus_read_config_dword" },
	{ 0x35c2ba9e, "refrigerator" },
	{ 0x6dc76950, "sysfs_create_file" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd2965f6f, "kthread_should_stop" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x97e89e2c, "kthread_create" },
	{ 0x129cbf09, "pci_get_device" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x7e0221e4, "complete" },
	{ 0x25da070, "snprintf" },
	{ 0x96b27088, "__down_failed" },
	{ 0x5f5de934, "kobject_register" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "2A784B0C383DABA471B9393");
