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
	{ 0x3aad8346, "usb_serial_disconnect" },
	{ 0x6c9c6435, "usb_serial_probe" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0xbb7ca41d, "usb_bulk_msg" },
	{ 0x5152e605, "memcmp" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x96b27088, "__down_failed" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xa3e9fd5e, "interruptible_sleep_on" },
	{ 0x2e60bace, "memcpy" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0xe43d1a87, "usb_clear_halt" },
	{ 0x625acc81, "__down_failed_interruptible" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x66eb93e, "usb_serial_register" },
	{ 0x97cce049, "tty_get_baud_rate" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7d11c268, "jiffies" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x37a0cba, "kfree" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x41d418f, "tty_flip_buffer_push" },
	{ 0xf60c8df5, "tty_insert_flip_string" },
	{ 0x441ce43c, "tty_buffer_request_room" },
	{ 0xd1913548, "tty_wakeup" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1b7d4074, "printk" },
	{ 0x4e7ddbed, "usb_serial_deregister" },
	{ 0x5eea5f42, "usb_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v1608p0215d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0240d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0241d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0301d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0302d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0303d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0304d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0305d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0306d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0307d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0308d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p030Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0309d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p030Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p030Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p030Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0205d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p021Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0207d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p020Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p020Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0217d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0201d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0206d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p021Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p021Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p021Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p021Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0242d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "F8ADAAC0BDFFCAB3DACF8AD");
