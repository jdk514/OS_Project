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
	{ 0x189e902a, "snd_util_mem_avail" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x86eafb2b, "snd_device_register" },
	{ 0xafcfd397, "snd_info_unregister" },
	{ 0x4827a016, "del_timer" },
	{ 0x2a30b913, "snd_device_free" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xbb0376d1, "snd_info_create_card_entry" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x3e2facd3, "snd_seq_create_kernel_client" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x7d11c268, "jiffies" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x7b8699eb, "snd_seq_event_port_detach" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x5152e605, "memcmp" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x6c6f1a61, "snd_midi_process_event" },
	{ 0xc83b92d1, "snd_hwdep_new" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x33196303, "snd_iprintf" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x833a3e07, "snd_midi_channel_set_clear" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x3f4fa3b8, "snd_info_free_entry" },
	{ 0xeb41c41f, "snd_virmidi_new" },
	{ 0xcca08f65, "snd_card_register" },
	{ 0x6f68096f, "snd_seq_device_new" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0x1a592c7a, "snd_seq_event_port_attach" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x7143fb76, "snd_info_register" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-util-mem,snd,snd-seq,snd-seq-midi-emul,snd-hwdep,snd-seq-virmidi,snd-seq-device";


MODULE_INFO(srcversion, "1602543559E41ACFCA4F7E6");
