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
	{ 0x61bed476, "up_read" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xda981881, "video_device_release" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x96befe4d, "no_llseek" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x806d5133, "param_array_get" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0x6483655c, "param_get_short" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x42ca3c61, "prepare_to_wait_exclusive" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0xb545cb0b, "video_register_device" },
	{ 0x2bc95bd4, "memset" },
	{ 0x217eb073, "video_device_alloc" },
	{ 0x5eea5f42, "usb_deregister" },
	{ 0x4ff943ae, "mutex_lock_interruptible" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0xa2b8d7fc, "video_unregister_device" },
	{ 0x178b9fcb, "usb_set_interface" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xde0c05c3, "up_write" },
	{ 0xbca92367, "down_write" },
	{ 0xdc551b97, "vm_insert_page" },
	{ 0x5ebefe4b, "v4l_printk_ioctl" },
	{ 0xa7e27341, "usb_match_id" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0xfa3601a2, "usb_get_dev" },
	{ 0x5418d52a, "param_get_ushort" },
	{ 0x500c5062, "video_devdata" },
	{ 0x72216fa9, "param_get_uint" },
	{ 0xf692f74f, "usb_put_dev" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0x4292364c, "schedule" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x695fd12e, "down_read_trylock" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0x8abac70a, "param_set_uint" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x40046949, "param_set_short" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xb4cfa53e, "usb_ifnum_to_if" },
	{ 0x25da070, "snprintf" },
	{ 0x96f21b16, "vmalloc_to_page" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0x1e62b30a, "usb_alloc_urb" },
	{ 0xc4c5509d, "param_set_ushort" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=videodev,v4l2-common";

MODULE_ALIAS("usb:v102Cp6151d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v102Cp6251d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v102Cp6253d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v102Cp6254d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v102Cp6255d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v102Cp6256d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v102Cp6257d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v102Cp6258d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v102Cp6259d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v102Cp625Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v102Cp625Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v102Cp625Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v102Cp625Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v102Cp625Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v102Cp625Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v102Cp6260d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v102Cp6261d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v102Cp6262d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v102Cp6263d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v102Cp6264d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v102Cp6265d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v102Cp6266d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v102Cp6267d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v102Cp6268d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v102Cp6269d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "96CC84BC1E413ABAE2C71D9");
