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
	{ 0x6f7d41a3, "usbatm_usb_disconnect" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1e62b30a, "usb_alloc_urb" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x7e0221e4, "complete" },
	{ 0xe43d1a87, "usb_clear_halt" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x33934162, "release_firmware" },
	{ 0xbb7ca41d, "usb_bulk_msg" },
	{ 0x107d6ba3, "__get_free_pages" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x70dc0e3, "request_firmware" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x9941ccb8, "free_pages" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0xd3dad18a, "schedule_delayed_work" },
	{ 0x1b7d4074, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x2bc95bd4, "memset" },
	{ 0x8500dcf9, "usb_unlink_urb" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0xa34eb072, "wait_for_completion" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xa418eb4a, "usbatm_usb_probe" },
	{ 0x5eea5f42, "usb_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=usbatm";

MODULE_ALIAS("usb:v0572pCAFEd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0572pCB00d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0572pCB01d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0572pCB02d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0572pCB06d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v08E3p0100d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v08E3p0102d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0EB0p3457d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1803p5510d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0675p0200d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0586p330Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0586p330Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0659p0020d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0509p0812d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v100DpCB01d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v100Dp3342d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "DA75A46E3C52B921637447E");
