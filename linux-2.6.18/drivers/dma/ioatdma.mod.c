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
	{ 0xe2e90e7d, "mem_map" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xcac1afde, "dma_async_device_register" },
	{ 0x5152e605, "memcmp" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0x26e96637, "request_irq" },
	{ 0xa6172ba8, "pci_enable_msi" },
	{ 0x4c09c5f1, "dma_pool_create" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x5e552f71, "dma_pool_alloc" },
	{ 0x3db28e6f, "dma_pool_free" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0x1b7d4074, "printk" },
	{ 0x7e3f931f, "_spin_trylock" },
	{ 0x37a0cba, "kfree" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x8a24f99e, "dma_pool_destroy" },
	{ 0x69c560c8, "pci_disable_msi" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x9e6cc765, "dma_async_device_unregister" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C0F36311AF3B4AF18998267");
