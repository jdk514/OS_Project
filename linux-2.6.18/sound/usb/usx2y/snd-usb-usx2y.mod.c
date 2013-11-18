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
	{ 0xf9a482f9, "msleep" },
	{ 0xd9d2bb03, "snd_usbmidi_disconnect" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x3b91f3af, "snd_free_pages" },
	{ 0x694ccf5f, "snd_pcm_period_elapsed" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x806d5133, "param_array_get" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xf673e9f3, "snd_pcm_lib_preallocate_pages" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0xb950e614, "snd_card_disconnect" },
	{ 0x63343b1d, "snd_usbmidi_input_stop" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0xaa136450, "param_get_charp" },
	{ 0x5eea5f42, "usb_deregister" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0xaa52daa7, "snd_pcm_set_ops" },
	{ 0x178b9fcb, "usb_set_interface" },
	{ 0xade88e76, "snd_malloc_pages" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xc83b92d1, "snd_hwdep_new" },
	{ 0xfd978e66, "snd_pcm_lib_free_pages" },
	{ 0x16ea202a, "snd_pcm_lib_ioctl" },
	{ 0xdef754b1, "snd_pcm_lib_malloc_pages" },
	{ 0x6dacee5f, "snd_card_new" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xbb7ca41d, "usb_bulk_msg" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0x4292364c, "schedule" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x16756dc0, "snd_usbmidi_input_start" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xf8a0ea71, "snd_pcm_hw_constraint_minmax" },
	{ 0x3ba34366, "snd_pcm_stop" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x9c61c317, "snd_usb_create_midi_interface" },
	{ 0x865edc9b, "finish_wait" },
	{ 0xe15f1df, "snd_card_free" },
	{ 0xcca08f65, "snd_card_register" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xb4cfa53e, "usb_ifnum_to_if" },
	{ 0xa9e2ba2c, "snd_pcm_new" },
	{ 0x5c117c72, "usb_get_current_frame_number" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0x1e62b30a, "usb_alloc_urb" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-usb-lib,snd-page-alloc,snd-pcm,snd,snd-hwdep";

MODULE_ALIAS("usb:v1604p8001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1604p8007d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1604p8005d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "E6AC194CCFA5379E6AFDD9F");
