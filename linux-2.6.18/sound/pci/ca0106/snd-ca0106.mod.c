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
	{ 0x4c3af445, "__request_region" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x3d4b2dfc, "snd_pcm_hw_constraint_step" },
	{ 0x694ccf5f, "snd_pcm_period_elapsed" },
	{ 0x4d142c5f, "snd_dma_alloc_pages" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x806d5133, "param_array_get" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf673e9f3, "snd_pcm_lib_preallocate_pages" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x30604317, "snd_rawmidi_set_ops" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x8d310c8a, "snd_pcm_hw_constraint_integer" },
	{ 0x818cf303, "snd_rawmidi_new" },
	{ 0xaa136450, "param_get_charp" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0x6cec7683, "snd_device_new" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0x1b7d4074, "printk" },
	{ 0x859204af, "sscanf" },
	{ 0xaa52daa7, "snd_pcm_set_ops" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0xfd978e66, "snd_pcm_lib_free_pages" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x376e04bf, "release_and_free_resource" },
	{ 0x16ea202a, "snd_pcm_lib_ioctl" },
	{ 0xdef754b1, "snd_pcm_lib_malloc_pages" },
	{ 0x33196303, "snd_iprintf" },
	{ 0x6dacee5f, "snd_card_new" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0x59981248, "pci_bus_read_config_dword" },
	{ 0xe663e462, "snd_ctl_remove_id" },
	{ 0x26e96637, "request_irq" },
	{ 0xca7afd33, "snd_ctl_new1" },
	{ 0x3fa6262e, "snd_dma_free_pages" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x43a96f0b, "snd_ctl_find_id" },
	{ 0xd55c9126, "snd_ac97_bus" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x508de4e9, "snd_ac97_mixer" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x3383c7e4, "snd_card_proc_new" },
	{ 0xe15f1df, "snd_card_free" },
	{ 0xcca08f65, "snd_card_register" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xa9e2ba2c, "snd_pcm_new" },
	{ 0xb94561ae, "snd_ctl_add" },
	{ 0xbcc5d6f2, "snd_rawmidi_transmit" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x9728b2f9, "pci_set_consistent_dma_mask" },
	{ 0x843984d1, "snd_rawmidi_receive" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd,snd-pcm,snd-page-alloc,snd-rawmidi,snd-ac97-codec";

MODULE_ALIAS("pci:v00001102d00000007sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D72145A4E1700AA8195492E");
