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
	{ 0x8235805b, "memmove" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xc3c79136, "skb_copy_expand" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x156a70fb, "skb_checksum_help" },
	{ 0xf55f4ac6, "skb_make_writable" },
	{ 0xfcf2e40e, "xt_register_target" },
	{ 0x9a3de8f8, "csum_partial" },
	{ 0x1b7d4074, "printk" },
	{ 0x786fab6c, "xt_unregister_target" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=x_tables";


MODULE_INFO(srcversion, "F3B409286027096A76ACDD1");
