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
	{ 0xa2eade37, "backlight_device_register" },
	{ 0x25da070, "snprintf" },
	{ 0x8397630e, "usb_buffer_alloc" },
	{ 0x1e62b30a, "usb_alloc_urb" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xd3dad18a, "schedule_delayed_work" },
	{ 0x96b27088, "__down_failed" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0xf2766228, "__create_workqueue" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x8c0be9b4, "queue_work" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0x1b7d4074, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0xd509b8b4, "usb_buffer_free" },
	{ 0x8296ca38, "backlight_device_unregister" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0x5eea5f42, "usb_deregister" },
	{ 0x31153eb8, "destroy_workqueue" },
	{ 0xd0bbbd3f, "flush_workqueue" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=backlight";

MODULE_ALIAS("usb:v05ACp9218d*dc*dsc*dp*ic03isc*ip00*");
MODULE_ALIAS("usb:v05ACp9219d*dc*dsc*dp*ic03isc*ip00*");
MODULE_ALIAS("usb:v05ACp921Dd*dc*dsc*dp*ic03isc*ip00*");

MODULE_INFO(srcversion, "DC5DC04CAFBFA0852BE1164");
