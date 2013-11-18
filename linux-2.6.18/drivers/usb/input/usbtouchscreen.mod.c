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
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0x4330f0ef, "input_free_device" },
	{ 0x380db0a0, "input_register_device" },
	{ 0x25da070, "snprintf" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x1e62b30a, "usb_alloc_urb" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x8397630e, "usb_buffer_alloc" },
	{ 0xc59d2532, "input_allocate_device" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0xe7c21ffd, "input_event" },
	{ 0x1b7d4074, "printk" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0x963f24f1, "input_unregister_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xd509b8b4, "usb_buffer_free" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0x5eea5f42, "usb_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v3823p0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0123p0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0EEFp0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0EEFp0002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v134Cp0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v134Cp0002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v134Cp0003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v134Cp0004d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0596p0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF9E9d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "E9CCC2DAC9946A544F9DC51");
