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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xcff53400, "kref_put" },
	{ 0x4d101f5f, "driver_register" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x9b22a5d, "alloc_tty_driver" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0xb5ff2338, "tty_register_driver" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x441ce43c, "tty_buffer_request_room" },
	{ 0x81cfa94c, "put_tty_driver" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x70b3c64, "tty_set_operations" },
	{ 0xcdfb7700, "device_register" },
	{ 0x5eea5f42, "usb_deregister" },
	{ 0x4ff943ae, "mutex_lock_interruptible" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x3e158c0e, "driver_unregister" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x6e3baace, "bus_unregister" },
	{ 0xa7e27341, "usb_match_id" },
	{ 0x8841a6ea, "tty_register_device" },
	{ 0x62b1541b, "tty_unregister_device" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0x89ac5254, "tty_std_termios" },
	{ 0xfa3601a2, "usb_get_dev" },
	{ 0x5418d52a, "param_get_ushort" },
	{ 0xf692f74f, "usb_put_dev" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0xf60c8df5, "tty_insert_flip_string" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x4171b957, "tty_unregister_driver" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x9785f810, "tty_hangup" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x3ae831b6, "kref_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x8a1203a9, "kref_get" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x761ca99d, "device_unregister" },
	{ 0x41d418f, "tty_flip_buffer_push" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0x25da070, "snprintf" },
	{ 0xd1913548, "tty_wakeup" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0x1e62b30a, "usb_alloc_urb" },
	{ 0xc4c5509d, "param_set_ushort" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B32F58A0EDED0588311AD17");
