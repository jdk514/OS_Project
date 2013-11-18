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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0xf9a482f9, "msleep" },
	{ 0x85898a89, "class_register" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xda981881, "video_device_release" },
	{ 0xacccd3c6, "tveeprom_hauppauge_analog" },
	{ 0xffc7fa80, "video_usercopy" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x5cca4df3, "i2c_transfer" },
	{ 0x96befe4d, "no_llseek" },
	{ 0x76ba9a9a, "v4l2_prio_open" },
	{ 0x806d5133, "param_array_get" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0x8c0be9b4, "queue_work" },
	{ 0x5253a3a4, "class_device_unregister" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x7418c82, "cx2341x_fill_defaults" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x8500dcf9, "usb_unlink_urb" },
	{ 0x91ed7e93, "sysfs_remove_group" },
	{ 0xc09bee6, "cx2341x_log_status" },
	{ 0x7d11c268, "jiffies" },
	{ 0x17d9ce1a, "i2c_add_adapter" },
	{ 0xda4008e6, "cond_resched" },
	{ 0xaeab9aa1, "cx2341x_ctrl_get_menu" },
	{ 0xf2766228, "__create_workqueue" },
	{ 0xb545cb0b, "video_register_device" },
	{ 0xa34eb072, "wait_for_completion" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x217eb073, "video_device_alloc" },
	{ 0x1a30d545, "usb_lock_device_for_reset" },
	{ 0x10941d03, "cx2341x_update" },
	{ 0x5eea5f42, "usb_deregister" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x692d1a65, "sysfs_create_group" },
	{ 0x5152e605, "memcmp" },
	{ 0xa2b8d7fc, "video_unregister_device" },
	{ 0x93618160, "class_unregister" },
	{ 0x178b9fcb, "usb_set_interface" },
	{ 0x95284709, "v4l2_prio_close" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x6180e3ac, "class_device_create_file" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x31153eb8, "destroy_workqueue" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xd0bbbd3f, "flush_workqueue" },
	{ 0x5ebefe4b, "v4l_printk_ioctl" },
	{ 0x2f639468, "v4l2_prio_check" },
	{ 0xa4d29bf3, "i2c_del_adapter" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x2eb16cd2, "class_device_remove_file" },
	{ 0xc7d3775e, "usb_reset_device" },
	{ 0xbb7ca41d, "usb_bulk_msg" },
	{ 0x4292364c, "schedule" },
	{ 0xe43d1a87, "usb_clear_halt" },
	{ 0x86f677ba, "cx2341x_ctrl_query" },
	{ 0x3c2b8737, "class_device_register" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0xab265243, "v4l_compat_translate_ioctl" },
	{ 0x98adfde2, "request_module" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0x9c7de443, "v4l2_prio_change" },
	{ 0x28f35813, "scnprintf" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x70dc0e3, "request_firmware" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0xe202bfaa, "cx2341x_ext_ctrls" },
	{ 0x1dcaa0c8, "v4l2_prio_max" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x7e0221e4, "complete" },
	{ 0x25da070, "snprintf" },
	{ 0x96b27088, "__down_failed" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0x33934162, "release_firmware" },
	{ 0x1e62b30a, "usb_alloc_urb" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=videodev,tveeprom,i2c-core,v4l2-common,cx2341x,v4l1-compat";

MODULE_ALIAS("usb:v2040p2900d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2040p2400d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "C651D3C73E5F60BDA8B95C9");
