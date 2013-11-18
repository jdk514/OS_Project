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
	{ 0x8397630e, "usb_buffer_alloc" },
	{ 0xd9d2bb03, "snd_usbmidi_disconnect" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xd0ee38b8, "schedule_timeout_uninterruptible" },
	{ 0x694ccf5f, "snd_pcm_period_elapsed" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x806d5133, "param_array_get" },
	{ 0xd509b8b4, "usb_buffer_free" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0x5635c457, "usb_reset_configuration" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x8500dcf9, "usb_unlink_urb" },
	{ 0xb950e614, "snd_card_disconnect" },
	{ 0x7d11c268, "jiffies" },
	{ 0x1be128fa, "usb_get_descriptor" },
	{ 0xaa136450, "param_get_charp" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x6cec7683, "snd_device_new" },
	{ 0x11075db7, "usb_string" },
	{ 0x5eea5f42, "usb_deregister" },
	{ 0x1b7d4074, "printk" },
	{ 0xaa52daa7, "snd_pcm_set_ops" },
	{ 0x178b9fcb, "usb_set_interface" },
	{ 0xf67eee79, "snd_ctl_notify" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xf5b66452, "usb_driver_claim_interface" },
	{ 0x119a01f8, "snd_pcm_new_stream" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xc83b92d1, "snd_hwdep_new" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x16ea202a, "snd_pcm_lib_ioctl" },
	{ 0x33196303, "snd_iprintf" },
	{ 0x6dacee5f, "snd_card_new" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xb15cc7e0, "snd_pcm_hw_rule_add" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x80ca525b, "snd_component_add" },
	{ 0x4292364c, "schedule" },
	{ 0xca7afd33, "snd_ctl_new1" },
	{ 0x43a96f0b, "snd_ctl_find_id" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xf8a0ea71, "snd_pcm_hw_constraint_minmax" },
	{ 0x3ba34366, "snd_pcm_stop" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x9c61c317, "snd_usb_create_midi_interface" },
	{ 0x3383c7e4, "snd_card_proc_new" },
	{ 0x865edc9b, "finish_wait" },
	{ 0xe15f1df, "snd_card_free" },
	{ 0xcca08f65, "snd_card_register" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xb4cfa53e, "usb_ifnum_to_if" },
	{ 0xa9e2ba2c, "snd_pcm_new" },
	{ 0x25da070, "snprintf" },
	{ 0x96f21b16, "vmalloc_to_page" },
	{ 0xb94561ae, "snd_ctl_add" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0x1e62b30a, "usb_alloc_urb" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-usb-lib,snd-pcm,snd,snd-hwdep";

MODULE_ALIAS("usb:v0499p1000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1004d*dc*dsc*dp*icFFisc*ip*");
MODULE_ALIAS("usb:v0499p1005d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1006d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1007d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1008d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1009d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p100Ad*dc*dsc*dp*icFFisc*ip*");
MODULE_ALIAS("usb:v0499p100Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p100Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p100Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p100Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1010d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1011d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1012d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1013d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1014d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1015d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1016d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1017d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1018d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1019d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p101Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p101Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p101Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p101Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p101Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p101Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1020d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1021d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1022d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1023d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1024d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1025d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1026d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1027d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1028d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1029d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p102Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p102Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p102Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1030d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1031d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1032d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1033d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1034d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1035d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1036d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1037d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1038d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1039d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p103Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p103Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p103Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p103Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p103Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p103Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1040d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1041d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p2000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p2001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p2002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p5000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p5001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p5002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p5003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p5004d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p5005d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p5006d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p5007d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p5008d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p5009d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p500Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p500Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p500Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p500Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p500Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p7000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p7010d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0004d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0005d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0007d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0008d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0009d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p000Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p000Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0010d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0012d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0014d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0016d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p001Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p001Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0023d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0025d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0027d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0029d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p002Bd*dc*dsc*dp*icFFisc*ip*");
MODULE_ALIAS("usb:v0582p002Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p002Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0033d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0037d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p003Bd*dc*dsc*dp*icFFisc*ip*");
MODULE_ALIAS("usb:v0582p0040d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0042d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0044d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0048d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p004Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0050d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0052d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0065d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p006Ad*dc*dsc*dp*icFFisc*ip*");
MODULE_ALIAS("usb:v0582p006Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0074d*dc*dsc*dp*icFFisc*ip*");
MODULE_ALIAS("usb:v0582p0075d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p007Ad*dc*dsc*dp*icFFisc*ip*");
MODULE_ALIAS("usb:v0582p0080d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p008Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p009Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06F8pB000d*dc*dsc*dp*icFFisc*ip*");
MODULE_ALIAS("usb:v0763p1002d*dc*dsc*dp*icFFisc*ip*");
MODULE_ALIAS("usb:v0763p1011d*dc*dsc*dp*icFFisc*ip*");
MODULE_ALIAS("usb:v0763p1015d*dc*dsc*dp*icFFisc*ip*");
MODULE_ALIAS("usb:v0763p1021d*dc*dsc*dp*icFFisc*ip*");
MODULE_ALIAS("usb:v0763p1031d010dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0763p1033d*dc*dsc*dp*icFFisc*ip*");
MODULE_ALIAS("usb:v0763p1041d*dc*dsc*dp*icFFisc*ip*");
MODULE_ALIAS("usb:v0763p2001d*dc*dsc*dp*icFFisc*ip*");
MODULE_ALIAS("usb:v0763p2003d*dc*dsc*dp*icFFisc*ip*");
MODULE_ALIAS("usb:v0763p2008d*dc*dsc*dp*icFFisc*ip*");
MODULE_ALIAS("usb:v0763p200Dd*dc*dsc*dp*icFFisc*ip*");
MODULE_ALIAS("usb:v07CFp6801d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07CFp6802d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07FDp0001d*dc*dsc02dp*ic*isc*ip*");
MODULE_ALIAS("usb:v041Ep3010d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v086Ap0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v086Ap0002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v086Ap0003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0CCDp0012d*dc*dsc*dp*icFFisc*ip*");
MODULE_ALIAS("usb:v0CCDp0013d*dc*dsc*dp*icFFisc*ip*");
MODULE_ALIAS("usb:v0CCDp0014d*dc*dsc*dp*icFFisc*ip*");
MODULE_ALIAS("usb:v0CCDp0035d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1235p0001d*dc*dsc*dp*icFFisc*ip*");
MODULE_ALIAS("usb:v1235p0002d*dc*dsc*dp*icFFisc*ip*");
MODULE_ALIAS("usb:v1235p4661d*dc*dsc*dp*icFFisc*ip*");
MODULE_ALIAS("usb:v4752p0011d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v7104p2202d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic01isc03ip*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic01isc01ip*");

MODULE_INFO(srcversion, "E02865A3B6BDE2893E88D9A");
