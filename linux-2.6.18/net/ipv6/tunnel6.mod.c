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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xc4da29e3, "icmpv6_send" },
	{ 0x307f2317, "inet6_add_protocol" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xc4be936d, "__pskb_pull_tail" },
	{ 0x1b7d4074, "printk" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x9278bfec, "inet6_del_protocol" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ipv6";


MODULE_INFO(srcversion, "CD2AB556B2406031A4C20DE");
