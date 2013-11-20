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
	{ 0xd646fc13, "nf_register_hooks" },
	{ 0x2d97e089, "ipt_register_table" },
	{ 0x7e1056b3, "ip_route_me_harder" },
	{ 0x1b7d4074, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xee272c69, "ipt_do_table" },
	{ 0x9bf3fced, "ipt_unregister_table" },
	{ 0x87301eb3, "nf_unregister_hooks" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ip_tables";


MODULE_INFO(srcversion, "7B2EEF2259C860FB29773D0");