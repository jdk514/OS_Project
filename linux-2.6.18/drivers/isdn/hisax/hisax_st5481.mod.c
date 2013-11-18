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
	{ 0xb689b091, "usb_altnum_to_altsetting" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xf0a16657, "FsmNew" },
	{ 0x277685da, "isdnhdlc_out_init" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0x5635c457, "usb_reset_configuration" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x8500dcf9, "usb_unlink_urb" },
	{ 0xd79051bc, "FsmInitTimer" },
	{ 0x148f0c99, "FsmFree" },
	{ 0x52a6537c, "isdnhdlc_encode" },
	{ 0x5eea5f42, "usb_deregister" },
	{ 0x1b7d4074, "printk" },
	{ 0x178b9fcb, "usb_set_interface" },
	{ 0x1dc6a9fc, "isdnhdlc_rcv_init" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x93a64734, "FsmChangeState" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x1a1afeef, "isdnhdlc_decode" },
	{ 0x37a0cba, "kfree" },
	{ 0xee93522c, "hisax_register" },
	{ 0x50679ae0, "FsmRestartTimer" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x7f4f2ce, "hisax_unregister" },
	{ 0xb4cfa53e, "usb_ifnum_to_if" },
	{ 0x5c117c72, "usb_get_current_frame_number" },
	{ 0x9df0cd27, "FsmEvent" },
	{ 0x782b0008, "vsprintf" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0xe82c3e32, "isdnhdlc_bit_rev_tab" },
	{ 0xfbb4b63, "FsmDelTimer" },
	{ 0x1e62b30a, "usb_alloc_urb" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=hisax,isdnhdlc";

MODULE_ALIAS("usb:v0483p4810d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0483p4811d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0483p4812d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0483p4813d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0483p4814d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0483p4815d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0483p4816d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0483p4817d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0483p4818d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0483p4819d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0483p481Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0483p481Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0483p481Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0483p481Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0483p481Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0483p481Fd*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "CA540A3E9533ACFD6606553");
