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
	{ 0xe2e90e7d, "mem_map" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xf43a3f1b, "blk_rq_map_sg" },
	{ 0xa7a4ea2b, "blk_stop_queue" },
	{ 0xbda32ea3, "blk_requeue_request" },
	{ 0x9973d1c9, "elv_dequeue_request" },
	{ 0x2c715df5, "elv_next_request" },
	{ 0x26e96637, "request_irq" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xa34eb072, "wait_for_completion" },
	{ 0x3f9e3f56, "blk_queue_segment_boundary" },
	{ 0x7d104702, "blk_queue_max_phys_segments" },
	{ 0x6d6c459b, "blk_queue_max_hw_segments" },
	{ 0xa4935a88, "alloc_disk" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x476f0d58, "blk_init_queue" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x7e0221e4, "complete" },
	{ 0xe10dc728, "add_disk" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0xeac1c4af, "unregister_blkdev" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x2bd063c9, "blk_insert_request" },
	{ 0x7f64488b, "blk_get_request" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xda4008e6, "cond_resched" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0x9759a3a9, "blk_start_queue" },
	{ 0xfcf3ea47, "end_that_request_last" },
	{ 0x33f1f594, "end_that_request_first" },
	{ 0x1b7d4074, "printk" },
	{ 0x5fe7f92a, "put_disk" },
	{ 0x81db09d7, "blk_cleanup_queue" },
	{ 0x700d5f9, "del_gendisk" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v0000105Ad00008000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00008002sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "18769F9D5EADD38F272F849");
