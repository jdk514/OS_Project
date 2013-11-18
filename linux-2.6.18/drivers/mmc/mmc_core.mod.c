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
	{ 0x476f0d58, "blk_init_queue" },
	{ 0x9d489c00, "bus_register" },
	{ 0x845b7a76, "device_remove_file" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x85898a89, "class_register" },
	{ 0xfd59d987, "complete_and_exit" },
	{ 0x4d101f5f, "driver_register" },
	{ 0x81db09d7, "blk_cleanup_queue" },
	{ 0xcb537be, "blk_queue_prep_rq" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x680d02b7, "blk_dump_rq_flags" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0xeb4364da, "blk_queue_max_sectors" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x9759a3a9, "blk_start_queue" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xda4008e6, "cond_resched" },
	{ 0xa8bed6df, "class_device_put" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xa34eb072, "wait_for_completion" },
	{ 0xe6c247b4, "class_device_del" },
	{ 0x7d104702, "blk_queue_max_phys_segments" },
	{ 0x5a37ee35, "device_del" },
	{ 0x1b7d4074, "printk" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0x5152e605, "memcmp" },
	{ 0x93618160, "class_unregister" },
	{ 0x3e158c0e, "driver_unregister" },
	{ 0x6d6c459b, "blk_queue_max_hw_segments" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x2ca5f1b5, "device_add" },
	{ 0x6e3baace, "bus_unregister" },
	{ 0xa7409aaf, "idr_remove" },
	{ 0x68e0d967, "device_create_file" },
	{ 0x52a7207f, "idr_pre_get" },
	{ 0x96b12278, "blk_queue_bounce_limit" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x1fe72a83, "class_device_add" },
	{ 0xa9615177, "put_device" },
	{ 0x2c715df5, "elv_next_request" },
	{ 0xd3dad18a, "schedule_delayed_work" },
	{ 0x4292364c, "schedule" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xa7a4ea2b, "blk_stop_queue" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0xc07f052f, "device_initialize" },
	{ 0x7e9ebb05, "kernel_thread" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x7e0221e4, "complete" },
	{ 0x25da070, "snprintf" },
	{ 0xeea23c59, "blk_queue_max_segment_size" },
	{ 0x1163f0a7, "blk_max_low_pfn" },
	{ 0x96b27088, "__down_failed" },
	{ 0x2d29e50a, "idr_get_new" },
	{ 0xdc43a9c8, "daemonize" },
	{ 0x58c6b902, "class_device_initialize" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "0AF34FDE06926D74793AAF9");
