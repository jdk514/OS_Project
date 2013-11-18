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
	{ 0xd6ee688f, "vmalloc" },
	{ 0xb689b091, "usb_altnum_to_altsetting" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xda981881, "video_device_release" },
	{ 0xffc7fa80, "video_usercopy" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x96befe4d, "no_llseek" },
	{ 0x806d5133, "param_array_get" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xaa136450, "param_get_charp" },
	{ 0xb545cb0b, "video_register_device" },
	{ 0x11075db7, "usb_string" },
	{ 0xcb51d0fd, "vmalloc_to_pfn" },
	{ 0x217eb073, "video_device_alloc" },
	{ 0x5eea5f42, "usb_deregister" },
	{ 0x1b7d4074, "printk" },
	{ 0x859204af, "sscanf" },
	{ 0xa2b8d7fc, "video_unregister_device" },
	{ 0x5568be43, "lock_kernel" },
	{ 0x178b9fcb, "usb_set_interface" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x6180e3ac, "class_device_create_file" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x5dfe8f1a, "unlock_kernel" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x500c5062, "video_devdata" },
	{ 0x2eb16cd2, "class_device_remove_file" },
	{ 0x4292364c, "schedule" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9a3411f9, "remap_pfn_range" },
	{ 0x2e60bace, "memcpy" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0xb4cfa53e, "usb_ifnum_to_if" },
	{ 0x25da070, "snprintf" },
	{ 0x8235805b, "memmove" },
	{ 0xef810cba, "v4l_compat_ioctl32" },
	{ 0x96f21b16, "vmalloc_to_page" },
	{ 0x96b27088, "__down_failed" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0x1e62b30a, "usb_alloc_urb" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=videodev,compat_ioctl32";

MODULE_ALIAS("usb:v0471p0302d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0471p0303d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0471p0304d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0471p0307d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0471p0308d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0471p030Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0471p0310d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0471p0311d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0471p0312d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0471p0313d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0471p0329d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v069Ap0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v046Dp08B0d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v046Dp08B1d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v046Dp08B2d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v046Dp08B3d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v046Dp08B4d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v046Dp08B5d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v046Dp08B6d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v046Dp08B7d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v046Dp08B8d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v055Dp9000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v055Dp9001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v055Dp9002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v041Ep400Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v041Ep4011d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04CCp8116d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06BEp8116d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0D81p1910d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0D81p1900d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "7F1B50DD933BAA03803FF84");
