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
	{ 0x43384d21, "snd_emux_new" },
	{ 0xf38508a1, "snd_emu10k1_synth_alloc" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x25bb7fa1, "snd_emux_register" },
	{ 0xaead3beb, "snd_emu10k1_memblk_map" },
	{ 0xb52877c1, "snd_emu10k1_voice_alloc" },
	{ 0xb72e729f, "snd_emu10k1_synth_bzero" },
	{ 0xc622fb29, "snd_seq_device_unregister_driver" },
	{ 0x11581439, "snd_emux_free" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xe65395e7, "snd_emu10k1_ptr_write" },
	{ 0xf8dc04d, "snd_emu10k1_synth_free" },
	{ 0xf0a114f6, "snd_seq_device_register_driver" },
	{ 0x4fb899e7, "snd_emu10k1_voice_free" },
	{ 0x2e60bace, "memcpy" },
	{ 0x470d940e, "snd_emu10k1_synth_copy_from_user" },
	{ 0x61ab1dd0, "snd_emu10k1_ptr_read" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-emux-synth,snd-emu10k1,snd-seq-device";


MODULE_INFO(srcversion, "358DD117ABE3E4C41BA08C4");
