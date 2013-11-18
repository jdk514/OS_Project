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
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x6ea09972, "snd_midi_channel_alloc_set" },
	{ 0x86eafb2b, "snd_device_register" },
	{ 0x6c3e9934, "snd_opl3_reset" },
	{ 0x4827a016, "del_timer" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x79a38abe, "snd_seq_instr_list_new" },
	{ 0xb9948d2c, "snd_midi_channel_free_set" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x5a3e4571, "snd_seq_fm_init" },
	{ 0x3e2facd3, "snd_seq_create_kernel_client" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xeb7ab73d, "snd_seq_instr_find" },
	{ 0x714b5958, "snd_seq_instr_list_free" },
	{ 0x1b7d4074, "printk" },
	{ 0xc622fb29, "snd_seq_device_unregister_driver" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x6c6f1a61, "snd_midi_process_event" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x7c6bfecc, "snd_seq_instr_free_use" },
	{ 0xf0a114f6, "snd_seq_device_register_driver" },
	{ 0x7f732446, "snd_seq_instr_event" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x5060a19, "snd_opl3_regmap" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0x6f68096f, "snd_seq_device_new" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0x1a592c7a, "snd_seq_event_port_attach" },
	{ 0xf2a644fb, "copy_from_user" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-seq-midi-emul,snd,snd-opl3-lib,snd-seq-instr,snd-ainstr-fm,snd-seq,snd-seq-device";


MODULE_INFO(srcversion, "A7C1AFF2DA23CC2D3E7EDCC");
