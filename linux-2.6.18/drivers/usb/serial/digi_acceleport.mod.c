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
	{ 0xd0b91f9b, "init_timer" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x37a0cba, "kfree" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0xb2433ebe, "tty_ldisc_flush" },
	{ 0xd75beaaf, "tty_wait_until_sent" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x66eb93e, "usb_serial_register" },
	{ 0x7d11c268, "jiffies" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0x41d418f, "tty_flip_buffer_push" },
	{ 0xf60c8df5, "tty_insert_flip_string" },
	{ 0x441ce43c, "tty_buffer_request_room" },
	{ 0xccac1736, "tty_insert_flip_string_flags" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x1b7d4074, "printk" },
	{ 0xd1913548, "tty_wakeup" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x4e7ddbed, "usb_serial_deregister" },
	{ 0x5eea5f42, "usb_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v05C5p0002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05C5p0004d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "4A8152A10DDDC97308C3405");
