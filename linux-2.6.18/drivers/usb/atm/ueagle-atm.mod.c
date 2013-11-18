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
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0xaa136450, "param_get_charp" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x72216fa9, "param_get_uint" },
	{ 0x8abac70a, "param_set_uint" },
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0xb7b61546, "crc32_be" },
	{ 0xa418eb4a, "usbatm_usb_probe" },
	{ 0xb5b49e73, "request_firmware_nowait" },
	{ 0xc7d3775e, "usb_reset_device" },
	{ 0x68e0d967, "device_create_file" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x97e89e2c, "kthread_create" },
	{ 0x1e62b30a, "usb_alloc_urb" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x178b9fcb, "usb_set_interface" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xbb7ca41d, "usb_bulk_msg" },
	{ 0xd2965f6f, "kthread_should_stop" },
	{ 0x70dc0e3, "request_firmware" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xf9a482f9, "msleep" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0xf5b66452, "usb_driver_claim_interface" },
	{ 0xb4cfa53e, "usb_ifnum_to_if" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x4292364c, "schedule" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x33934162, "release_firmware" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0xb346304, "kthread_stop" },
	{ 0x845b7a76, "device_remove_file" },
	{ 0x37a0cba, "kfree" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x25da070, "snprintf" },
	{ 0x8d3894f2, "_ctype" },
	{ 0x11075db7, "usb_string" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x6f7d41a3, "usbatm_usb_disconnect" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x1b7d4074, "printk" },
	{ 0x5eea5f42, "usb_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=usbatm";

MODULE_ALIAS("usb:v05CCp3351d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05CCp3350d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1110p9010d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1110p900Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1110p9022d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1110p9021d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1110p9024d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1110p9023d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1110p9032d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1110p9031d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BAFp00F2d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BAFp00F1d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BAFp00FAd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BAFp00F9d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BAFp00F6d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BAFp00F5d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BAFp00F8d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BAFp00F7d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "656B9FF709AB3FF09C51E8D");
