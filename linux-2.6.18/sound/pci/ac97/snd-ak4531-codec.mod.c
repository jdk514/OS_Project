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
	{ 0xab978df6, "malloc_sizes" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x6cec7683, "snd_device_new" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x33196303, "snd_iprintf" },
	{ 0x80ca525b, "snd_component_add" },
	{ 0xca7afd33, "snd_ctl_new1" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x3383c7e4, "snd_card_proc_new" },
	{ 0xb94561ae, "snd_ctl_add" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd";


MODULE_INFO(srcversion, "2349A2858CFD29DFA8090C5");
