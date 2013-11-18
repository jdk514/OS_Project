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
	{ 0xd8f153c, "platform_device_put" },
	{ 0xfe839378, "platform_device_add" },
	{ 0x1e43d962, "platform_device_alloc" },
	{ 0x76e04e0, "platform_driver_register" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x11f83bd2, "platform_driver_unregister" },
	{ 0x2c077a33, "platform_device_unregister" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x9e64fbfe, "rtc_cmos_read" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x811afadf, "rtc_lock" },
	{ 0x1cc6719a, "register_reboot_notifier" },
	{ 0x34d6a5a7, "sysfs_create_bin_file" },
	{ 0x692d1a65, "sysfs_create_group" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x1af78947, "set_cpus_allowed" },
	{ 0x1b7d4074, "printk" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x91ed7e93, "sysfs_remove_group" },
	{ 0x373e2705, "sysfs_remove_bin_file" },
	{ 0x3980aac1, "unregister_reboot_notifier" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "0CE87A5DE9A44B6D697456D");
