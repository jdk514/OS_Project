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
	{ 0x3d4b2dfc, "snd_pcm_hw_constraint_step" },
	{ 0x694ccf5f, "snd_pcm_period_elapsed" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x60ea5fe7, "__tasklet_hi_schedule" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xb7ac29e7, "snd_pcm_suspend_all" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0xaa52daa7, "snd_pcm_set_ops" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0x16ea202a, "snd_pcm_lib_ioctl" },
	{ 0x33196303, "snd_iprintf" },
	{ 0xca7afd33, "snd_ctl_new1" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x3796bdcc, "snd_pcm_format_little_endian" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x70dc0e3, "request_firmware" },
	{ 0x3383c7e4, "snd_card_proc_new" },
	{ 0xcca08f65, "snd_card_register" },
	{ 0xa9e2ba2c, "snd_pcm_new" },
	{ 0x96f21b16, "vmalloc_to_page" },
	{ 0xb94561ae, "snd_ctl_add" },
	{ 0x33934162, "release_firmware" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd";


MODULE_INFO(srcversion, "CDE3E30A24D4ED7D5F76397");
