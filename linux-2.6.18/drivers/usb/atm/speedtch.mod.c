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
	{ 0x72216fa9, "param_get_uint" },
	{ 0x8abac70a, "param_set_uint" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0xc7d3775e, "usb_reset_device" },
	{ 0x1e62b30a, "usb_alloc_urb" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xf5b66452, "usb_driver_claim_interface" },
	{ 0x4827a016, "del_timer" },
	{ 0x5152e605, "memcmp" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x33934162, "release_firmware" },
	{ 0x9941ccb8, "free_pages" },
	{ 0x178b9fcb, "usb_set_interface" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xbb7ca41d, "usb_bulk_msg" },
	{ 0x107d6ba3, "__get_free_pages" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x70dc0e3, "request_firmware" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0xb3fc97e2, "usb_driver_release_interface" },
	{ 0xb4cfa53e, "usb_ifnum_to_if" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0x11075db7, "usb_string" },
	{ 0x1b7d4074, "printk" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0xa418eb4a, "usbatm_usb_probe" },
	{ 0x5eea5f42, "usb_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=usbatm";

MODULE_ALIAS("usb:v06B9p4061d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "8AF3A2481B893F831EA276A");
