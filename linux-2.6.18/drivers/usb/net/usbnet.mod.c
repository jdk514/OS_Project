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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x8500dcf9, "usb_unlink_urb" },
	{ 0x7d11c268, "jiffies" },
	{ 0x96f7398e, "netif_rx" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x1b7d4074, "printk" },
	{ 0x178b9fcb, "usb_set_interface" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0xed5c73bf, "__tasklet_schedule" },
	{ 0x5598dc19, "register_netdev" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0x79ad224b, "tasklet_kill" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x13c12a56, "skb_queue_tail" },
	{ 0x817c07c7, "netif_device_attach" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0xf251c670, "netif_device_detach" },
	{ 0x548de514, "__alloc_skb" },
	{ 0xfa3601a2, "usb_get_dev" },
	{ 0xf692f74f, "usb_put_dev" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xe43d1a87, "usb_clear_halt" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x3a233a33, "skb_dequeue" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0x25da070, "snprintf" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0x1e62b30a, "usb_alloc_urb" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "179BF2123358D2626909656");
