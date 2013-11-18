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
	{ 0x845b7a76, "device_remove_file" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xcff53400, "kref_put" },
	{ 0x4d101f5f, "driver_register" },
	{ 0x61bed476, "up_read" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0xebd6dc3d, "platform_bus_type" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xd1d8adad, "atomic_notifier_chain_unregister" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0x1985af2a, "down_read" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0xc12e8a55, "proc_mkdir" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x5152e605, "memcmp" },
	{ 0x1e43d962, "platform_device_alloc" },
	{ 0x3e158c0e, "driver_unregister" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x2c077a33, "platform_device_unregister" },
	{ 0x4149cb93, "sysfs_remove_link" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xde0c05c3, "up_write" },
	{ 0xbca92367, "down_write" },
	{ 0x68e0d967, "device_create_file" },
	{ 0x2ef69a16, "sysfs_create_link" },
	{ 0xc0961533, "driver_find_device" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xbed4bf59, "platform_device_register" },
	{ 0xede74815, "atomic_notifier_chain_register" },
	{ 0x4292364c, "schedule" },
	{ 0x4a8702be, "panic_notifier_list" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0xd3460f31, "proc_root" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x3ae831b6, "kref_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0x8a1203a9, "kref_get" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x25da070, "snprintf" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C442D80013666FFD9618B37");
