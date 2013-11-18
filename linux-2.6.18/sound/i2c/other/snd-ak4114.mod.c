#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
};

static const struct modversion_info ____versions[]
__attribute_used__
__attribute__((section("__versions"))) = {
	{ 0xb499ef18, "struct_module" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xb47e2d3d, "snd_pcm_link_rwlock" },
	{ 0xf2766228, "__create_workqueue" },
	{ 0x6cec7683, "snd_device_new" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0xf67eee79, "snd_ctl_notify" },
	{ 0x31153eb8, "destroy_workqueue" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x553d0022, "_read_unlock_irqrestore" },
	{ 0xd0bbbd3f, "flush_workqueue" },
	{ 0x496a442, "_read_lock_irqsave" },
	{ 0xca7afd33, "snd_ctl_new1" },
	{ 0x2b81f57b, "snd_ctl_free_one" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x3ba34366, "snd_pcm_stop" },
	{ 0xb94561ae, "snd_ctl_add" },
	{ 0x622ab174, "queue_delayed_work" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd";


MODULE_INFO(srcversion, "4A135194F1BAE9F81444B29");
