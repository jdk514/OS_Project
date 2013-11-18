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
	{ 0x66c003bc, "mptscsih_slave_destroy" },
	{ 0x84d8e8fc, "mptscsih_host_reset" },
	{ 0xa7d922bc, "mptscsih_bus_reset" },
	{ 0x291da0ca, "mptscsih_dev_reset" },
	{ 0x2fed6586, "mptscsih_abort" },
	{ 0xb2d5e3c3, "mptscsih_info" },
	{ 0x9aff7286, "mptscsih_shutdown" },
	{ 0xcb561d4f, "mptscsih_resume" },
	{ 0xc27206c2, "mptscsih_suspend" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x648ab25f, "mptscsih_raid_id_to_num" },
	{ 0x7f12bc25, "scsi_add_host" },
	{ 0x764ddf1a, "mptscsih_timer_expired" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xdec27e6e, "scsi_host_alloc" },
	{ 0xfaf1f888, "mpt_attach" },
	{ 0x74166cad, "scsi_remove_device" },
	{ 0x2972d808, "scsi_add_device" },
	{ 0x6ce1aae, "scsi_device_put" },
	{ 0xf24305c3, "scsi_device_lookup" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe88da0b7, "mpt_findImVolumes" },
	{ 0x2500183d, "mptscsih_event_process" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x739e7b76, "mptscsih_is_phys_disk" },
	{ 0x7175dba, "mpt_HardResetHandler" },
	{ 0x1c733de3, "mpt_free_msg_frame" },
	{ 0x736bb1ef, "wait_for_completion_timeout" },
	{ 0x5528b7ca, "mpt_put_msg_frame" },
	{ 0x12d90ef9, "mpt_get_msg_frame" },
	{ 0x4ff943ae, "mutex_lock_interruptible" },
	{ 0x7e0221e4, "complete" },
	{ 0x5aa587cf, "sas_port_delete" },
	{ 0x6abaaad9, "mptscsih_TMHandler" },
	{ 0x9a3c2016, "device_reprobe" },
	{ 0xeebf83a8, "starget_for_each_device" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xf5b78a84, "mpt_reset_register" },
	{ 0xb296269c, "mptscsih_ioc_reset" },
	{ 0xfa955d96, "mpt_event_register" },
	{ 0x620572b7, "mptscsih_scandv_complete" },
	{ 0x8e0983f6, "mptscsih_taskmgmt_complete" },
	{ 0x44dbcac8, "mpt_register" },
	{ 0xbe8e9821, "mptscsih_io_done" },
	{ 0x17980ef3, "sas_attach_transport" },
	{ 0x1b7d4074, "printk" },
	{ 0x62404982, "sas_rphy_free" },
	{ 0x8155526e, "sas_rphy_add" },
	{ 0x2e60bace, "memcpy" },
	{ 0xbe7ed251, "sas_expander_alloc" },
	{ 0xda084227, "sas_end_device_alloc" },
	{ 0x63d7b5d9, "scsi_is_sas_rphy" },
	{ 0x543d9843, "sas_port_add_phy" },
	{ 0x9d24eba5, "sas_port_add" },
	{ 0x42dc01eb, "sas_port_alloc_num" },
	{ 0xfef7fdb2, "sas_phy_free" },
	{ 0xa4b7cb73, "sas_phy_add" },
	{ 0x2d9fc872, "sas_phy_alloc" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xbed8d9b8, "sas_port_delete_phy" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x7e72ae57, "mpt_config" },
	{ 0x312b720b, "mptscsih_qcmd" },
	{ 0x21963ea4, "mptscsih_slave_configure" },
	{ 0x122c4875, "sas_read_port_mode_page" },
	{ 0x2fad7ec2, "scsi_is_host_device" },
	{ 0x28165999, "mptbase_sas_persist_operation" },
	{ 0xf686164d, "mptscsih_remove" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xd6e3067d, "sas_remove_host" },
	{ 0x37a0cba, "kfree" },
	{ 0x6fb5ab71, "mpt_deregister" },
	{ 0x73fec4bb, "mpt_event_deregister" },
	{ 0xae4fb61e, "mpt_reset_deregister" },
	{ 0x328061e4, "sas_release_transport" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=mptscsih,scsi_mod,mptbase,scsi_transport_sas";

MODULE_ALIAS("pci:v00001000d00000050sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000054sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000058sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000062sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "52C4910B2DC794FB5D172B4");
