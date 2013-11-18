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
	{ 0xef810cba, "v4l_compat_ioctl32" },
	{ 0x96befe4d, "no_llseek" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xda981881, "video_device_release" },
	{ 0x6180e3ac, "class_device_create_file" },
	{ 0xb545cb0b, "video_register_device" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x217eb073, "video_device_alloc" },
	{ 0x9a3411f9, "remap_pfn_range" },
	{ 0xcb51d0fd, "vmalloc_to_pfn" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x96f21b16, "vmalloc_to_page" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x500c5062, "video_devdata" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x4292364c, "schedule" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0x1e62b30a, "usb_alloc_urb" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xffc7fa80, "video_usercopy" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0x178b9fcb, "usb_set_interface" },
	{ 0x5635c457, "usb_reset_configuration" },
	{ 0x37a0cba, "kfree" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xa2b8d7fc, "video_unregister_device" },
	{ 0x2eb16cd2, "class_device_remove_file" },
	{ 0x1b7d4074, "printk" },
	{ 0x5eea5f42, "usb_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=compat_ioctl32,videodev";

MODULE_ALIAS("usb:v0553p0202d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v041Ep4007d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "64A508198CD26F8145459A0");
