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
	{ 0xb1922cfe, "skb_copy_bits" },
	{ 0x47ae5141, "ipv6_find_hdr" },
	{ 0x5219501f, "xt_register_match" },
	{ 0x60b4e935, "xt_unregister_match" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ip6_tables,x_tables";


MODULE_INFO(srcversion, "8C635B806BD25C034BA152D");
