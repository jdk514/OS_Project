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
	{ 0xf9a482f9, "msleep" },
	{ 0xafcfd397, "snd_info_unregister" },
	{ 0xd0ee38b8, "schedule_timeout_uninterruptible" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xbb0376d1, "snd_info_create_card_entry" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x6cec7683, "snd_device_new" },
	{ 0xcdfb7700, "device_register" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0xc66e58da, "ac97_bus_type" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x33196303, "snd_iprintf" },
	{ 0xb15cc7e0, "snd_pcm_hw_rule_add" },
	{ 0x80ca525b, "snd_component_add" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0xe663e462, "snd_ctl_remove_id" },
	{ 0xca7afd33, "snd_ctl_new1" },
	{ 0x43a96f0b, "snd_ctl_find_id" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x3f4fa3b8, "snd_info_free_entry" },
	{ 0x761ca99d, "device_unregister" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0x25da070, "snprintf" },
	{ 0xb94561ae, "snd_ctl_add" },
	{ 0x7143fb76, "snd_info_register" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd,snd-ac97-bus,snd-pcm";


MODULE_INFO(srcversion, "8EEF991029254ED39D117EE");
