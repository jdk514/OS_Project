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
	{ 0x89b301d4, "param_get_int" },
	{ 0xdc3eaf70, "iomem_resource" },
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
	{ 0x1d26aa98, "sprintf" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x8d310c8a, "snd_pcm_hw_constraint_integer" },
	{ 0xda4008e6, "cond_resched" },
	{ 0xaa136450, "param_get_charp" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0x64f695c2, "snd_pcm_sgbuf_ops_page" },
	{ 0x6cec7683, "snd_device_new" },
	{ 0x264f7a06, "snd_pcm_hw_constraint_list" },
	{ 0x1b7d4074, "printk" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0x5152e605, "memcmp" },
	{ 0xaa52daa7, "snd_pcm_set_ops" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0xfd978e66, "snd_pcm_lib_free_pages" },
	{ 0x376e04bf, "release_and_free_resource" },
	{ 0x16ea202a, "snd_pcm_lib_ioctl" },
	{ 0xdef754b1, "snd_pcm_lib_malloc_pages" },
	{ 0x6dacee5f, "snd_card_new" },
	{ 0xb15cc7e0, "snd_pcm_hw_rule_add" },
	{ 0x3762cb6e, "ioremap_nocache" },
	{ 0x26e96637, "request_irq" },
	{ 0xca7afd33, "snd_ctl_new1" },
	{ 0x3fa6262e, "snd_dma_free_pages" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x622527bd, "snd_pcm_set_sync" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xfe7afd73, "pci_bus_write_config_byte" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x70dc0e3, "request_firmware" },
	{ 0xe15f1df, "snd_card_free" },
	{ 0xcca08f65, "snd_card_register" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0x25da070, "snprintf" },
	{ 0xa9e2ba2c, "snd_pcm_new" },
	{ 0xb94561ae, "snd_ctl_add" },
	{ 0x96b27088, "__down_failed" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x33934162, "release_firmware" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-page-alloc,snd";

MODULE_ALIAS("pci:v00001057d00001801sv0000ECC0sd00000040bc*sc*i*");
MODULE_ALIAS("pci:v00001057d00001801sv0000ECC0sd00000041bc*sc*i*");

MODULE_INFO(srcversion, "F776EE5285E816409A058C5");
