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
	{ 0xc147557a, "release_sock" },
	{ 0xf7b108c4, "ppp_unregister_channel" },
	{ 0x8123901d, "lock_sock" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x69b50ff6, "sock_register" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x2394a062, "sock_unregister" },
	{ 0xff21308, "ppp_channel_index" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ppp_generic";


MODULE_INFO(srcversion, "9D261F8AC106C4EC2797426");
