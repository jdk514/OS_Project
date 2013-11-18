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
	{ 0xcf406fc8, "netpoll_queue" },
	{ 0x93304684, "param_get_string" },
	{ 0x683a3221, "param_set_copystring" },
	{ 0x7925bbf, "netpoll_send_udp" },
	{ 0x1b7d4074, "printk" },
	{ 0xc1edf4ae, "register_console" },
	{ 0xf99f9391, "netpoll_setup" },
	{ 0xba04cf4e, "netpoll_parse_options" },
	{ 0x6c0a152, "netpoll_cleanup" },
	{ 0x8264068, "unregister_console" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D0F8915C20C731A3D727E73");
