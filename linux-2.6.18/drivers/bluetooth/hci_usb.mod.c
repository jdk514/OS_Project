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
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xed5c73bf, "__tasklet_schedule" },
	{ 0x807a89d4, "__net_timestamp" },
	{ 0xd87fe4c2, "hci_register_dev" },
	{ 0x13c12a56, "skb_queue_tail" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x911fb10d, "hci_alloc_dev" },
	{ 0x178b9fcb, "usb_set_interface" },
	{ 0xf5b66452, "usb_driver_claim_interface" },
	{ 0xb4cfa53e, "usb_ifnum_to_if" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xa7e27341, "usb_match_id" },
	{ 0x8d8663bb, "hci_suspend_dev" },
	{ 0x21a1d9de, "hci_free_dev" },
	{ 0x168b4917, "hci_unregister_dev" },
	{ 0xb3fc97e2, "usb_driver_release_interface" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x3d7c39ea, "_read_lock" },
	{ 0xacd81448, "skb_queue_head" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x3a233a33, "skb_dequeue" },
	{ 0xa3f10c90, "usb_init_urb" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0x52c0a61d, "_write_unlock_irqrestore" },
	{ 0x3093180f, "_write_lock_irqsave" },
	{ 0xf21a8115, "skb_queue_purge" },
	{ 0x37a0cba, "kfree" },
	{ 0x1b7d4074, "printk" },
	{ 0xcacc0fd4, "hci_resume_dev" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x5eea5f42, "usb_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=bluetooth";

MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp01ic*isc*ip*");
MODULE_ALIAS("usb:v057Cp3800d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04BFp030Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v044Ep3001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v044Ep3002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDBp1002d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "F5F3104040EC4B01BBEFAA5");
