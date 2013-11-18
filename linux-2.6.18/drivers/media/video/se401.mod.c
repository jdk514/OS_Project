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
	{ 0xb545cb0b, "video_register_device" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x4292364c, "schedule" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x1e62b30a, "usb_alloc_urb" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0xffc7fa80, "video_usercopy" },
	{ 0x9a3411f9, "remap_pfn_range" },
	{ 0xcb51d0fd, "vmalloc_to_pfn" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0x500c5062, "video_devdata" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x96f21b16, "vmalloc_to_page" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xa2b8d7fc, "video_unregister_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0x1b7d4074, "printk" },
	{ 0x5eea5f42, "usb_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=compat_ioctl32,videodev";

MODULE_ALIAS("usb:v03E8p0004d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0471p030Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v047Dp5001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v047Dp5002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v047Dp5003d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "51BE1B813A01FB273399D95");
