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
	{ 0x61bed476, "up_read" },
	{ 0x5511347d, "snd_register_device" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xafcfd397, "snd_info_unregister" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x3d7c39ea, "_read_lock" },
	{ 0xd0ee38b8, "schedule_timeout_uninterruptible" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x3093180f, "_write_lock_irqsave" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x6339b6d0, "snd_seq_device_load_drivers" },
	{ 0x806d5133, "param_array_get" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x1985af2a, "down_read" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x4ff943ae, "mutex_lock_interruptible" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0x92f5c687, "snd_unregister_device" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x3971b4df, "snd_ecards_limit" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xe68179f6, "snd_timer_pause" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x1ab174a2, "snd_timer_resolution" },
	{ 0xde0c05c3, "up_write" },
	{ 0xbca92367, "down_write" },
	{ 0x33196303, "snd_iprintf" },
	{ 0x6c64e3f3, "snd_timer_start" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x4292364c, "schedule" },
	{ 0xe0ab832, "snd_timer_open" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x3a57f235, "snd_seq_autoload_unlock" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x6989a769, "vsnprintf" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0xd0a9db6d, "snd_timer_close" },
	{ 0x928120a, "snd_seq_root" },
	{ 0x98adfde2, "request_module" },
	{ 0x3f4fa3b8, "snd_info_free_entry" },
	{ 0xb90668b2, "snd_seq_autoload_lock" },
	{ 0x4a3ea5c0, "snd_request_card" },
	{ 0x25da070, "snprintf" },
	{ 0x9258a2d7, "snd_info_create_module_entry" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x7143fb76, "snd_info_register" },
	{ 0xf1f0ab07, "__init_rwsem" },
	{ 0xb6cd3ef8, "snd_timer_stop" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd,snd-seq-device,snd-timer";


MODULE_INFO(srcversion, "142DCC74914957E5C371009");
