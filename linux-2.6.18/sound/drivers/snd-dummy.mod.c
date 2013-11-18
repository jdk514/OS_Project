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
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x4827a016, "del_timer" },
	{ 0x694ccf5f, "snd_pcm_period_elapsed" },
	{ 0x84e549a0, "platform_device_register_simple" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x806d5133, "param_array_get" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x7d11c268, "jiffies" },
	{ 0xb7ac29e7, "snd_pcm_suspend_all" },
	{ 0xaa136450, "param_get_charp" },
	{ 0x1b7d4074, "printk" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0xaa52daa7, "snd_pcm_set_ops" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0xfd978e66, "snd_pcm_lib_free_pages" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x2c077a33, "platform_device_unregister" },
	{ 0x76e04e0, "platform_driver_register" },
	{ 0x16ea202a, "snd_pcm_lib_ioctl" },
	{ 0xdef754b1, "snd_pcm_lib_malloc_pages" },
	{ 0x6dacee5f, "snd_card_new" },
	{ 0xca7afd33, "snd_ctl_new1" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x9e02fba2, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0xe15f1df, "snd_card_free" },
	{ 0xcca08f65, "snd_card_register" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xa9e2ba2c, "snd_pcm_new" },
	{ 0xb94561ae, "snd_ctl_add" },
	{ 0x11f83bd2, "platform_driver_unregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd";


MODULE_INFO(srcversion, "1C26267B5A9C38F1E81B547");
