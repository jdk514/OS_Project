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
	{ 0xf9a482f9, "msleep" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xbab7176d, "snd_ac97_tune_hardware" },
	{ 0xd0ee38b8, "schedule_timeout_uninterruptible" },
	{ 0x694ccf5f, "snd_pcm_period_elapsed" },
	{ 0x4d142c5f, "snd_dma_alloc_pages" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x1992a2ba, "param_set_long" },
	{ 0x69897d5c, "snd_mpu401_uart_new" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x8d310c8a, "snd_pcm_hw_constraint_integer" },
	{ 0x7d11c268, "jiffies" },
	{ 0xb7ac29e7, "snd_pcm_suspend_all" },
	{ 0x5dcbc5a7, "snd_ac97_get_short_name" },
	{ 0xaa136450, "param_get_charp" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xe7ecaf45, "snd_mpu401_uart_interrupt" },
	{ 0x64f695c2, "snd_pcm_sgbuf_ops_page" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0x6cec7683, "snd_device_new" },
	{ 0x49653ec1, "pci_restore_state" },
	{ 0x264f7a06, "snd_pcm_hw_constraint_list" },
	{ 0x1b7d4074, "printk" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0xaa52daa7, "snd_pcm_set_ops" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xa09539e, "pci_bus_write_config_dword" },
	{ 0xfd978e66, "snd_pcm_lib_free_pages" },
	{ 0x376e04bf, "release_and_free_resource" },
	{ 0x16ea202a, "snd_pcm_lib_ioctl" },
	{ 0x9b8917e, "__gameport_register_port" },
	{ 0xdef754b1, "snd_pcm_lib_malloc_pages" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x33196303, "snd_iprintf" },
	{ 0xb03abe80, "snd_ac97_suspend" },
	{ 0x6dacee5f, "snd_card_new" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0x53a21daf, "param_get_long" },
	{ 0x26e96637, "request_irq" },
	{ 0xca7afd33, "snd_ctl_new1" },
	{ 0xb3e5cea, "gameport_unregister_port" },
	{ 0x3fa6262e, "snd_dma_free_pages" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x43a96f0b, "snd_ctl_find_id" },
	{ 0xd55c9126, "snd_ac97_bus" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x7e9fcf24, "pci_set_power_state" },
	{ 0x508de4e9, "snd_ac97_mixer" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xfe7afd73, "pci_bus_write_config_byte" },
	{ 0xb41f19f5, "snd_ac97_update_bits" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x79bd571f, "snd_ac97_set_rate" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x3383c7e4, "snd_card_proc_new" },
	{ 0x129cbf09, "pci_get_device" },
	{ 0x9e02fba2, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0xe15f1df, "snd_card_free" },
	{ 0xcca08f65, "snd_card_register" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xdd334e07, "pci_dev_put" },
	{ 0x31fba865, "snd_pcm_limit_hw_rates" },
	{ 0xa9e2ba2c, "snd_pcm_new" },
	{ 0x25da070, "snprintf" },
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
"depends=snd-ac97-codec,snd-pcm,snd-page-alloc,snd-mpu401-uart,snd,gameport";

MODULE_ALIAS("pci:v00001106d00003058sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003059sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F26FD73EA9C6F8A609F3D49");
