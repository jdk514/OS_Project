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
	{ 0xc3c79136, "skb_copy_expand" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xd8c152cd, "raise_softirq_irqoff" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xe8e53e56, "per_cpu__softnet_data" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x5598dc19, "register_netdev" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x8397630e, "usb_buffer_alloc" },
	{ 0x5152e605, "memcmp" },
	{ 0x9941ccb8, "free_pages" },
	{ 0x107d6ba3, "__get_free_pages" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0x8500dcf9, "usb_unlink_urb" },
	{ 0x7d11c268, "jiffies" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0xa99d5102, "netif_carrier_off" },
	{ 0xc767785d, "netif_carrier_on" },
	{ 0x96f7398e, "netif_rx" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x548de514, "__alloc_skb" },
	{ 0xd3dad18a, "schedule_delayed_work" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x1e62b30a, "usb_alloc_urb" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0xd509b8b4, "usb_buffer_free" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0x1b7d4074, "printk" },
	{ 0x5eea5f42, "usb_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v03E8p0008d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04BBp0901d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0506p03E8d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0506p11F8d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0557p2002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0557p4000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0565p0002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0565p0003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0565p0005d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05E9p0008d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05E9p0009d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v066Bp2202d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06E1p0008d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06E1p0009d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0707p0100d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07AAp0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p4000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0846p1001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0846p1002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v085Ap0008d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v085Ap0009d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v087Dp5704d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0951p0008d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v095Ap3003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v10BDp1427d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1342p0204d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v13D2p0400d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1485p0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1485p0002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1645p0005d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1645p0008d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1645p8005d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p4000d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "5F3103FD724A841A4A8F5EB");
