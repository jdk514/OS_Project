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
	{ 0xc9b27289, "rtc_control" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xb06cbc7, "snd_timer_global_new" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xeddfe49d, "rtc_unregister" },
	{ 0x1b7d4074, "printk" },
	{ 0x2e60bace, "memcpy" },
	{ 0x7744a796, "snd_timer_interrupt" },
	{ 0x9e309b4a, "snd_timer_global_register" },
	{ 0xfdab2b9c, "rtc_register" },
	{ 0x5373b9a9, "snd_timer_global_unregister" },
	{ 0xd463c4ef, "snd_timer_global_free" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-timer";


MODULE_INFO(srcversion, "67B6638A04361E0D4737CE9");
