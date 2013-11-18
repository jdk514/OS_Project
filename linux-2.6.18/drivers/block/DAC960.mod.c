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
	{ 0x8e334f2b, "interruptible_sleep_on_timeout" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xd16ac615, "__get_user_1" },
	{ 0x7dceceac, "capable" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0xc12e8a55, "proc_mkdir" },
	{ 0xe10dc728, "add_disk" },
	{ 0xeb4364da, "blk_queue_max_sectors" },
	{ 0x7d104702, "blk_queue_max_phys_segments" },
	{ 0x6d6c459b, "blk_queue_max_hw_segments" },
	{ 0x96b12278, "blk_queue_bounce_limit" },
	{ 0x476f0d58, "blk_init_queue" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x5e552f71, "dma_pool_alloc" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x4c09c5f1, "dma_pool_create" },
	{ 0x26e96637, "request_irq" },
	{ 0x4c3af445, "__request_region" },
	{ 0x3762cb6e, "ioremap_nocache" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xa4935a88, "alloc_disk" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x25dd4bad, "misc_deregister" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0x8a24f99e, "dma_pool_destroy" },
	{ 0x3db28e6f, "dma_pool_free" },
	{ 0xeac1c4af, "unregister_blkdev" },
	{ 0x81db09d7, "blk_cleanup_queue" },
	{ 0x700d5f9, "del_gendisk" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7e0221e4, "complete" },
	{ 0xfcf3ea47, "end_that_request_last" },
	{ 0xbbc30a60, "add_disk_randomness" },
	{ 0x33f1f594, "end_that_request_first" },
	{ 0x2e60bace, "memcpy" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x8dd8f6fb, "sleep_on_timeout" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x7d11c268, "jiffies" },
	{ 0x782b0008, "vsprintf" },
	{ 0x1ef3eb01, "misc_register" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x4292364c, "schedule" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x3851a0b9, "check_disk_change" },
	{ 0xa34eb072, "wait_for_completion" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x5fe7f92a, "put_disk" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xedc03953, "iounmap" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x9973d1c9, "elv_dequeue_request" },
	{ 0x2c715df5, "elv_next_request" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x1b7d4074, "printk" },
	{ 0xf43a3f1b, "blk_rq_map_sg" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001069d0000B166sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001069d0000BA56sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001069d00000050sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001011d00001065sv00001069sd00000020bc*sc*i*");
MODULE_ALIAS("pci:v00001069d00000010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001069d00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001069d00000001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4939BE00A60835B790938D4");
