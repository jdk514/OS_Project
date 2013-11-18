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
	{ 0xacd81448, "skb_queue_head" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x4827a016, "del_timer" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x28b5b02b, "gigaset_shutdown" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0x75811312, "crc_ccitt_table" },
	{ 0x1535d2fd, "gigaset_stop" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x8500dcf9, "usb_unlink_urb" },
	{ 0x7d11c268, "jiffies" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x54067c8e, "gigaset_freedriver" },
	{ 0x5eea5f42, "usb_deregister" },
	{ 0x1b7d4074, "printk" },
	{ 0x178b9fcb, "usb_set_interface" },
	{ 0xed5c73bf, "__tasklet_schedule" },
	{ 0x55c76bca, "gigaset_initdriver" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0x79ad224b, "tasklet_kill" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x13c12a56, "skb_queue_tail" },
	{ 0x23ecdefa, "gigaset_blockdriver" },
	{ 0xa3bb492b, "gigaset_initcs" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x548de514, "__alloc_skb" },
	{ 0xfa3601a2, "usb_get_dev" },
	{ 0x50271fed, "gigaset_if_receive" },
	{ 0x39581e4, "gigaset_unassign" },
	{ 0xf692f74f, "usb_put_dev" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x136d892e, "gigaset_handle_modem_response" },
	{ 0x75af1765, "gigaset_skb_sent" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x13eaec8e, "gigaset_freecs" },
	{ 0x583aae91, "gigaset_getunassignedcs" },
	{ 0xda61158f, "gigaset_add_event" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xe62847ff, "gigaset_fill_inbuf" },
	{ 0x37a0cba, "kfree" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x3a233a33, "skb_dequeue" },
	{ 0x739dec2a, "gigaset_invtab" },
	{ 0x77d122e1, "gigaset_dbg_buffer" },
	{ 0x25da070, "snprintf" },
	{ 0x5e1c1dec, "gigaset_start" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0x1e62b30a, "usb_alloc_urb" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=gigaset,crc-ccitt";

MODULE_ALIAS("usb:v0681p0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0681p0002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0681p0021d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0681p0022d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "AD08E50B293FD99DE3EC41C");
