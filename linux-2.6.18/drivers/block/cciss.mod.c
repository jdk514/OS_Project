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
	{ 0x932e68d6, "create_proc_entry" },
	{ 0xc12e8a55, "proc_mkdir" },
	{ 0x26e96637, "request_irq" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0xa6172ba8, "pci_enable_msi" },
	{ 0x43fb7f82, "pci_enable_msix" },
	{ 0x20645ff6, "pci_find_capability" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0xa4935a88, "alloc_disk" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x74ce7f8b, "proc_root_driver" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0xeac1c4af, "unregister_blkdev" },
	{ 0x89535602, "scsi_remove_host" },
	{ 0xedc03953, "iounmap" },
	{ 0x69c560c8, "pci_disable_msi" },
	{ 0x54804e7a, "pci_disable_msix" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xe10dc728, "add_disk" },
	{ 0xdf704809, "blk_queue_hardsect_size" },
	{ 0x3e6d4d62, "blk_queue_softirq_done" },
	{ 0xeb4364da, "blk_queue_max_sectors" },
	{ 0x7d104702, "blk_queue_max_phys_segments" },
	{ 0x6d6c459b, "blk_queue_max_hw_segments" },
	{ 0x96b12278, "blk_queue_bounce_limit" },
	{ 0x476f0d58, "blk_init_queue" },
	{ 0xd0ee38b8, "schedule_timeout_uninterruptible" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7e0221e4, "complete" },
	{ 0x35106189, "blk_complete_request" },
	{ 0x6549eb99, "__blk_add_trace" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0xa7a4ea2b, "blk_stop_queue" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0xf43a3f1b, "blk_rq_map_sg" },
	{ 0x9973d1c9, "elv_dequeue_request" },
	{ 0x2c715df5, "elv_next_request" },
	{ 0x9759a3a9, "blk_start_queue" },
	{ 0xfcf3ea47, "end_that_request_last" },
	{ 0xbbc30a60, "add_disk_randomness" },
	{ 0xbf9b99c4, "bio_endio" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x5152e605, "memcmp" },
	{ 0xf4bef259, "scsi_host_put" },
	{ 0xd3597019, "scsi_scan_host" },
	{ 0x7f12bc25, "scsi_add_host" },
	{ 0xdec27e6e, "scsi_host_alloc" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x2e60bace, "memcpy" },
	{ 0x6df713c9, "scsi_device_types" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x37a0cba, "kfree" },
	{ 0x5fe7f92a, "put_disk" },
	{ 0x81db09d7, "blk_cleanup_queue" },
	{ 0x700d5f9, "del_gendisk" },
	{ 0x7dceceac, "capable" },
	{ 0xa34eb072, "wait_for_completion" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1b7d4074, "printk" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

MODULE_ALIAS("pci:v00000E11d0000B060sv00000E11sd00004070bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000B178sv00000E11sd00004080bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000B178sv00000E11sd00004082bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000B178sv00000E11sd00004083bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d00000046sv00000E11sd00004091bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d00000046sv00000E11sd0000409Abc*sc*i*");
MODULE_ALIAS("pci:v00000E11d00000046sv00000E11sd0000409Bbc*sc*i*");
MODULE_ALIAS("pci:v00000E11d00000046sv00000E11sd0000409Cbc*sc*i*");
MODULE_ALIAS("pci:v00000E11d00000046sv00000E11sd0000409Dbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003220sv0000103Csd00003225bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003230sv0000103Csd00003223bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003230sv0000103Csd00003234bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003230sv0000103Csd00003235bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003238sv0000103Csd00003211bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003238sv0000103Csd00003212bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003238sv0000103Csd00003213bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003238sv0000103Csd00003214bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003238sv0000103Csd00003215bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003230sv0000103Csd00003233bc*sc*i*");

MODULE_INFO(srcversion, "76FD40C7C36D626DA7D9543");
