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
	{ 0x7cb19049, "snd_midi_event_reset_decode" },
	{ 0xbf834054, "snd_midi_event_reset_encode" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x1a724fcc, "snd_seq_kernel_client_ctl" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x2c90bf1d, "snd_rawmidi_kernel_release" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x3e2facd3, "snd_seq_create_kernel_client" },
	{ 0xe4f56774, "snd_rawmidi_kernel_open" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x1cabe748, "snd_midi_event_decode" },
	{ 0x4d848b69, "snd_rawmidi_input_params" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x326911b6, "snd_midi_event_new" },
	{ 0x7b8699eb, "snd_seq_event_port_detach" },
	{ 0xc622fb29, "snd_seq_device_unregister_driver" },
	{ 0x3e8084ae, "snd_rawmidi_drain_output" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xb5d25358, "snd_midi_event_free" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x19b471b8, "snd_rawmidi_kernel_write" },
	{ 0xf0a114f6, "snd_seq_device_register_driver" },
	{ 0x13478987, "snd_rawmidi_kernel_read" },
	{ 0x3a57f235, "snd_seq_autoload_unlock" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xc84df378, "snd_seq_dump_var_event" },
	{ 0xca2c52a5, "snd_rawmidi_output_params" },
	{ 0x37a0cba, "kfree" },
	{ 0xbd220a71, "snd_midi_event_encode" },
	{ 0x296b99f2, "snd_seq_kernel_client_dispatch" },
	{ 0xb90668b2, "snd_seq_autoload_lock" },
	{ 0x25da070, "snprintf" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0xfa06dafa, "snd_rawmidi_info_select" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-seq-midi-event,snd-seq,snd-rawmidi,snd-seq-device";


MODULE_INFO(srcversion, "4BE0EEE7EF58DFFDC165973");
