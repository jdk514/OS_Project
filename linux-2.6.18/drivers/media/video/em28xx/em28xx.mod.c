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
	{ 0xa9a2b1a0, "i2c_master_send" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8397630e, "usb_buffer_alloc" },
	{ 0x61bed476, "up_read" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xda981881, "video_device_release" },
	{ 0xacccd3c6, "tveeprom_hauppauge_analog" },
	{ 0xffc7fa80, "video_usercopy" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x45b08f68, "ir_codes_pinnacle_grey" },
	{ 0x96befe4d, "no_llseek" },
	{ 0x806d5133, "param_array_get" },
	{ 0xd509b8b4, "usb_buffer_free" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x902a3cd2, "ir_codes_hauppauge_new" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x17d9ce1a, "i2c_add_adapter" },
	{ 0x4f76afc6, "i2c_clients_command" },
	{ 0xb545cb0b, "video_register_device" },
	{ 0x217eb073, "video_device_alloc" },
	{ 0x5eea5f42, "usb_deregister" },
	{ 0x4ff943ae, "mutex_lock_interruptible" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0xa2b8d7fc, "video_unregister_device" },
	{ 0x178b9fcb, "usb_set_interface" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xde0c05c3, "up_write" },
	{ 0xbca92367, "down_write" },
	{ 0xdc551b97, "vm_insert_page" },
	{ 0x5ebefe4b, "v4l_printk_ioctl" },
	{ 0x57b02a20, "v4l2_type_names" },
	{ 0xa4d29bf3, "i2c_del_adapter" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0xc6c5a7a1, "ir_codes_em_terratec" },
	{ 0xfa3601a2, "usb_get_dev" },
	{ 0xf692f74f, "usb_put_dev" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0x4292364c, "schedule" },
	{ 0x33b3b664, "v4l2_video_std_construct" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0x695fd12e, "down_read_trylock" },
	{ 0xa97564d6, "i2c_master_recv" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0x37a0cba, "kfree" },
	{ 0xab265243, "v4l_compat_translate_ioctl" },
	{ 0x2e60bace, "memcpy" },
	{ 0x98adfde2, "request_module" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x25da070, "snprintf" },
	{ 0xef810cba, "v4l_compat_ioctl32" },
	{ 0x96f21b16, "vmalloc_to_page" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0x1e62b30a, "usb_alloc_urb" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=i2c-core,videodev,tveeprom,ir-common,v4l2-common,v4l1-compat,compat_ioctl32";

MODULE_ALIAS("usb:vEB1Ap2800d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:vEB1Ap2820d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0CCDp0036d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2304p0208d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2040p4200d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2304p0207d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "9E325BDB817893617B2F96D");
