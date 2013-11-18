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
	{ 0xafcfd397, "snd_info_unregister" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x1a724fcc, "snd_seq_kernel_client_ctl" },
	{ 0xd61f5907, "snd_midi_event_encode_byte" },
	{ 0x775a6e71, "snd_seq_kernel_client_write_poll" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x3e2facd3, "snd_seq_create_kernel_client" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x1cabe748, "snd_midi_event_decode" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x326911b6, "snd_midi_event_new" },
	{ 0x7b8699eb, "snd_seq_event_port_detach" },
	{ 0x1b7d4074, "printk" },
	{ 0xc622fb29, "snd_seq_device_unregister_driver" },
	{ 0x89947013, "snd_use_lock_sync_helper" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xb401ffd7, "snd_midi_event_no_status" },
	{ 0x33196303, "snd_iprintf" },
	{ 0xb5d25358, "snd_midi_event_free" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xf0a114f6, "snd_seq_device_register_driver" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0x4b2cf7b6, "snd_register_oss_device" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x3a57f235, "snd_seq_autoload_unlock" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x220096e, "snd_unregister_oss_device" },
	{ 0x62820c5f, "snd_seq_kernel_client_enqueue_blocking" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x928120a, "snd_seq_root" },
	{ 0x3f4fa3b8, "snd_info_free_entry" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0x296b99f2, "snd_seq_kernel_client_dispatch" },
	{ 0x865edc9b, "finish_wait" },
	{ 0xb90668b2, "snd_seq_autoload_lock" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0x9258a2d7, "snd_info_create_module_entry" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0xb8e448a0, "snd_seq_set_queue_tempo" },
	{ 0x7143fb76, "snd_info_register" },
	{ 0x66212d85, "snd_seq_kernel_client_enqueue" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd,snd-seq,snd-seq-midi-event,snd-seq-device";


MODULE_INFO(srcversion, "B68E3AD3E9A78B1FAEA38B8");
