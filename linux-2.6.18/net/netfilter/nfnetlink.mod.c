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
	{ 0x3cc0dd6c, "security_ops" },
	{ 0xd471f34e, "netlink_has_listeners" },
	{ 0x81cbc788, "sock_release" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x7e011933, "netlink_kernel_create" },
	{ 0x1b7d4074, "printk" },
	{ 0x2cd3086, "__down_failed_trylock" },
	{ 0x942aa696, "netlink_unicast" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x5e66a425, "netlink_broadcast" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x31ab552f, "netlink_ack" },
	{ 0x98adfde2, "request_module" },
	{ 0x3a233a33, "skb_dequeue" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x96b27088, "__down_failed" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "534CCF99A5723062787C661");
