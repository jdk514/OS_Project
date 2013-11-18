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
	{ 0xe3038592, "skb_under_panic" },
	{ 0xed5c73bf, "__tasklet_schedule" },
	{ 0x807a89d4, "__net_timestamp" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0xd87fe4c2, "hci_register_dev" },
	{ 0x911fb10d, "hci_alloc_dev" },
	{ 0x33934162, "release_firmware" },
	{ 0xbb7ca41d, "usb_bulk_msg" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0x70dc0e3, "request_firmware" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x3d7c39ea, "_read_lock" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0xacd81448, "skb_queue_head" },
	{ 0x68c861cc, "skb_unlink" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x1e62b30a, "usb_alloc_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x21a1d9de, "hci_free_dev" },
	{ 0x1b7d4074, "printk" },
	{ 0x168b4917, "hci_unregister_dev" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0x13c12a56, "skb_queue_tail" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0x52c0a61d, "_write_unlock_irqrestore" },
	{ 0x3093180f, "_write_lock_irqsave" },
	{ 0xf21a8115, "skb_queue_purge" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x3a233a33, "skb_dequeue" },
	{ 0x5eea5f42, "usb_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=bluetooth";

MODULE_ALIAS("usb:v057Cp2200d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "7D1FCC5996766D9A0965C9A");
