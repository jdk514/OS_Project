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
	{ 0xd8c152cd, "raise_softirq_irqoff" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xe8e53e56, "per_cpu__softnet_data" },
	{ 0x7d11c268, "jiffies" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0x5598dc19, "register_netdev" },
	{ 0x1e62b30a, "usb_alloc_urb" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0x817c07c7, "netif_device_attach" },
	{ 0x7dceceac, "capable" },
	{ 0x25da070, "snprintf" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0x8500dcf9, "usb_unlink_urb" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0x79ad224b, "tasklet_kill" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xf08a9ea, "usb_kill_urb" },
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
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0BDAp8150d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0411p0012d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v3980p0003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p401Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0586p401Ad*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "11EC11028FBF2A33E1FFAAD");
