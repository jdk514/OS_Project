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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xafcfd397, "snd_info_unregister" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x5e7f4920, "snd_pcm_format_set_silence" },
	{ 0x70b15139, "snd_card_file_remove" },
	{ 0x89b62942, "snd_pcm_lib_write" },
	{ 0x23e9305d, "snd_pcm_release_substream" },
	{ 0x76fdb5d6, "snd_pcm_notify" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x4f816e9b, "snd_pcm_format_big_endian" },
	{ 0xbb0376d1, "snd_info_create_card_entry" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x806d5133, "param_array_get" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0x93b3f3f2, "snd_pcm_hw_refine" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xb47e2d3d, "snd_pcm_link_rwlock" },
	{ 0x1d027e4b, "snd_pcm_format_signed" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xf5283172, "snd_pcm_build_linear_format" },
	{ 0x9fdea959, "snd_pcm_hw_param_value" },
	{ 0x1b7d4074, "printk" },
	{ 0x5152e605, "memcmp" },
	{ 0x66bda31e, "snd_pcm_hw_param_last" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x98534f3f, "snd_pcm_mmap_data" },
	{ 0x6ef8fcd8, "snd_pcm_format_linear" },
	{ 0x33196303, "snd_iprintf" },
	{ 0x4436d671, "snd_mixer_oss_ioctl_card" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xd5a1b3b2, "snd_pcm_lib_writev" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x924538af, "snd_card_file_add" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0x4292364c, "schedule" },
	{ 0x5a0e1e92, "_read_lock_irq" },
	{ 0xac99dd6d, "snd_pcm_lib_readv" },
	{ 0x4b2cf7b6, "snd_register_oss_device" },
	{ 0xa3443c05, "snd_pcm_open_substream" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x650f8603, "snd_pcm_format_silence_64" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x220096e, "snd_unregister_oss_device" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0xb213fe8b, "snd_info_get_str" },
	{ 0x37a0cba, "kfree" },
	{ 0x7c5cec98, "_snd_pcm_hw_params_any" },
	{ 0x2e60bace, "memcpy" },
	{ 0xa61aa028, "snd_pcm_format_unsigned" },
	{ 0x3f4fa3b8, "snd_info_free_entry" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xd41bc207, "snd_pcm_kernel_ioctl" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x7143fb76, "snd_info_register" },
	{ 0x53a1dc0, "snd_pcm_hw_param_first" },
	{ 0x12245415, "snd_pcm_lib_read" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd,snd-mixer-oss";


MODULE_INFO(srcversion, "59CE89A606DCF7753A25DA1");
