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
	{ 0x4c3af445, "__request_region" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x4827a016, "del_timer" },
	{ 0x84e549a0, "platform_device_register_simple" },
	{ 0x1992a2ba, "param_set_long" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0x818cf303, "snd_rawmidi_new" },
	{ 0xaa136450, "param_get_charp" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0x1b7d4074, "printk" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x2c077a33, "platform_device_unregister" },
	{ 0x376e04bf, "release_and_free_resource" },
	{ 0x76e04e0, "platform_driver_register" },
	{ 0x6dacee5f, "snd_card_new" },
	{ 0x53a21daf, "param_get_long" },
	{ 0x26e96637, "request_irq" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0xe15f1df, "snd_card_free" },
	{ 0xcca08f65, "snd_card_register" },
	{ 0x25da070, "snprintf" },
	{ 0x11f83bd2, "platform_driver_unregister" },
	{ 0xbcc5d6f2, "snd_rawmidi_transmit" },
	{ 0x843984d1, "snd_rawmidi_receive" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-rawmidi,snd";


MODULE_INFO(srcversion, "30B9D6C31755C0589F1A8C0");
