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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2c2512ea, "get_zeroed_page" },
	{ 0xa0e2231b, "pci_release_region" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xdc3eaf70, "iomem_resource" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x7fdf1a5, "ib_register_mad_agent" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xc4d65887, "boot_cpu_data" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x54804e7a, "pci_disable_msix" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x8a24f99e, "dma_pool_destroy" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0x1975aab0, "ib_get_cached_gid" },
	{ 0x1ff564ab, "ib_destroy_ah" },
	{ 0x845977d6, "ib_alloc_device" },
	{ 0xcdf26d1f, "ib_free_send_mad" },
	{ 0x567c0245, "ib_dealloc_device" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xd4abb36c, "__alloc_pages" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0x43fb7f82, "pci_enable_msix" },
	{ 0x4ff943ae, "mutex_lock_interruptible" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0x5152e605, "memcmp" },
	{ 0x76dcf4, "ib_rate_to_mult" },
	{ 0xdc01a06e, "find_next_zero_bit" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0xf5119cd6, "ib_query_port" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x6180e3ac, "class_device_create_file" },
	{ 0xa09539e, "pci_bus_write_config_dword" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x3db28e6f, "dma_pool_free" },
	{ 0x9eac042a, "__ioremap" },
	{ 0xc828121c, "ib_get_cached_pkey" },
	{ 0xa6172ba8, "pci_enable_msi" },
	{ 0x965c1dae, "ib_ud_header_init" },
	{ 0x8a9eec75, "contig_page_data" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x7d5ee64c, "ib_dispatch_event" },
	{ 0x28330136, "ib_create_send_mad" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xbaea96c, "ib_post_send_mad" },
	{ 0x20645ff6, "pci_find_capability" },
	{ 0xc3288ba8, "ib_unregister_mad_agent" },
	{ 0xc0c3f04d, "ib_create_ah" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x65734b02, "__free_pages" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0x59981248, "pci_bus_read_config_dword" },
	{ 0x107d6ba3, "__get_free_pages" },
	{ 0xddbcef4b, "get_user_pages" },
	{ 0xf6b5f6b0, "ib_register_device" },
	{ 0x26e96637, "request_irq" },
	{ 0x4292364c, "schedule" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2bad27b5, "ib_unregister_device" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x5e552f71, "dma_pool_alloc" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x9941ccb8, "free_pages" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x6d27ef64, "__bitmap_empty" },
	{ 0x37a0cba, "kfree" },
	{ 0x9a3411f9, "remap_pfn_range" },
	{ 0x2e60bace, "memcpy" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0x69c560c8, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x8640eaeb, "ib_modify_qp_is_ok" },
	{ 0xb0b847ac, "__bitmap_full" },
	{ 0x946be58e, "put_page" },
	{ 0x129cbf09, "pci_get_device" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x8d12f837, "ib_ud_header_pack" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x27f9f76, "mult_to_ib_rate" },
	{ 0xdd334e07, "pci_dev_put" },
	{ 0x7e0221e4, "complete" },
	{ 0x96b27088, "__down_failed" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x9728b2f9, "pci_set_consistent_dma_mask" },
	{ 0x736bb1ef, "wait_for_completion_timeout" },
	{ 0x4c09c5f1, "dma_pool_create" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x2822ea4b, "pci_request_region" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ib_mad,ib_core";

MODULE_ALIAS("pci:v000015B3d00005A44sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001867d00005A44sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006278sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001867d00006278sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006282sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001867d00006282sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006274sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001867d00006274sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00005E8Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001867d00005E8Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B585701ED893733FAB2F7DB");
