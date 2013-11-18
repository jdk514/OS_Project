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
	{ 0xa0b04675, "vmalloc_32" },
	{ 0x500c5062, "video_devdata" },
	{ 0xb545cb0b, "video_register_device" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xbb7ca41d, "usb_bulk_msg" },
	{ 0x9a3411f9, "remap_pfn_range" },
	{ 0xcb51d0fd, "vmalloc_to_pfn" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x96f21b16, "vmalloc_to_page" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0x1b7d4074, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xa2b8d7fc, "video_unregister_device" },
	{ 0x5eea5f42, "usb_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=compat_ioctl32,videodev";

MODULE_ALIAS("usb:v04C1p009Dd*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "938AA4A5B5C0DA59FBDA459");
