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
	{ 0xcf5d9895, "parport_ieee1284_read_byte" },
	{ 0xf15702ab, "parport_ieee1284_read_nibble" },
	{ 0x3b4998ba, "parport_announce_port" },
	{ 0x2313d5f3, "parport_register_port" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x178b9fcb, "usb_set_interface" },
	{ 0xfa3601a2, "usb_get_dev" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0xbb7ca41d, "usb_bulk_msg" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x7d11c268, "jiffies" },
	{ 0x736bb1ef, "wait_for_completion_timeout" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0x7e0221e4, "complete" },
	{ 0x3d7c39ea, "_read_lock" },
	{ 0xb3ec0c3b, "parport_ieee1284_interrupt" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0x1b7d4074, "printk" },
	{ 0x1e62b30a, "usb_alloc_urb" },
	{ 0x8a1203a9, "kref_get" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x3ae831b6, "kref_init" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x37a0cba, "kfree" },
	{ 0xf692f74f, "usb_put_dev" },
	{ 0xcff53400, "kref_put" },
	{ 0x33101736, "parport_put_port" },
	{ 0x4d563902, "parport_remove_port" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x8500dcf9, "usb_unlink_urb" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x5eea5f42, "usb_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=parport";

MODULE_ALIAS("usb:v047Ep1001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0557p2001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0729p1284d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1293p0002d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "85D65BFBC413586428E90C7");
