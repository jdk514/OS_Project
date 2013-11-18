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
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x59981248, "pci_bus_read_config_dword" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x2e60bace, "memcpy" },
	{ 0x4c3af445, "__request_region" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xfcf3ea47, "end_that_request_last" },
	{ 0xbbc30a60, "add_disk_randomness" },
	{ 0xbf9b99c4, "bio_endio" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0xf43a3f1b, "blk_rq_map_sg" },
	{ 0x9973d1c9, "elv_dequeue_request" },
	{ 0x2c715df5, "elv_next_request" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x7d104702, "blk_queue_max_phys_segments" },
	{ 0x6d6c459b, "blk_queue_max_hw_segments" },
	{ 0x96b12278, "blk_queue_bounce_limit" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0xc12e8a55, "proc_mkdir" },
	{ 0x476f0d58, "blk_init_queue" },
	{ 0xa4935a88, "alloc_disk" },
	{ 0x26e96637, "request_irq" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xe10dc728, "add_disk" },
	{ 0xdf704809, "blk_queue_hardsect_size" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x4292364c, "schedule" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x7dceceac, "capable" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x74ce7f8b, "proc_root_driver" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x81db09d7, "blk_cleanup_queue" },
	{ 0x5fe7f92a, "put_disk" },
	{ 0x700d5f9, "del_gendisk" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0x4827a016, "del_timer" },
	{ 0xeac1c4af, "unregister_blkdev" },
	{ 0xedc03953, "iounmap" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x1b7d4074, "printk" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x37a0cba, "kfree" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001011d00000046sv00000E11sd00004058bc*sc*i*");
MODULE_ALIAS("pci:v00001011d00000046sv00000E11sd00004051bc*sc*i*");
MODULE_ALIAS("pci:v00001011d00000046sv00000E11sd00004050bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000010sv00000E11sd00004048bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000010sv00000E11sd00004040bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000AE10sv00000E11sd00004034bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000AE10sv00000E11sd00004033bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000AE10sv00000E11sd00004032bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000AE10sv00000E11sd00004031bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000AE10sv00000E11sd00004030bc*sc*i*");

MODULE_INFO(srcversion, "6E991CF458FC6A4BEBA9227");
