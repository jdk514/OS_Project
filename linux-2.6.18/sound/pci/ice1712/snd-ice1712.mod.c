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
	{ 0x89b301d4, "param_get_int" },
	{ 0x694ccf5f, "snd_pcm_period_elapsed" },
	{ 0xbd4c3a02, "snd_i2c_device_create" },
	{ 0x2f9992a, "snd_pcm_hw_constraint_msbits" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x69897d5c, "snd_mpu401_uart_new" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x736f94f7, "snd_ice1712_akm4xxx_build_controls" },
	{ 0x806d5133, "param_array_get" },
	{ 0xf5539e89, "snd_i2c_sendbytes" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0xaa136450, "param_get_charp" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xe7ecaf45, "snd_mpu401_uart_interrupt" },
	{ 0xd558e8e5, "snd_cs8427_reg_write" },
	{ 0x6cec7683, "snd_device_new" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0x264f7a06, "snd_pcm_hw_constraint_list" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0xaa52daa7, "snd_pcm_set_ops" },
	{ 0xf67eee79, "snd_ctl_notify" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x6511a6b7, "snd_akm4xxx_reset" },
	{ 0x9b6d94a3, "snd_cs8427_iec958_build" },
	{ 0xfd978e66, "snd_pcm_lib_free_pages" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x16ea202a, "snd_pcm_lib_ioctl" },
	{ 0xdef754b1, "snd_pcm_lib_malloc_pages" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x33196303, "snd_iprintf" },
	{ 0x6dacee5f, "snd_card_new" },
	{ 0xfe5d0576, "snd_cs8427_create" },
	{ 0xa737c3d5, "snd_ice1712_akm4xxx_free" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xff6c7e7, "snd_i2c_bus_create" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0x6633ec91, "snd_i2c_readbytes" },
	{ 0x26e96637, "request_irq" },
	{ 0xca7afd33, "snd_ctl_new1" },
	{ 0x67462e08, "snd_cs8427_iec958_pcm" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x622527bd, "snd_pcm_set_sync" },
	{ 0xd55c9126, "snd_ac97_bus" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x508de4e9, "snd_ac97_mixer" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xfe7afd73, "pci_bus_write_config_byte" },
	{ 0x79bd571f, "snd_ac97_set_rate" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xda3c1b96, "snd_cs8427_iec958_active" },
	{ 0xa7c969c1, "snd_akm4xxx_write" },
	{ 0x3383c7e4, "snd_card_proc_new" },
	{ 0x9e02fba2, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0xe15f1df, "snd_card_free" },
	{ 0xcca08f65, "snd_card_register" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xa9e2ba2c, "snd_pcm_new" },
	{ 0x25da070, "snprintf" },
	{ 0xb94561ae, "snd_ctl_add" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x9728b2f9, "pci_set_consistent_dma_mask" },
	{ 0xc936358c, "snd_ice1712_akm4xxx_init" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-i2c,snd-mpu401-uart,snd-ice17xx-ak4xxx,snd-cs8427,snd,snd-ak4xxx-adda,snd-ac97-codec";

MODULE_ALIAS("pci:v00001412d00001712sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "11E611354C01012F039B68F");
