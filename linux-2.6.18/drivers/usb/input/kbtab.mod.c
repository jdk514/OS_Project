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
	{ 0xe7c21ffd, "input_event" },
	{ 0x4330f0ef, "input_free_device" },
	{ 0x380db0a0, "input_register_device" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x25da070, "snprintf" },
	{ 0x1e62b30a, "usb_alloc_urb" },
	{ 0x8397630e, "usb_buffer_alloc" },
	{ 0xc59d2532, "input_allocate_device" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x1b7d4074, "printk" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xd509b8b4, "usb_buffer_free" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0x963f24f1, "input_unregister_device" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0x5eea5f42, "usb_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v084Ep1001d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "9EA88105DD339A0B804B53E");
