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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x61bed476, "up_read" },
	{ 0x5511347d, "snd_register_device" },
	{ 0x86eafb2b, "snd_device_register" },
	{ 0xafcfd397, "snd_info_unregister" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x70b15139, "snd_card_file_remove" },
	{ 0x2a30b913, "snd_device_free" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x60ea5fe7, "__tasklet_hi_schedule" },
	{ 0xbb0376d1, "snd_info_create_card_entry" },
	{ 0x806d5133, "param_array_get" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x1985af2a, "down_read" },
	{ 0x7a9bb45, "snd_ctl_unregister_ioctl" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x6cec7683, "snd_device_new" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0x92f5c687, "snd_unregister_device" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x8f595b11, "snd_major" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0x33196303, "snd_iprintf" },
	{ 0x79ad224b, "tasklet_kill" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x924538af, "snd_card_file_add" },
	{ 0x8ed4e98c, "snd_ctl_register_ioctl" },
	{ 0x4292364c, "schedule" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0x4b2cf7b6, "snd_register_oss_device" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x220096e, "snd_unregister_oss_device" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x3f4fa3b8, "snd_info_free_entry" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x6f68096f, "snd_seq_device_new" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x7143fb76, "snd_info_register" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd,snd-seq-device";


MODULE_INFO(srcversion, "F56E82DE2CA15CC9B0ABC38");