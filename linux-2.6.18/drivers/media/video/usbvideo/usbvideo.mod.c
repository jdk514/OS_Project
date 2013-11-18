#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
};

static const struct modversion_info ____versions[]
__attribute_used__
__attribute__((section("__versions"))) = {
	{ 0xb499ef18, "struct_module" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xffc7fa80, "video_usercopy" },
	{ 0x96befe4d, "no_llseek" },
	{ 0xa3e9fd5e, "interruptible_sleep_on" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0xb545cb0b, "video_register_device" },
	{ 0xcb51d0fd, "vmalloc_to_pfn" },
	{ 0x5eea5f42, "usb_deregister" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0xa2b8d7fc, "video_unregister_device" },
	{ 0x178b9fcb, "usb_set_interface" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0xfa3601a2, "usb_get_dev" },
	{ 0x500c5062, "video_devdata" },
	{ 0xf692f74f, "usb_put_dev" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x9a3411f9, "remap_pfn_range" },
	{ 0x2e60bace, "memcpy" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x8235805b, "memmove" },
	{ 0xef810cba, "v4l_compat_ioctl32" },
	{ 0x96f21b16, "vmalloc_to_page" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0x1e62b30a, "usb_alloc_urb" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=videodev,compat_ioctl32";


MODULE_INFO(srcversion, "AD3EA353D6F1A0532D2FCB4");
