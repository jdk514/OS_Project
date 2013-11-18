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
	{ 0x5418d52a, "param_get_ushort" },
	{ 0xc4c5509d, "param_set_ushort" },
	{ 0x3aad8346, "usb_serial_disconnect" },
	{ 0x6c9c6435, "usb_serial_probe" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0xe43d1a87, "usb_clear_halt" },
	{ 0xc7d3775e, "usb_reset_device" },
	{ 0xa7e27341, "usb_match_id" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xa3e9fd5e, "interruptible_sleep_on" },
	{ 0x2e60bace, "memcpy" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x625acc81, "__down_failed_interruptible" },
	{ 0xda4008e6, "cond_resched" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x41d418f, "tty_flip_buffer_push" },
	{ 0xf60c8df5, "tty_insert_flip_string" },
	{ 0x441ce43c, "tty_buffer_request_room" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x66eb93e, "usb_serial_register" },
	{ 0xbb7ca41d, "usb_bulk_msg" },
	{ 0x97cce049, "tty_get_baud_rate" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x7d11c268, "jiffies" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0xd1913548, "tty_wakeup" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x1b7d4074, "printk" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x5eea5f42, "usb_deregister" },
	{ 0x4e7ddbed, "usb_serial_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v0451p3410d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0451p5052d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0451p5152d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0451p505Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0451p505Fd*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "DDFEAA523A0150C8CC71196");
