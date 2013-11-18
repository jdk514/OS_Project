#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
};

static const struct modversion_info ____versions[]
__attribute_used__
__attribute__((section("__versions"))) = {
	{ 0xb499ef18, "struct_module" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x3165a85, "v4l2_ctrl_get_menu" },
	{ 0x1b7d4074, "printk" },
	{ 0xcd1ce001, "v4l2_ctrl_check" },
	{ 0x1c427ecb, "v4l2_ctrl_query_fill" },
	{ 0x2e60bace, "memcpy" },
	{ 0x25da070, "snprintf" },
	{ 0x5fef1b4a, "v4l2_ctrl_query_fill_std" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=v4l2-common";


MODULE_INFO(srcversion, "75187D3B276620A51727F91");
