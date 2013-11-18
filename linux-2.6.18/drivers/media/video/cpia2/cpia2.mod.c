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
	{ 0x89b301d4, "param_get_int" },
	{ 0x7d4e29ae, "page_address" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xda981881, "video_device_release" },
	{ 0xffc7fa80, "video_usercopy" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x96befe4d, "no_llseek" },
	{ 0x76ba9a9a, "v4l2_prio_open" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xb545cb0b, "video_register_device" },
	{ 0x217eb073, "video_device_alloc" },
	{ 0x5eea5f42, "usb_deregister" },
	{ 0x4ff943ae, "mutex_lock_interruptible" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0xbecd2858, "v4l2_prio_init" },
	{ 0xa2b8d7fc, "video_unregister_device" },
	{ 0x178b9fcb, "usb_set_interface" },
	{ 0x95284709, "v4l2_prio_close" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x2f639468, "v4l2_prio_check" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x500c5062, "video_devdata" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0x4292364c, "schedule" },
	{ 0xb3fc97e2, "usb_driver_release_interface" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0x37a0cba, "kfree" },
	{ 0x9a3411f9, "remap_pfn_range" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0x9c7de443, "v4l2_prio_change" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x1dcaa0c8, "v4l2_prio_max" },
	{ 0x25da070, "snprintf" },
	{ 0xef810cba, "v4l_compat_ioctl32" },
	{ 0x96f21b16, "vmalloc_to_page" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0x1e62b30a, "usb_alloc_urb" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=videodev,v4l2-common,compat_ioctl32";

MODULE_ALIAS("usb:v0553p0100d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0553p0140d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0553p0151d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "FE92C92FB8538B3EC23548C");
