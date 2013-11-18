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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3d4b2dfc, "snd_pcm_hw_constraint_step" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x8c0be9b4, "queue_work" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0xf2766228, "__create_workqueue" },
	{ 0x6cec7683, "snd_device_new" },
	{ 0x264f7a06, "snd_pcm_hw_constraint_list" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x4f122b2, "snd_ctl_elem_write" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x31153eb8, "destroy_workqueue" },
	{ 0x637ca2ee, "snd_ctl_elem_read" },
	{ 0x33196303, "snd_iprintf" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x80ca525b, "snd_component_add" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0xca7afd33, "snd_ctl_new1" },
	{ 0x43a96f0b, "snd_ctl_find_id" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x3383c7e4, "snd_card_proc_new" },
	{ 0x25da070, "snprintf" },
	{ 0xb94561ae, "snd_ctl_add" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd";


MODULE_INFO(srcversion, "942B8700120F2ACD57D80E0");
