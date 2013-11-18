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
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x29a8a17e, "ip_vs_skb_replace" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xf57e99fa, "ip_vs_conn_out_get" },
	{ 0xa1bb9d5, "ip_vs_conn_put" },
	{ 0xea43c209, "ip_vs_tcp_conn_listen" },
	{ 0x37d9342e, "ip_vs_conn_new" },
	{ 0xfb659d96, "ip_vs_conn_in_get" },
	{ 0xa5004dc6, "ip_vs_make_skb_writable" },
	{ 0x67c8b38e, "register_ip_vs_app_inc" },
	{ 0x1b7d4074, "printk" },
	{ 0xee9708c0, "register_ip_vs_app" },
	{ 0x4e830a3e, "strnicmp" },
	{ 0x9125955b, "unregister_ip_vs_app" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ip_vs";


MODULE_INFO(srcversion, "F6F6294AC4A059EA3EC120E");
