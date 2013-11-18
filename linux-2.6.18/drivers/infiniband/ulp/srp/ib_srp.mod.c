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
	{ 0x515ff74e, "ib_set_client_data" },
	{ 0x6180e3ac, "class_device_create_file" },
	{ 0x3c2b8737, "class_device_register" },
	{ 0x25da070, "snprintf" },
	{ 0x1124bdce, "ib_create_fmr_pool" },
	{ 0x6190a5b9, "ib_get_dma_mr" },
	{ 0x990f7462, "ib_alloc_pd" },
	{ 0x3dc8af4d, "ib_query_device" },
	{ 0x3fc15018, "scsi_scan_target" },
	{ 0x7f12bc25, "scsi_add_host" },
	{ 0x88a6d7f8, "ib_create_qp" },
	{ 0xa2ddb5f8, "ib_create_cq" },
	{ 0x1975aab0, "ib_get_cached_gid" },
	{ 0x85df9b6c, "strsep" },
	{ 0x4e3567f7, "match_int" },
	{ 0xad0413d4, "match_hex" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x61b7b126, "simple_strtoull" },
	{ 0xc1d50464, "match_strdup" },
	{ 0x86e9acae, "match_token" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xdec27e6e, "scsi_host_alloc" },
	{ 0x50535649, "ib_send_cm_drep" },
	{ 0x3ffd6d3, "ib_send_cm_rtu" },
	{ 0x85478027, "ib_cm_init_qp_attr" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xc06d03a0, "ib_create_cm_id" },
	{ 0x53e48cb5, "ib_fmr_pool_map_phys" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0xbc830838, "ib_dealloc_pd" },
	{ 0x3d8dda9b, "ib_dereg_mr" },
	{ 0x1a3b35f6, "ib_destroy_fmr_pool" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x5253a3a4, "class_device_unregister" },
	{ 0x93637a5a, "ib_get_client_data" },
	{ 0xf4bef259, "scsi_host_put" },
	{ 0x7eb46464, "ib_destroy_cm_id" },
	{ 0x89535602, "scsi_remove_host" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xd7ef5825, "ib_register_client" },
	{ 0x85898a89, "class_register" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x5666cf2b, "ib_send_cm_req" },
	{ 0x5152e605, "memcmp" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x496f1841, "ib_sa_path_rec_get" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x736bb1ef, "wait_for_completion_timeout" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0xe574d207, "ib_fmr_pool_unmap" },
	{ 0xc388a12c, "ib_modify_qp" },
	{ 0x5d638531, "ib_find_cached_pkey" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xd312e32d, "ib_destroy_cq" },
	{ 0xde42fc92, "ib_destroy_qp" },
	{ 0xa34eb072, "wait_for_completion" },
	{ 0xc1783464, "ib_send_cm_dreq" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x2e60bace, "memcpy" },
	{ 0x1b7d4074, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x7e0221e4, "complete" },
	{ 0x93618160, "class_unregister" },
	{ 0x148e6ca, "ib_unregister_client" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ib_core,scsi_mod,ib_cm,ib_sa";


MODULE_INFO(srcversion, "E78F6192CF8243F56FA83AD");
