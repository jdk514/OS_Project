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
	{ 0x8397630e, "usb_buffer_alloc" },
	{ 0xcff53400, "kref_put" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x1fff34cf, "vc_resize" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xd509b8b4, "usb_buffer_free" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0x3226577c, "usb_deregister_dev" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x2fd1d81c, "vfree" },
	{ 0xd16ac615, "__get_user_1" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xba229ce6, "vc_cons" },
	{ 0x5eea5f42, "usb_deregister" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x92a7e4a5, "take_over_console" },
	{ 0xf7584a9c, "find_font" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x8cdbcccf, "usb_register_dev" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xfa3601a2, "usb_get_dev" },
	{ 0xf692f74f, "usb_put_dev" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0x4987fb1b, "usb_find_interface" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x3ae831b6, "kref_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0x8a1203a9, "kref_get" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x4888a014, "__get_user_2" },
	{ 0x8235805b, "memmove" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0x1e62b30a, "usb_alloc_urb" },
	{ 0xc64464ae, "con_set_default_unimap" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0711p0900d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0711p0901d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0711p0902d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v182Dp021Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v182Dp0269d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "ECB9249FCC3571159024444");
