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
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x1e62b30a, "usb_alloc_urb" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xbb7ca41d, "usb_bulk_msg" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0xb2433ebe, "tty_ldisc_flush" },
	{ 0x876edfe8, "tty_hung_up_p" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xf2db5ecc, "usb_serial_port_softint" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x66eb93e, "usb_serial_register" },
	{ 0x9d1d4895, "ezusb_writememory" },
	{ 0x1956cb35, "ezusb_set_reset" },
	{ 0xe43d1a87, "usb_clear_halt" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x97cce049, "tty_get_baud_rate" },
	{ 0xf60c8df5, "tty_insert_flip_string" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0x41d418f, "tty_flip_buffer_push" },
	{ 0x441ce43c, "tty_buffer_request_room" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
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

MODULE_ALIAS("usb:v0710p8001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0710p0001d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "8D45657863B0A0C0FC8608D");
