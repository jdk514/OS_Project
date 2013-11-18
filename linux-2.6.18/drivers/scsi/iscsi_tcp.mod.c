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
	{ 0x21c453a, "iscsi_change_queue_depth" },
	{ 0xc6c96716, "iscsi_eh_host_reset" },
	{ 0xd5116515, "iscsi_eh_abort" },
	{ 0x8cdab534, "iscsi_queuecommand" },
	{ 0x6275466a, "iscsi_session_recovery_timedout" },
	{ 0x33a8bc2b, "iscsi_conn_send_pdu" },
	{ 0x306de9c2, "iscsi_session_get_param" },
	{ 0xf76bf8ae, "iscsi_conn_start" },
	{ 0x72216fa9, "param_get_uint" },
	{ 0x8abac70a, "param_set_uint" },
	{ 0x89866474, "iscsi_conn_get_param" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xaa5a04f0, "tcp_read_sock" },
	{ 0x859204af, "sscanf" },
	{ 0x7047c641, "crypto_alloc_tfm" },
	{ 0x9c05d7fb, "iscsi_set_param" },
	{ 0xc1cafcdb, "iscsi_register_transport" },
	{ 0xfb9e1a56, "iscsi_session_setup" },
	{ 0xf9b0f072, "iscsi_session_teardown" },
	{ 0xb2e8433f, "class_to_transport_session" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x38346c25, "iscsi_conn_setup" },
	{ 0x16b86be, "kunmap_atomic" },
	{ 0xa6367e45, "kmap_atomic" },
	{ 0x2d48a021, "iscsi_complete_pdu" },
	{ 0xb4763ac1, "__iscsi_complete_pdu" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xa750c482, "iscsi_check_assign_cmdsn" },
	{ 0xc3b93774, "iscsi_verify_itt" },
	{ 0xb1922cfe, "skb_copy_bits" },
	{ 0x3d7c39ea, "_read_lock" },
	{ 0xd645c93b, "scsi_queue_work" },
	{ 0x732273b9, "iscsi_conn_bind" },
	{ 0x1b7d4074, "printk" },
	{ 0xb4e83653, "sockfd_lookup" },
	{ 0xfec26d1e, "iscsi_conn_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x4e187030, "crypto_free_tfm" },
	{ 0x1e324b77, "iscsi_conn_teardown" },
	{ 0x81cbc788, "sock_release" },
	{ 0x769f4612, "sk_free" },
	{ 0xcc4c11a9, "_write_unlock_bh" },
	{ 0x93ba42f1, "_write_lock_bh" },
	{ 0x5cc5b658, "kfifo_alloc" },
	{ 0x32b8fd2c, "iscsi_pool_init" },
	{ 0xc065cda, "iscsi_pool_free" },
	{ 0x8a64e7c, "kfifo_free" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0xcb646007, "iscsi_prep_unsolicit_data_pdu" },
	{ 0x7527e0d, "__kfifo_get" },
	{ 0x7c775173, "__kfifo_put" },
	{ 0x3d3ffc6f, "iscsi_conn_failure" },
	{ 0x27dc8ba7, "sock_no_sendpage" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0xc61ffb04, "iscsi_unregister_transport" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=libiscsi,scsi_transport_iscsi,scsi_mod";


MODULE_INFO(srcversion, "A29791BA778DE12D0856A0A");
