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
	{ 0xf9a482f9, "msleep" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x694ccf5f, "snd_pcm_period_elapsed" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x69897d5c, "snd_mpu401_uart_new" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x806d5133, "param_array_get" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x8d310c8a, "snd_pcm_hw_constraint_integer" },
	{ 0xaa136450, "param_get_charp" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xe7ecaf45, "snd_mpu401_uart_interrupt" },
	{ 0x64f695c2, "snd_pcm_sgbuf_ops_page" },
	{ 0x6cec7683, "snd_device_new" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0x1b7d4074, "printk" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0xaa52daa7, "snd_pcm_set_ops" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x26bb5882, "snd_pcm_hw_constraint_pow2" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xfd978e66, "snd_pcm_lib_free_pages" },
	{ 0x16ea202a, "snd_pcm_lib_ioctl" },
	{ 0x9b8917e, "__gameport_register_port" },
	{ 0xdef754b1, "snd_pcm_lib_malloc_pages" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x6dacee5f, "snd_card_new" },
	{ 0x3762cb6e, "ioremap_nocache" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0x26e96637, "request_irq" },
	{ 0xca7afd33, "snd_ctl_new1" },
	{ 0xb3e5cea, "gameport_unregister_port" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0xd55c9126, "snd_ac97_bus" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x508de4e9, "snd_ac97_mixer" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xfe7afd73, "pci_bus_write_config_byte" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x129cbf09, "pci_get_device" },
	{ 0x9e02fba2, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0xe15f1df, "snd_card_free" },
	{ 0xcca08f65, "snd_card_register" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xdd334e07, "pci_dev_put" },
	{ 0xa9e2ba2c, "snd_pcm_new" },
	{ 0x25da070, "snprintf" },
	{ 0xb94561ae, "snd_ctl_add" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x9728b2f9, "pci_set_consistent_dma_mask" },
	{ 0x7b7de87d, "gameport_set_phys" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-mpu401-uart,snd,gameport,snd-ac97-codec";

MODULE_ALIAS("pci:v000012EBd00000001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "45D4DFA9C164BA2D9ED75E6");
