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
	{ 0x914abf8b, "rdma_resolve_ip" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x9f40dc61, "ib_send_cm_rej" },
	{ 0xbd8ea9c0, "ib_find_cached_gid" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x5666cf2b, "ib_send_cm_req" },
	{ 0xc1783464, "ib_send_cm_dreq" },
	{ 0x3ffd6d3, "ib_send_cm_rtu" },
	{ 0xde42fc92, "ib_destroy_qp" },
	{ 0x8c0be9b4, "queue_work" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xee08006f, "sysctl_local_port_range" },
	{ 0x1975aab0, "ib_get_cached_gid" },
	{ 0xc388a12c, "ib_modify_qp" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0xf2766228, "__create_workqueue" },
	{ 0x88a6d7f8, "ib_create_qp" },
	{ 0xa34eb072, "wait_for_completion" },
	{ 0x50535649, "ib_send_cm_drep" },
	{ 0x85478027, "ib_cm_init_qp_attr" },
	{ 0x9dbf1158, "idr_destroy" },
	{ 0x1b7d4074, "printk" },
	{ 0x93637a5a, "ib_get_client_data" },
	{ 0xb43434dd, "ib_send_cm_rep" },
	{ 0xf5119cd6, "ib_query_port" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x31153eb8, "destroy_workqueue" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xc828121c, "ib_get_cached_pkey" },
	{ 0x515ff74e, "ib_set_client_data" },
	{ 0xc06d03a0, "ib_create_cm_id" },
	{ 0x496f1841, "ib_sa_path_rec_get" },
	{ 0xa7409aaf, "idr_remove" },
	{ 0x52a7207f, "idr_pre_get" },
	{ 0xd7ef5825, "ib_register_client" },
	{ 0x1cf758a8, "ib_sa_cancel_query" },
	{ 0x7dceceac, "capable" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xecc44250, "rdma_addr_cancel" },
	{ 0x4292364c, "schedule" },
	{ 0x5d638531, "ib_find_cached_pkey" },
	{ 0x7eb46464, "ib_destroy_cm_id" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x1421a04c, "idr_get_new_above" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x933f6490, "ib_cm_listen" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xeabdd2af, "rdma_translate_ip" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x7e0221e4, "complete" },
	{ 0xf6a98ae7, "idr_find" },
	{ 0x148e6ca, "ib_unregister_client" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ib_addr,ib_cm,ib_core,ib_sa";


MODULE_INFO(srcversion, "5ACA97DA851E0D03CAC2E74");
