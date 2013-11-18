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
	{ 0x9d489c00, "bus_register" },
	{ 0xdb5ea3f9, "module_refcount" },
	{ 0x4d101f5f, "driver_register" },
	{ 0x4827a016, "del_timer" },
	{ 0xaa6d7a1e, "device_release_driver" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x242c2398, "i8253_lock" },
	{ 0x7d11c268, "jiffies" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x598092c, "device_bind_driver" },
	{ 0x5a37ee35, "device_del" },
	{ 0x4ff943ae, "mutex_lock_interruptible" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0xb346304, "kthread_stop" },
	{ 0x3e158c0e, "driver_unregister" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xf13d3de3, "device_attach" },
	{ 0x7f9e86c1, "put_driver" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x2ca5f1b5, "device_add" },
	{ 0xde0c05c3, "up_write" },
	{ 0xbca92367, "down_write" },
	{ 0x6e3baace, "bus_unregister" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xa9615177, "put_device" },
	{ 0x4292364c, "schedule" },
	{ 0x35c2ba9e, "refrigerator" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x6989a769, "vsnprintf" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xd2965f6f, "kthread_should_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x97e89e2c, "kthread_create" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xc07f052f, "device_initialize" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x25da070, "snprintf" },
	{ 0xc7d5039, "driver_find" },
	{ 0x9e7d6bd0, "__udelay" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F518DD7F70959E87A4D5ACD");
