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
	{ 0x68e0d967, "device_create_file" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xa3e9fd5e, "interruptible_sleep_on" },
	{ 0x7dceceac, "capable" },
	{ 0x2e60bace, "memcpy" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xf2db5ecc, "usb_serial_port_softint" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0x1e62b30a, "usb_alloc_urb" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x845b7a76, "device_remove_file" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x66eb93e, "usb_serial_register" },
	{ 0x97cce049, "tty_get_baud_rate" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0x37a0cba, "kfree" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0xd3dad18a, "schedule_delayed_work" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x41d418f, "tty_flip_buffer_push" },
	{ 0xccac1736, "tty_insert_flip_string_flags" },
	{ 0x441ce43c, "tty_buffer_request_room" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x4e7ddbed, "usb_serial_deregister" },
	{ 0x5eea5f42, "usb_deregister" },
	{ 0x1b7d4074, "printk" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v0403pFF00d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFFA8d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF2D0d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFC60d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pD070d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403p8372d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403p6001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403p6006d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403p6010d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pCAA0d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFA10d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1209p1002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1209p1006d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFC08d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFC09d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFC0Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFC0Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFC0Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFC0Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFC0Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFC0Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFC82d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DCDp0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFE38d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFA00d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFA01d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFA02d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFA03d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFA04d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFA05d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFA06d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF0C0d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF208d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pEBE0d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2101d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2102d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2103d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2104d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2211d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2221d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2212d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2222d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2213d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2223d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2411d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2421d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2431d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2441d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2412d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2422d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2432d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2442d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2413d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2423d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2433d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2443d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2811d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2821d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2831d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2841d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2851d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2861d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2871d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2881d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2812d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2822d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2832d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2842d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2852d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2862d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2872d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2882d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2813d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2823d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2833d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2843d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2853d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2863d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2873d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2883d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0ACDp0300d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B39p0421d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFA78d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF850d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFC70d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFC71d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFC72d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFC73d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE808d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE809d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE80Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE80Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE80Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE80Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE80Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE80Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE888d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE889d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE88Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE88Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE88Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE88Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE88Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE88Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFB5Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFB5Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFB58d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF06Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE6C8d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF06Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF448d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF449d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF44Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF44Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF44Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF9D0d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF9D1d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFAD0d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v093Cp0601d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v093Cp0701d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0F94p0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0F94p0005d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF680d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFD60d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0856pAC01d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0856pAC02d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0856pAC03d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE520d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403p8372d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF3C0d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF3C1d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pD388d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pD389d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pD38Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pD38Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pD38Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pD38Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pD38Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pD38Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1342p0202d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE548d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pEEE8d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pEEE9d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pEEEAd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pEEEBd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pEEECd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pEEEDd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pEEEEd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pEEEFd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pEC88d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pEC89d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:vDEEEp0300d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pDF28d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pDF30d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pDF32d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pDF31d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pDF33d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0D46p2020d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0D46p2021d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0D3Ap0300d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFF20d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pEA90d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pDC00d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pDC01d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFA88d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pC7D0d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pC991d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C26p0004d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5050p0400d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pDD20d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE050d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFAF0d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v128Dp0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pD678d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "50CA26DBC3665A5693DCE6E");
