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
	{ 0x1c5b2327, "kmem_cache_destroy" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf976d86d, "ib_get_cached_lmc" },
	{ 0x1704dc89, "ib_create_ah_from_wc" },
	{ 0xbc830838, "ib_dealloc_pd" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xde42fc92, "ib_destroy_qp" },
	{ 0x2ff92ca0, "find_next_bit" },
	{ 0x8c0be9b4, "queue_work" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x7d11c268, "jiffies" },
	{ 0x1975aab0, "ib_get_cached_gid" },
	{ 0x1ff564ab, "ib_destroy_ah" },
	{ 0xc388a12c, "ib_modify_qp" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0xf2766228, "__create_workqueue" },
	{ 0x88a6d7f8, "ib_create_qp" },
	{ 0xa34eb072, "wait_for_completion" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x990f7462, "ib_alloc_pd" },
	{ 0x6190a5b9, "ib_get_dma_mr" },
	{ 0x1b7d4074, "printk" },
	{ 0x5152e605, "memcmp" },
	{ 0xb689e344, "kmem_cache_free" },
	{ 0x31153eb8, "destroy_workqueue" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xd0bbbd3f, "flush_workqueue" },
	{ 0xd312e32d, "ib_destroy_cq" },
	{ 0xd7ef5825, "ib_register_client" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xfc76e10b, "kmem_cache_create" },
	{ 0x3d8dda9b, "ib_dereg_mr" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0xa2ddb5f8, "ib_create_cq" },
	{ 0xd19b4caa, "ib_query_ah" },
	{ 0x7e0221e4, "complete" },
	{ 0x25da070, "snprintf" },
	{ 0x148e6ca, "ib_unregister_client" },
	{ 0x622ab174, "queue_delayed_work" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ib_core";


MODULE_INFO(srcversion, "8948268448BA19BCBA6FCE4");
