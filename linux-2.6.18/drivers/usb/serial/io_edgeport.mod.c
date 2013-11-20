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
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x7d11c268, "jiffies" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x4292364c, "schedule" },
	{ 0x2e60bace, "memcpy" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x66eb93e, "usb_serial_register" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0x1be128fa, "usb_get_descriptor" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xd1913548, "tty_wakeup" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x97cce049, "tty_get_baud_rate" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0x1e62b30a, "usb_alloc_urb" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x41d418f, "tty_flip_buffer_push" },
	{ 0xf60c8df5, "tty_insert_flip_string" },
	{ 0x441ce43c, "tty_buffer_request_room" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x1b7d4074, "printk" },
	{ 0x4e7ddbed, "usb_serial_deregister" },
	{ 0x5eea5f42, "usb_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v1608p0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0004d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p1403d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0005d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0006d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0007d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p000Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p000Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p000Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p000Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0010d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0011d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0012d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p001Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0019d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0013d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0014d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0008d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0018d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "EB05E3174F70EC5E8E02EAE");