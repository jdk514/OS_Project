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
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0x61bed476, "up_read" },
	{ 0xfaa3413b, "snd_ctl_find_numid" },
	{ 0xafcfd397, "snd_info_unregister" },
	{ 0x70b15139, "snd_card_file_remove" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xbb0376d1, "snd_info_create_card_entry" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x1985af2a, "down_read" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0xf67eee79, "snd_ctl_notify" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x9d5a5fd4, "snd_cards" },
	{ 0x33196303, "snd_iprintf" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xeff7a960, "snd_mixer_oss_notify_callback" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x924538af, "snd_card_file_add" },
	{ 0x4b2cf7b6, "snd_register_oss_device" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x43a96f0b, "snd_ctl_find_id" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x220096e, "snd_unregister_oss_device" },
	{ 0xb213fe8b, "snd_info_get_str" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x3f4fa3b8, "snd_info_free_entry" },
	{ 0x7143fb76, "snd_info_register" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd";


MODULE_INFO(srcversion, "0EC3F6D55918FE662A7086B");
