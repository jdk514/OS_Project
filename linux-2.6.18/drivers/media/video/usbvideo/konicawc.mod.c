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
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x54ded406, "RingQueue_Dequeue" },
	{ 0x380db0a0, "input_register_device" },
	{ 0xc59d2532, "input_allocate_device" },
	{ 0x25da070, "snprintf" },
	{ 0xbaae3277, "usbvideo_RegisterVideoDevice" },
	{ 0x1e62b30a, "usb_alloc_urb" },
	{ 0xd917ead, "usbvideo_AllocateDevice" },
	{ 0x9778abda, "RingQueue_Flush" },
	{ 0xdf605c59, "RingQueue_WakeUpInterruptible" },
	{ 0x5293ede2, "RingQueue_Enqueue" },
	{ 0xe7c21ffd, "input_event" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0xb689b091, "usb_altnum_to_altsetting" },
	{ 0xb4cfa53e, "usb_ifnum_to_if" },
	{ 0x178b9fcb, "usb_set_interface" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0x963f24f1, "input_unregister_device" },
	{ 0xdd181f1f, "usbvideo_register" },
	{ 0x1b7d4074, "printk" },
	{ 0xd03fa8f1, "usbvideo_Deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=usbvideo";

MODULE_ALIAS("usb:v04C8p0720d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "945C2229629F1EF84A8BDD6");
