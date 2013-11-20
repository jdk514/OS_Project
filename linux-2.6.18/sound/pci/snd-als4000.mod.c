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
	{ 0x6a4b1a0b, "snd_sbdsp_create" },
	{ 0x4c3af445, "__request_region" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x694ccf5f, "snd_pcm_period_elapsed" },
	{ 0xe8934626, "snd_sbdsp_reset" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xf96f1714, "snd_opl3_hwdep_new" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x69897d5c, "snd_mpu401_uart_new" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x806d5133, "param_array_get" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0xef4ab5fb, "snd_sbmixer_suspend" },
	{ 0xb7ac29e7, "snd_pcm_suspend_all" },
	{ 0x6451df5d, "snd_sbmixer_read" },
	{ 0x1d027e4b, "snd_pcm_format_signed" },
	{ 0xaa136450, "param_get_charp" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xe7ecaf45, "snd_mpu401_uart_interrupt" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0x49653ec1, "pci_restore_state" },
	{ 0x1b7d4074, "printk" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0xaa52daa7, "snd_pcm_set_ops" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xfd978e66, "snd_pcm_lib_free_pages" },
	{ 0x376e04bf, "release_and_free_resource" },
	{ 0x16ea202a, "snd_pcm_lib_ioctl" },
	{ 0x9b8917e, "__gameport_register_port" },
	{ 0xdef754b1, "snd_pcm_lib_malloc_pages" },
	{ 0x6dacee5f, "snd_card_new" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0xb3e5cea, "gameport_unregister_port" },
	{ 0x931d8352, "snd_sbmixer_new" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0xab81ed59, "snd_opl3_create" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x7e9fcf24, "pci_set_power_state" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x2617a375, "snd_sbdsp_command" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x2e60bace, "memcpy" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x9e02fba2, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0xe15f1df, "snd_card_free" },
	{ 0xcca08f65, "snd_card_register" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xa9e2ba2c, "snd_pcm_new" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x9728b2f9, "pci_set_consistent_dma_mask" },
	{ 0x124d470d, "snd_sbmixer_resume" },
	{ 0x7b7de87d, "gameport_set_phys" },
	{ 0xe2905b2f, "snd_sbmixer_write" },
	{ 0xb8435063, "pci_save_state" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-sb-common,snd-pcm,snd-opl3-lib,snd-mpu401-uart,snd,gameport";

MODULE_ALIAS("pci:v00004005d00004000sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2F958FB21EFC2258628E12D");