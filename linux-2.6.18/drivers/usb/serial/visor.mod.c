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
	{ 0x3aad8346, "usb_serial_disconnect" },
	{ 0x6c9c6435, "usb_serial_probe" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x5418d52a, "param_get_ushort" },
	{ 0xc4c5509d, "param_set_ushort" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0x1e62b30a, "usb_alloc_urb" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0x41d418f, "tty_flip_buffer_push" },
	{ 0xf60c8df5, "tty_insert_flip_string" },
	{ 0x441ce43c, "tty_buffer_request_room" },
	{ 0xf2db5ecc, "usb_serial_port_softint" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x66eb93e, "usb_serial_register" },
	{ 0x2e60bace, "memcpy" },
	{ 0x97cce049, "tty_get_baud_rate" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x37a0cba, "kfree" },
	{ 0x1b7d4074, "printk" },
	{ 0x4e7ddbed, "usb_serial_deregister" },
	{ 0x5eea5f42, "usb_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v082Dp0100d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v082Dp0200d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v082Dp0300d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v115EpF100d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0830p0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0830p0002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0830p0003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0830p0020d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0830p0080d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0830p0040d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0830p0050d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0830p0060d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0830p0061d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0830p0031d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0830p0061d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0830p0070d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v054Cp0038d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v054Cp0066d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v054Cp0095d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v054Cp009Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v054Cp00DAd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v054Cp00E9d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v054Cp0144d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v054Cp0169d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04E8p8001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04E8p6601d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v12EFp0100d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v091Ep0004d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v4766p0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C88p0021d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0E67p0002d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "F26B1F17CC571BEB4458993");
