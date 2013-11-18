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
	{ 0x4827a016, "del_timer" },
	{ 0x2a30b913, "snd_device_free" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x30604317, "snd_rawmidi_set_ops" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0x818cf303, "snd_rawmidi_new" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0x1b7d4074, "printk" },
	{ 0x2f378fc0, "snd_rawmidi_transmit_peek" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x376e04bf, "release_and_free_resource" },
	{ 0xed52da0d, "snd_rawmidi_transmit_ack" },
	{ 0x26e96637, "request_irq" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x25da070, "snprintf" },
	{ 0x843984d1, "snd_rawmidi_receive" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd,snd-rawmidi";


MODULE_INFO(srcversion, "10CA970F580AAFCD89CCAD1");
