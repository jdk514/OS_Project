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
	{ 0x8841a6ea, "tty_register_device" },
	{ 0xc2fd27c0, "usb_get_intf" },
	{ 0xf5b66452, "usb_driver_claim_interface" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x1e62b30a, "usb_alloc_urb" },
	{ 0x8397630e, "usb_buffer_alloc" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xb4cfa53e, "usb_ifnum_to_if" },
	{ 0x8235805b, "memmove" },
	{ 0x41d418f, "tty_flip_buffer_push" },
	{ 0xf60c8df5, "tty_insert_flip_string" },
	{ 0x441ce43c, "tty_buffer_request_room" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xb3fc97e2, "usb_driver_release_interface" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0xb5ff2338, "tty_register_driver" },
	{ 0x70b3c64, "tty_set_operations" },
	{ 0x2e60bace, "memcpy" },
	{ 0x89ac5254, "tty_std_termios" },
	{ 0x9b22a5d, "alloc_tty_driver" },
	{ 0x5152e605, "memcmp" },
	{ 0xed5c73bf, "__tasklet_schedule" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0xd1913548, "tty_wakeup" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0x1b7d4074, "printk" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0x9785f810, "tty_hangup" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0xea637a5d, "usb_put_intf" },
	{ 0x62b1541b, "tty_unregister_device" },
	{ 0xd509b8b4, "usb_buffer_free" },
	{ 0x81cfa94c, "put_tty_driver" },
	{ 0x4171b957, "tty_unregister_driver" },
	{ 0x5eea5f42, "usb_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0870p0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0482p0203d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0ACEp1608d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0ACEp1611d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip01*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip02*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip03*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip04*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip05*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip06*");

MODULE_INFO(srcversion, "17E02FCAE9B1CC5E0F5D4B7");
