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
	{ 0x96f7398e, "netif_rx" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x9a5962fa, "wireless_send_event" },
	{ 0xc767785d, "netif_carrier_on" },
	{ 0xa99d5102, "netif_carrier_off" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x5598dc19, "register_netdev" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x33934162, "release_firmware" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0x70dc0e3, "request_firmware" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xf251c670, "netif_device_detach" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0x7d11c268, "jiffies" },
	{ 0x8500dcf9, "usb_unlink_urb" },
	{ 0xf9a482f9, "msleep" },
	{ 0x817c07c7, "netif_device_attach" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x4292364c, "schedule" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x1b7d4074, "printk" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x1e62b30a, "usb_alloc_urb" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x5eea5f42, "usb_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0586p3400d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0ACEp1201d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v050Dp6051d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB0p6823d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1044p8005d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "7ABC1744309606AB6FEBEBB");
