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
	{ 0xe8097be1, "kobject_put" },
	{ 0x6572d100, "kobject_get" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x2c2512ea, "get_zeroed_page" },
	{ 0x85898a89, "class_register" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0x7d4a1f83, "kobject_set_name" },
	{ 0xba09992e, "kobject_unregister" },
	{ 0x5253a3a4, "class_device_unregister" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x91ed7e93, "sysfs_remove_group" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x2bc95bd4, "memset" },
	{ 0x1b7d4074, "printk" },
	{ 0x859204af, "sscanf" },
	{ 0xb346304, "kthread_stop" },
	{ 0x692d1a65, "sysfs_create_group" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0x5152e605, "memcmp" },
	{ 0x93618160, "class_unregister" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x6180e3ac, "class_device_create_file" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x553d0022, "_read_unlock_irqrestore" },
	{ 0x496a442, "_read_lock_irqsave" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x4292364c, "schedule" },
	{ 0x50bc9c7c, "_write_lock_irq" },
	{ 0x3c2b8737, "class_device_register" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x9941ccb8, "free_pages" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xd2965f6f, "kthread_should_stop" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x97e89e2c, "kthread_create" },
	{ 0x2e60bace, "memcpy" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x25da070, "snprintf" },
	{ 0x5f5de934, "kobject_register" },
	{ 0x45e87ae6, "add_uevent_var" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "EFC33E22916E5965C4D4B51");
