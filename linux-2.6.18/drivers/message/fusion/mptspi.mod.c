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
	{ 0x3df0a70b, "mptscsih_proc_info" },
	{ 0x72c02099, "mptscsih_bios_param" },
	{ 0xd827ca2, "mptscsih_change_queue_depth" },
	{ 0x663853e6, "mptscsih_target_destroy" },
	{ 0x84d8e8fc, "mptscsih_host_reset" },
	{ 0xa7d922bc, "mptscsih_bus_reset" },
	{ 0x291da0ca, "mptscsih_dev_reset" },
	{ 0x2fed6586, "mptscsih_abort" },
	{ 0x312b720b, "mptscsih_qcmd" },
	{ 0xb2d5e3c3, "mptscsih_info" },
	{ 0x9aff7286, "mptscsih_shutdown" },
	{ 0xc27206c2, "mptscsih_suspend" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xf686164d, "mptscsih_remove" },
	{ 0xd3597019, "scsi_scan_host" },
	{ 0x6abaaad9, "mptscsih_TMHandler" },
	{ 0x7f12bc25, "scsi_add_host" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x764ddf1a, "mptscsih_timer_expired" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xdec27e6e, "scsi_host_alloc" },
	{ 0xfaf1f888, "mpt_attach" },
	{ 0x183d4fb4, "mptscsih_target_alloc" },
	{ 0xcb561d4f, "mptscsih_resume" },
	{ 0x66c003bc, "mptscsih_slave_destroy" },
	{ 0x3fc15018, "scsi_scan_target" },
	{ 0xe88da0b7, "mpt_findImVolumes" },
	{ 0x2500183d, "mptscsih_event_process" },
	{ 0xb296269c, "mptscsih_ioc_reset" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xf5b78a84, "mpt_reset_register" },
	{ 0xfa955d96, "mpt_event_register" },
	{ 0x620572b7, "mptscsih_scandv_complete" },
	{ 0x8e0983f6, "mptscsih_taskmgmt_complete" },
	{ 0x44dbcac8, "mpt_register" },
	{ 0xbe8e9821, "mptscsih_io_done" },
	{ 0x1c1f571, "spi_attach_transport" },
	{ 0x5961924d, "mptscsih_slave_alloc" },
	{ 0x648ab25f, "mptscsih_raid_id_to_num" },
	{ 0x21963ea4, "mptscsih_slave_configure" },
	{ 0x56930927, "__scsi_iterate_devices" },
	{ 0x37a0cba, "kfree" },
	{ 0x553f824a, "spi_display_xfer_agreement" },
	{ 0xc53457bc, "spi_dv_device" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x7e72ae57, "mpt_config" },
	{ 0x1b7d4074, "printk" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x2fad7ec2, "scsi_is_host_device" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x4292364c, "schedule" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x5528b7ca, "mpt_put_msg_frame" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x375d8126, "mpt_add_sge" },
	{ 0x12d90ef9, "mpt_get_msg_frame" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x2b119258, "spi_release_transport" },
	{ 0x6fb5ab71, "mpt_deregister" },
	{ 0x73fec4bb, "mpt_event_deregister" },
	{ 0xae4fb61e, "mpt_reset_deregister" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=mptscsih,scsi_mod,mptbase,scsi_transport_spi";

MODULE_ALIAS("pci:v00001000d00000030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000040sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2C83709F138FA09E8700882");
