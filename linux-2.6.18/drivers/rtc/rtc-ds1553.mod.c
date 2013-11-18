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
	{ 0x34d6a5a7, "sysfs_create_bin_file" },
	{ 0xf81b1471, "rtc_device_register" },
	{ 0x26e96637, "request_irq" },
	{ 0xc137a082, "platform_get_irq" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x4c3af445, "__request_region" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x91cc90f9, "platform_get_resource" },
	{ 0xabd0c91c, "rtc_time_to_tm" },
	{ 0x1b7d4074, "printk" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7d11c268, "jiffies" },
	{ 0x6937771d, "rtc_update_irq" },
	{ 0x76e04e0, "platform_driver_register" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0xdc3eaf70, "iomem_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x1a28d5d6, "rtc_device_unregister" },
	{ 0x373e2705, "sysfs_remove_bin_file" },
	{ 0x11f83bd2, "platform_driver_unregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=rtc-core,rtc-lib";


MODULE_INFO(srcversion, "7F4F36AC646A128335C91E6");
