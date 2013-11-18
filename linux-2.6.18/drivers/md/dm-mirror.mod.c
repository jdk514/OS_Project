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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x61bed476, "up_read" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x3d7c39ea, "_read_lock" },
	{ 0x7b6f2551, "dm_get_device" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xa8c6ce0c, "dm_table_get_mode" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xe5077a8f, "mempool_destroy" },
	{ 0x8c0be9b4, "queue_work" },
	{ 0xcb6beb40, "hweight32" },
	{ 0x2fd1d81c, "vfree" },
	{ 0xb6537757, "dm_register_target" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x1985af2a, "down_read" },
	{ 0xda4008e6, "cond_resched" },
	{ 0xf2766228, "__create_workqueue" },
	{ 0xbd2d400, "dm_table_event" },
	{ 0xb0d8c5d, "dm_io_sync_vm" },
	{ 0x1b7d4074, "printk" },
	{ 0x859204af, "sscanf" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0xdc01a06e, "find_next_zero_bit" },
	{ 0x8ae6c9c, "dm_unregister_target" },
	{ 0x2cd3086, "__down_failed_trylock" },
	{ 0x31153eb8, "destroy_workqueue" },
	{ 0xf473cd8c, "dm_io_async_bvec" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x20cd79f3, "generic_make_request" },
	{ 0xde0c05c3, "up_write" },
	{ 0xbca92367, "down_write" },
	{ 0xbf9b99c4, "bio_endio" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xcfaf79ba, "mempool_alloc" },
	{ 0xbe8a1485, "mempool_create" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x50bc9c7c, "_write_lock_irq" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x37a9798f, "mempool_free" },
	{ 0xca50561d, "kcopyd_client_create" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xa05c03df, "mempool_kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x28f35813, "scnprintf" },
	{ 0xcc8adef0, "dm_put_device" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x96b27088, "__down_failed" },
	{ 0xd2e90143, "kcopyd_copy" },
	{ 0x93fcc8a5, "kcopyd_client_destroy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=dm-mod";


MODULE_INFO(srcversion, "6F156BD540A44E89620725A");
