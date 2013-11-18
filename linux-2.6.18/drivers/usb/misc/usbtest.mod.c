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
	{ 0x72216fa9, "param_get_uint" },
	{ 0x8abac70a, "param_set_uint" },
	{ 0x5418d52a, "param_get_ushort" },
	{ 0xc4c5509d, "param_set_ushort" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x1be128fa, "usb_get_descriptor" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x625acc81, "__down_failed_interruptible" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0xe43d1a87, "usb_clear_halt" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0x8500dcf9, "usb_unlink_urb" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7d11c268, "jiffies" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x1b7d4074, "printk" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0xa3c3f7fc, "usb_get_status" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x7d4e29ae, "page_address" },
	{ 0x37a0cba, "kfree" },
	{ 0x96b27088, "__down_failed" },
	{ 0xda4008e6, "cond_resched" },
	{ 0xc0fb5a10, "usb_sg_wait" },
	{ 0x432dd6df, "usb_sg_init" },
	{ 0xd509b8b4, "usb_buffer_free" },
	{ 0xa34eb072, "wait_for_completion" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0x7e0221e4, "complete" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0x8397630e, "usb_buffer_alloc" },
	{ 0x1e62b30a, "usb_alloc_urb" },
	{ 0x178b9fcb, "usb_set_interface" },
	{ 0x5eea5f42, "usb_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0547p1002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0547p2235d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0547p0080d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04B4p8613d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:vFFF0pFFF0d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0525pA4A0d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0525pA4A4d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0525pA4A3d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "33DC595BDBB2E96D12AB8CD");
