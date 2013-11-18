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
	{ 0xaa136450, "param_get_charp" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x7d11c268, "jiffies" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0xf692f74f, "usb_put_dev" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x5598dc19, "register_netdev" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1e62b30a, "usb_alloc_urb" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0xfa3601a2, "usb_get_dev" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x7dceceac, "capable" },
	{ 0x15b22ef2, "mii_link_ok" },
	{ 0x7f374097, "mii_nway_restart" },
	{ 0xb16b8e31, "mii_ethtool_sset" },
	{ 0x375cd688, "mii_ethtool_gset" },
	{ 0x25da070, "snprintf" },
	{ 0x79ad224b, "tasklet_kill" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0x8500dcf9, "usb_unlink_urb" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0xf2766228, "__create_workqueue" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x85df9b6c, "strsep" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x4292364c, "schedule" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0x622ab174, "queue_delayed_work" },
	{ 0x817c07c7, "netif_device_attach" },
	{ 0xc767785d, "netif_carrier_on" },
	{ 0xa99d5102, "netif_carrier_off" },
	{ 0xed5c73bf, "__tasklet_schedule" },
	{ 0xf251c670, "netif_device_detach" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x96f7398e, "netif_rx" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x1b7d4074, "printk" },
	{ 0x5eea5f42, "usb_deregister" },
	{ 0x31153eb8, "destroy_workqueue" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=mii";

MODULE_ALIAS("usb:v0506p4601d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0557p2007d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p110Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p4104d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p4004d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p4007d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p4102d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p4002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p400Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p400Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8pABC1d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p200Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v083Ap1046d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v083Ap5046d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v083ApB004d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07A6p8511d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07A6p8513d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07A6p8515d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07A6p0986d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07A6p07C2d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v3334p1701d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07C9pB100d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v050Dp0121d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v08DDp0986d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v08DDp0987d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v049Fp8511d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v08DDp0988d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v08DDp8511d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07AAp0004d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07AAp000Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p4001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p4002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p4102d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p400Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p200Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p4003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001pABC1d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB7p0002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v056Ep4010d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1342p0304d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05CCp3000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1044p8002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0E66p400Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v03F0p811Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04BBp0904d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04BBp0913d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0951p000Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v056Ep4002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v056Ep4005d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v056Ep400Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v056EpABC1d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v056Ep200Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v066Bp2202d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v066Bp2203d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v066Bp2204d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v066Bp2206d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v077Bp08B4d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v066Bp400Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v066Bp200Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0411p0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0411p0005d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0411p0009d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep007Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0846p1020d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B39p0109d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B39p0901d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v08D1p0003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0707p0200d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0707p0201d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v15E8p9100d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v15E8p9110d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v067Cp1001d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "EF09FC70A535C2C4EEF48DC");
