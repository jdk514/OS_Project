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
	{ 0x81db09d7, "blk_cleanup_queue" },
	{ 0x700d5f9, "del_gendisk" },
	{ 0x1e40d4fc, "i2o_driver_register" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xbe8a1485, "mempool_create" },
	{ 0x183fa88b, "mempool_alloc_slab" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0xfc76e10b, "kmem_cache_create" },
	{ 0xfcf3ea47, "end_that_request_last" },
	{ 0xbbc30a60, "add_disk_randomness" },
	{ 0x9465c3fa, "end_that_request_chunk" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x9759a3a9, "blk_start_queue" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x698c6ab3, "end_request" },
	{ 0xa7a4ea2b, "blk_stop_queue" },
	{ 0x622ab174, "queue_delayed_work" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x9973d1c9, "elv_dequeue_request" },
	{ 0x2e60bace, "memcpy" },
	{ 0x37a9798f, "mempool_free" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xf43a3f1b, "blk_rq_map_sg" },
	{ 0xcfaf79ba, "mempool_alloc" },
	{ 0x2c715df5, "elv_next_request" },
	{ 0x7b685d98, "i2o_device_claim_release" },
	{ 0xe10dc728, "add_disk" },
	{ 0xdff1565f, "i2o_event_register" },
	{ 0xdf704809, "blk_queue_hardsect_size" },
	{ 0x27f6bc71, "i2o_parm_field_get" },
	{ 0x6d6c459b, "blk_queue_max_hw_segments" },
	{ 0xeb4364da, "blk_queue_max_sectors" },
	{ 0x7d104702, "blk_queue_max_phys_segments" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x5fe7f92a, "put_disk" },
	{ 0x66a62930, "blk_queue_issue_flush_fn" },
	{ 0xcb537be, "blk_queue_prep_rq" },
	{ 0x476f0d58, "blk_init_queue" },
	{ 0xa4935a88, "alloc_disk" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x1b7d4074, "printk" },
	{ 0xb26effc8, "i2o_device_claim" },
	{ 0xfce62e60, "i2o_msg_post_wait_mem" },
	{ 0xf584b61f, "i2o_msg_get_wait" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x7dceceac, "capable" },
	{ 0x37a0cba, "kfree" },
	{ 0x1c5b2327, "kmem_cache_destroy" },
	{ 0xe5077a8f, "mempool_destroy" },
	{ 0xeac1c4af, "unregister_blkdev" },
	{ 0xa3baa26e, "i2o_driver_unregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=i2o_core";


MODULE_INFO(srcversion, "2DA299D0303BE9AA676F32D");
