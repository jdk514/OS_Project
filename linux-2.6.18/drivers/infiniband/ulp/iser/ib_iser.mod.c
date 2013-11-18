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
	{ 0xe2e90e7d, "mem_map" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xcc4c11a9, "_write_unlock_bh" },
	{ 0x53e48cb5, "ib_fmr_pool_map_phys" },
	{ 0xbc830838, "ib_dealloc_pd" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x8cdab534, "iscsi_queuecommand" },
	{ 0x7c775173, "__kfifo_put" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0xfec26d1e, "iscsi_conn_stop" },
	{ 0xc61ffb04, "iscsi_unregister_transport" },
	{ 0xf9b0f072, "iscsi_session_teardown" },
	{ 0x62d6a6fc, "rdma_destroy_id" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x1a3b35f6, "ib_destroy_fmr_pool" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0x6e0d8ec2, "rdma_connect" },
	{ 0x16b86be, "kunmap_atomic" },
	{ 0xa6367e45, "kmap_atomic" },
	{ 0x990f7462, "ib_alloc_pd" },
	{ 0xd645c93b, "scsi_queue_work" },
	{ 0x93ba42f1, "_write_lock_bh" },
	{ 0x6190a5b9, "ib_get_dma_mr" },
	{ 0xcb646007, "iscsi_prep_unsolicit_data_pdu" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0xf76bf8ae, "iscsi_conn_start" },
	{ 0x1b7d4074, "printk" },
	{ 0x859204af, "sscanf" },
	{ 0xd6c05676, "rdma_destroy_qp" },
	{ 0x33a8bc2b, "iscsi_conn_send_pdu" },
	{ 0x306de9c2, "iscsi_session_get_param" },
	{ 0x1e324b77, "iscsi_conn_teardown" },
	{ 0xed5c73bf, "__tasklet_schedule" },
	{ 0x89866474, "iscsi_conn_get_param" },
	{ 0xb689e344, "kmem_cache_free" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0xe9291640, "rdma_create_id" },
	{ 0xd312e32d, "ib_destroy_cq" },
	{ 0x79ad224b, "tasklet_kill" },
	{ 0x87b0c918, "rdma_create_qp" },
	{ 0x9c05d7fb, "iscsi_set_param" },
	{ 0x4b05104f, "_write_lock" },
	{ 0x58a3a192, "rdma_resolve_route" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x107d6ba3, "__get_free_pages" },
	{ 0x72216fa9, "param_get_uint" },
	{ 0x4292364c, "schedule" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0xc1cafcdb, "iscsi_register_transport" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x9a402663, "rdma_disconnect" },
	{ 0x2d48a021, "iscsi_complete_pdu" },
	{ 0x3d3ffc6f, "iscsi_conn_failure" },
	{ 0xfc76e10b, "kmem_cache_create" },
	{ 0x3d8dda9b, "ib_dereg_mr" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x9941ccb8, "free_pages" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0xd5116515, "iscsi_eh_abort" },
	{ 0x37a0cba, "kfree" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0x8abac70a, "param_set_uint" },
	{ 0x1124bdce, "ib_create_fmr_pool" },
	{ 0xb2e8433f, "class_to_transport_session" },
	{ 0x2e149b75, "rdma_resolve_addr" },
	{ 0xfb9e1a56, "iscsi_session_setup" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x732273b9, "iscsi_conn_bind" },
	{ 0xa2ddb5f8, "ib_create_cq" },
	{ 0xe574d207, "ib_fmr_pool_unmap" },
	{ 0x6275466a, "iscsi_session_recovery_timedout" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0xc3b93774, "iscsi_verify_itt" },
	{ 0x38346c25, "iscsi_conn_setup" },
	{ 0xc6c96716, "iscsi_eh_host_reset" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ib_core,libiscsi,scsi_transport_iscsi,rdma_cm,scsi_mod";


MODULE_INFO(srcversion, "3D0397455EE189336A60922");
