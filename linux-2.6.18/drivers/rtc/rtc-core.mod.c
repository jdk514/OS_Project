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
	{ 0xabd0c91c, "rtc_time_to_tm" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x5253a3a4, "class_device_unregister" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x4ff943ae, "mutex_lock_interruptible" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x4b671d44, "class_interface_register" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xc83decb4, "class_create" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xa7409aaf, "idr_remove" },
	{ 0x52a7207f, "idr_pre_get" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x3c2b8737, "class_device_register" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0x37a0cba, "kfree" },
	{ 0x93538172, "class_destroy" },
	{ 0x14126ae8, "kill_fasync" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x25da070, "snprintf" },
	{ 0x96b27088, "__down_failed" },
	{ 0x2d29e50a, "idr_get_new" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=rtc-lib";


MODULE_INFO(srcversion, "9214125D21B74435A27D502");
