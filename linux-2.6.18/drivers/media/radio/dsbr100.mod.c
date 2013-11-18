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
	{ 0xb545cb0b, "video_register_device" },
	{ 0x217eb073, "video_device_alloc" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x1b7d4074, "printk" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0xffc7fa80, "video_usercopy" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0x500c5062, "video_devdata" },
	{ 0x37a0cba, "kfree" },
	{ 0xa2b8d7fc, "video_unregister_device" },
	{ 0x5eea5f42, "usb_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=compat_ioctl32,videodev";

MODULE_ALIAS("usb:v04B4p1002d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "A16BA5AF0B82D0599F88973");
