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
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x61bed476, "up_read" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x7d3ee658, "__snd_util_memblk_new" },
	{ 0x694ccf5f, "snd_pcm_period_elapsed" },
	{ 0x4d142c5f, "snd_dma_alloc_pages" },
	{ 0x2a30b913, "snd_device_free" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x806d5133, "param_array_get" },
	{ 0x876c24d1, "snd_util_memhdr_free" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x2fd1d81c, "vfree" },
	{ 0xf673e9f3, "snd_pcm_lib_preallocate_pages" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x30604317, "snd_rawmidi_set_ops" },
	{ 0x335fd6f8, "__snd_util_mem_free" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x8d310c8a, "snd_pcm_hw_constraint_integer" },
	{ 0x818cf303, "snd_rawmidi_new" },
	{ 0x1985af2a, "down_read" },
	{ 0xb7ac29e7, "snd_pcm_suspend_all" },
	{ 0xaa136450, "param_get_charp" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0x64f695c2, "snd_pcm_sgbuf_ops_page" },
	{ 0x6cec7683, "snd_device_new" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0x49653ec1, "pci_restore_state" },
	{ 0x264f7a06, "snd_pcm_hw_constraint_list" },
	{ 0xae489b1d, "snd_timer_new" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0xaa52daa7, "snd_pcm_set_ops" },
	{ 0xf67eee79, "snd_ctl_notify" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x3971b4df, "snd_ecards_limit" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x9d5a5fd4, "snd_cards" },
	{ 0xc83b92d1, "snd_hwdep_new" },
	{ 0xfd978e66, "snd_pcm_lib_free_pages" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x16ea202a, "snd_pcm_lib_ioctl" },
	{ 0xde0c05c3, "up_write" },
	{ 0x2fb04a5a, "snd_util_memhdr_new" },
	{ 0xbca92367, "down_write" },
	{ 0xf00b98ec, "__snd_util_mem_alloc" },
	{ 0xdef754b1, "snd_pcm_lib_malloc_pages" },
	{ 0x33196303, "snd_iprintf" },
	{ 0xb03abe80, "snd_ac97_suspend" },
	{ 0x6dacee5f, "snd_card_new" },
	{ 0x7dceceac, "capable" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0x59981248, "pci_bus_read_config_dword" },
	{ 0xe663e462, "snd_ctl_remove_id" },
	{ 0x72216fa9, "param_get_uint" },
	{ 0x26e96637, "request_irq" },
	{ 0xca7afd33, "snd_ctl_new1" },
	{ 0x3fa6262e, "snd_dma_free_pages" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x43a96f0b, "snd_ctl_find_id" },
	{ 0xd55c9126, "snd_ac97_bus" },
	{ 0x8176c3b0, "snd_ctl_remove" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x7e9fcf24, "pci_set_power_state" },
	{ 0x508de4e9, "snd_ac97_mixer" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0x7744a796, "snd_timer_interrupt" },
	{ 0x8abac70a, "param_set_uint" },
	{ 0xf8a0ea71, "snd_pcm_hw_constraint_minmax" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x3383c7e4, "snd_card_proc_new" },
	{ 0x9e02fba2, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0xe15f1df, "snd_card_free" },
	{ 0xcca08f65, "snd_card_register" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0x6f68096f, "snd_seq_device_new" },
	{ 0x25da070, "snprintf" },
	{ 0xa9e2ba2c, "snd_pcm_new" },
	{ 0xf9ef9666, "snd_ac97_resume" },
	{ 0xb94561ae, "snd_ctl_add" },
	{ 0x750d66ed, "snd_ac97_write_cache" },
	{ 0xbcc5d6f2, "snd_rawmidi_transmit" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x9728b2f9, "pci_set_consistent_dma_mask" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x843984d1, "snd_rawmidi_receive" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xb8435063, "pci_save_state" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-util-mem,snd-page-alloc,snd,snd-rawmidi,snd-timer,snd-hwdep,snd-ac97-codec,snd-seq-device";

MODULE_ALIAS("pci:v00001102d00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d00000004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d00000008sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D784D4F74BCD90DF00ADB30");
