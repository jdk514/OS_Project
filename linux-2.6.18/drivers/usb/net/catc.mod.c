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
	{ 0xf7013d4e, "ethtool_op_get_link" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x5598dc19, "register_netdev" },
	{ 0x1e62b30a, "usb_alloc_urb" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0x178b9fcb, "usb_set_interface" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0x25da070, "snprintf" },
	{ 0x8500dcf9, "usb_unlink_urb" },
	{ 0xa99d5102, "netif_carrier_off" },
	{ 0xc767785d, "netif_carrier_on" },
	{ 0x96f7398e, "netif_rx" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x548de514, "__alloc_skb" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0xf3b39202, "mod_timer" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x7d11c268, "jiffies" },
	{ 0x1b7d4074, "printk" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0x5eea5f42, "usb_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0423p000Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0423p000Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v08D1p0001d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "5834AFBC6C44234357C4922");
