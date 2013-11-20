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
	{ 0x84e549a0, "platform_device_register_simple" },
	{ 0x806d5133, "param_array_get" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0xaa136450, "param_get_charp" },
	{ 0x1b7d4074, "printk" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x2c077a33, "platform_device_unregister" },
	{ 0x76e04e0, "platform_driver_register" },
	{ 0x6dacee5f, "snd_card_new" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0xeb41c41f, "snd_virmidi_new" },
	{ 0xe15f1df, "snd_card_free" },
	{ 0xcca08f65, "snd_card_register" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0x11f83bd2, "platform_driver_unregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd,snd-seq-virmidi";


MODULE_INFO(srcversion, "FA7EC5D028390D0CAD56ED2");