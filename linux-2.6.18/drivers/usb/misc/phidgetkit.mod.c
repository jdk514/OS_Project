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
	{ 0xd0b91f9b, "init_timer" },
	{ 0xfa3601a2, "usb_get_dev" },
	{ 0x1e62b30a, "usb_alloc_urb" },
	{ 0x8397630e, "usb_buffer_alloc" },
	{ 0x68e0d967, "device_create_file" },
	{ 0x859204af, "sscanf" },
	{ 0xdc09103, "sysfs_notify" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0xf692f74f, "usb_put_dev" },
	{ 0x845b7a76, "device_remove_file" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0xd509b8b4, "usb_buffer_free" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0x1b7d4074, "printk" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x5eea5f42, "usb_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v06C2p0040d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06C2p0045d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06C2p0051d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06C2p0053d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06C2p0044d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0925p8201d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "2F092AD9CBF604C304221ED");
