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
	{ 0x7b5085be, "xfrm_register_mode" },
	{ 0x8235805b, "memmove" },
	{ 0x3235dbeb, "pskb_expand_head" },
	{ 0xc4be936d, "__pskb_pull_tail" },
	{ 0xf0a6ee24, "__ip_select_ident" },
	{ 0xe3038592, "skb_under_panic" },
	{ 0xadeb8017, "xfrm_unregister_mode" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E8D8AB7C5855ECCB943C792");