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
	{ 0x76038bb4, "acpi_bus_register_driver" },
	{ 0xba2d8594, "ec_read" },
	{ 0x4c3af445, "__request_region" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0xf9a482f9, "msleep" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x66eaa8a9, "param_set_ulong" },
	{ 0x7c775173, "__kfifo_put" },
	{ 0x73022589, "acpi_bus_generate_event" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x843b114, "acpi_bus_unregister_driver" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xda4008e6, "cond_resched" },
	{ 0xe7c21ffd, "input_event" },
	{ 0x1ef3eb01, "misc_register" },
	{ 0xf5633477, "dmi_check_system" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0x5cc5b658, "kfifo_alloc" },
	{ 0x28a54161, "current_fs_time" },
	{ 0x1b7d4074, "printk" },
	{ 0x1e43d962, "platform_device_alloc" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x54ee23d3, "fasync_helper" },
	{ 0xfe839378, "platform_device_add" },
	{ 0xa09539e, "pci_bus_write_config_dword" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x7527e0d, "__kfifo_get" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x2c077a33, "platform_device_unregister" },
	{ 0x76e04e0, "platform_driver_register" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x59981248, "pci_bus_read_config_dword" },
	{ 0x380db0a0, "input_register_device" },
	{ 0x26e96637, "request_irq" },
	{ 0x4292364c, "schedule" },
	{ 0x4330f0ef, "input_free_device" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0x7ded8240, "param_get_ulong" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xfe7afd73, "pci_bus_write_config_byte" },
	{ 0x963f24f1, "input_unregister_device" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0x14126ae8, "kill_fasync" },
	{ 0x129cbf09, "pci_get_device" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0xdd334e07, "pci_dev_put" },
	{ 0x11f83bd2, "platform_driver_unregister" },
	{ 0x876dafc3, "ec_write" },
	{ 0x96b27088, "__down_failed" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x25dd4bad, "misc_deregister" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xd8f153c, "platform_device_put" },
	{ 0x8a64e7c, "kfifo_free" },
	{ 0xc59d2532, "input_allocate_device" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "34F283EC1D4A49AB1766D75");
