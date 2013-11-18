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
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xdc3eaf70, "iomem_resource" },
	{ 0xd0ee38b8, "schedule_timeout_uninterruptible" },
	{ 0x694ccf5f, "snd_pcm_period_elapsed" },
	{ 0x4d142c5f, "snd_dma_alloc_pages" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xf96f1714, "snd_opl3_hwdep_new" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x1992a2ba, "param_set_long" },
	{ 0x69897d5c, "snd_mpu401_uart_new" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x806d5133, "param_array_get" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x7d11c268, "jiffies" },
	{ 0xb7ac29e7, "snd_pcm_suspend_all" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xaa136450, "param_get_charp" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xe7ecaf45, "snd_mpu401_uart_interrupt" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0x6cec7683, "snd_device_new" },
	{ 0x49653ec1, "pci_restore_state" },
	{ 0xae489b1d, "snd_timer_new" },
	{ 0x1b7d4074, "printk" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0xaa52daa7, "snd_pcm_set_ops" },
	{ 0xf67eee79, "snd_ctl_notify" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xfd978e66, "snd_pcm_lib_free_pages" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x376e04bf, "release_and_free_resource" },
	{ 0x16ea202a, "snd_pcm_lib_ioctl" },
	{ 0x9b8917e, "__gameport_register_port" },
	{ 0xdef754b1, "snd_pcm_lib_malloc_pages" },
	{ 0x33196303, "snd_iprintf" },
	{ 0xb03abe80, "snd_ac97_suspend" },
	{ 0x6dacee5f, "snd_card_new" },
	{ 0x3762cb6e, "ioremap_nocache" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0x53a21daf, "param_get_long" },
	{ 0x26e96637, "request_irq" },
	{ 0xca7afd33, "snd_ctl_new1" },
	{ 0xb3e5cea, "gameport_unregister_port" },
	{ 0x3fa6262e, "snd_dma_free_pages" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0xd55c9126, "snd_ac97_bus" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0xab81ed59, "snd_opl3_create" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x508de4e9, "snd_ac97_mixer" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xfe7afd73, "pci_bus_write_config_byte" },
	{ 0xb41f19f5, "snd_ac97_update_bits" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x7744a796, "snd_timer_interrupt" },
	{ 0xf8a0ea71, "snd_pcm_hw_constraint_minmax" },
	{ 0xedc03953, "iounmap" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x3383c7e4, "snd_card_proc_new" },
	{ 0x9e02fba2, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0xe15f1df, "snd_card_free" },
	{ 0xcca08f65, "snd_card_register" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xa9e2ba2c, "snd_pcm_new" },
	{ 0xf9ef9666, "snd_ac97_resume" },
	{ 0xb94561ae, "snd_ctl_add" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x7b7de87d, "gameport_set_phys" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xb8435063, "pci_save_state" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-page-alloc,snd-opl3-lib,snd-mpu401-uart,snd,snd-timer,gameport,snd-ac97-codec";

MODULE_ALIAS("pci:v00001073d00000004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001073d0000000Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001073d0000000Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001073d0000000Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001073d00000010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001073d00000012sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "495F8B6480B9F4124220B01");
