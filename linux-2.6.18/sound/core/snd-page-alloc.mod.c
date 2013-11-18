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
	{ 0x23f2d36f, "memparse" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0x1b7d4074, "printk" },
	{ 0x95cc2139, "__PAGE_KERNEL" },
	{ 0x5152e605, "memcmp" },
	{ 0x1f825f04, "vmap" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x107d6ba3, "__get_free_pages" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0x9941ccb8, "free_pages" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xe7ead430, "vunmap" },
	{ 0x2e60bace, "memcpy" },
	{ 0x129cbf09, "pci_get_device" },
	{ 0xdd334e07, "pci_dev_put" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x25da070, "snprintf" },
	{ 0x9728b2f9, "pci_set_consistent_dma_mask" },
	{ 0xf2a644fb, "copy_from_user" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C65427B74A040151BE74ED8");
