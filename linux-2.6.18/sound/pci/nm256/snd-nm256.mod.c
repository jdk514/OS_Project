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
	{ 0x4c3af445, "__request_region" },
	{ 0xf9a482f9, "msleep" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xdc3eaf70, "iomem_resource" },
	{ 0x694ccf5f, "snd_pcm_period_elapsed" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xa21146cd, "snd_pcm_lib_mmap_iomem" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xb7ac29e7, "snd_pcm_suspend_all" },
	{ 0xaa136450, "param_get_charp" },
	{ 0x6cec7683, "snd_device_new" },
	{ 0x49653ec1, "pci_restore_state" },
	{ 0x264f7a06, "snd_pcm_hw_constraint_list" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0xaa52daa7, "snd_pcm_set_ops" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x376e04bf, "release_and_free_resource" },
	{ 0x16ea202a, "snd_pcm_lib_ioctl" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xb03abe80, "snd_ac97_suspend" },
	{ 0x6dacee5f, "snd_card_new" },
	{ 0x3762cb6e, "ioremap_nocache" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0x26e96637, "request_irq" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x622527bd, "snd_pcm_set_sync" },
	{ 0xd55c9126, "snd_ac97_bus" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x508de4e9, "snd_ac97_mixer" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xe15f1df, "snd_card_free" },
	{ 0xcca08f65, "snd_card_register" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xa9e2ba2c, "snd_pcm_new" },
	{ 0xf9ef9666, "snd_ac97_resume" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xb8435063, "pci_save_state" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd,snd-ac97-codec";

MODULE_ALIAS("pci:v000010C8d00008005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010C8d00008006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010C8d00008016sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C44E4A3928BF0A18615565B");
