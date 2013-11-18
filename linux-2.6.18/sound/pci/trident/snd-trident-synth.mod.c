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
	{ 0xea7e3433, "snd_trident_free_voice" },
	{ 0x6ea09972, "snd_midi_channel_alloc_set" },
	{ 0x1a724fcc, "snd_seq_kernel_client_ctl" },
	{ 0x4d142c5f, "snd_dma_alloc_pages" },
	{ 0x79a38abe, "snd_seq_instr_list_new" },
	{ 0xd5791cfd, "snd_seq_simple_init" },
	{ 0x955a2c70, "snd_trident_synth_copy_from_user" },
	{ 0x2315f946, "snd_seq_instr_list_free_cond" },
	{ 0xb9948d2c, "snd_midi_channel_free_set" },
	{ 0xf6e32034, "snd_trident_stop_voice" },
	{ 0x3e2facd3, "snd_seq_create_kernel_client" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xeb7ab73d, "snd_seq_instr_find" },
	{ 0x714b5958, "snd_seq_instr_list_free" },
	{ 0x5263bc62, "snd_trident_synth_alloc" },
	{ 0xc622fb29, "snd_seq_device_unregister_driver" },
	{ 0x5152e605, "memcmp" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x9b13b2fa, "snd_trident_write_voice_regs" },
	{ 0x7c6bfecc, "snd_seq_instr_free_use" },
	{ 0xf0a114f6, "snd_seq_device_register_driver" },
	{ 0x3fa6262e, "snd_dma_free_pages" },
	{ 0x7f732446, "snd_seq_instr_event" },
	{ 0x277ec0e, "snd_trident_start_voice" },
	{ 0x2e60bace, "memcpy" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0x1a592c7a, "snd_seq_event_port_attach" },
	{ 0x74174c91, "snd_trident_synth_free" },
	{ 0x6aeac0df, "snd_trident_alloc_voice" },
	{ 0xf2a644fb, "copy_from_user" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-trident,snd-seq-midi-emul,snd-seq,snd-page-alloc,snd-seq-instr,snd-ainstr-simple,snd-seq-device";


MODULE_INFO(srcversion, "88607E97B2B56E7A4ADCFC1");
