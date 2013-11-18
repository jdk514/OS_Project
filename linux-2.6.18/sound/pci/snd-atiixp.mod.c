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
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xbab7176d, "snd_ac97_tune_hardware" },
	{ 0x3d4b2dfc, "snd_pcm_hw_constraint_step" },
	{ 0x694ccf5f, "snd_pcm_period_elapsed" },
	{ 0x4d142c5f, "snd_dma_alloc_pages" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x8d310c8a, "snd_pcm_hw_constraint_integer" },
	{ 0xa4d2d9ca, "snd_ac97_pcm_assign" },
	{ 0xb7ac29e7, "snd_pcm_suspend_all" },
	{ 0x5dcbc5a7, "snd_ac97_get_short_name" },
	{ 0xaa136450, "param_get_charp" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0x6cec7683, "snd_device_new" },
	{ 0x49653ec1, "pci_restore_state" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0xaa52daa7, "snd_pcm_set_ops" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xfd978e66, "snd_pcm_lib_free_pages" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x16ea202a, "snd_pcm_lib_ioctl" },
	{ 0xdef754b1, "snd_pcm_lib_malloc_pages" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x33196303, "snd_iprintf" },
	{ 0xb03abe80, "snd_ac97_suspend" },
	{ 0x6dacee5f, "snd_card_new" },
	{ 0x3762cb6e, "ioremap_nocache" },
	{ 0x26e96637, "request_irq" },
	{ 0x3fa6262e, "snd_dma_free_pages" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0xd55c9126, "snd_ac97_bus" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x7e9fcf24, "pci_set_power_state" },
	{ 0x508de4e9, "snd_ac97_mixer" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xb41f19f5, "snd_ac97_update_bits" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x3ba34366, "snd_pcm_stop" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x217116d0, "snd_ac97_pcm_open" },
	{ 0x3383c7e4, "snd_card_proc_new" },
	{ 0x9e02fba2, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0xe15f1df, "snd_card_free" },
	{ 0xcca08f65, "snd_card_register" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0x31fba865, "snd_pcm_limit_hw_rates" },
	{ 0xa9e2ba2c, "snd_pcm_new" },
	{ 0x25da070, "snprintf" },
	{ 0xf9ef9666, "snd_ac97_resume" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x861e21e0, "snd_ac97_pcm_close" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xb8435063, "pci_save_state" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-ac97-codec,snd-pcm,snd-page-alloc,snd";

MODULE_ALIAS("pci:v00001002d00004341sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004361sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004370sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4098C33DC4320A736CF0B01");
