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
	{ 0x52c0a61d, "_write_unlock_irqrestore" },
	{ 0xbf834054, "snd_midi_event_reset_encode" },
	{ 0x3d7c39ea, "_read_lock" },
	{ 0x1a724fcc, "snd_seq_kernel_client_ctl" },
	{ 0x2a30b913, "snd_device_free" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x3093180f, "_write_lock_irqsave" },
	{ 0x3e2facd3, "snd_seq_create_kernel_client" },
	{ 0x30604317, "snd_rawmidi_set_ops" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x1cabe748, "snd_midi_event_decode" },
	{ 0x818cf303, "snd_rawmidi_new" },
	{ 0x326911b6, "snd_midi_event_new" },
	{ 0x1b7d4074, "printk" },
	{ 0x2f378fc0, "snd_rawmidi_transmit_peek" },
	{ 0xb5d25358, "snd_midi_event_free" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xed52da0d, "snd_rawmidi_transmit_ack" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xc84df378, "snd_seq_dump_var_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xbd220a71, "snd_midi_event_encode" },
	{ 0x296b99f2, "snd_seq_kernel_client_dispatch" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0x843984d1, "snd_rawmidi_receive" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-seq-midi-event,snd-seq,snd,snd-rawmidi";


MODULE_INFO(srcversion, "15C526EC25DD87C3FE50082");
