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
	{ 0x21963ea4, "mptscsih_slave_configure" },
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
	{ 0x28264729, "fc_remote_port_rolechg" },
	{ 0xf9322ff4, "fc_remote_port_add" },
	{ 0xd0bbbd3f, "flush_workqueue" },
	{ 0xf2766228, "__create_workqueue" },
	{ 0x25da070, "snprintf" },
	{ 0x7f12bc25, "scsi_add_host" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x764ddf1a, "mptscsih_timer_expired" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xdec27e6e, "scsi_host_alloc" },
	{ 0xfaf1f888, "mpt_attach" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x312b720b, "mptscsih_qcmd" },
	{ 0x310917fe, "sort" },
	{ 0x2e60bace, "memcpy" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0xf124ca1f, "fc_remote_port_delete" },
	{ 0x2500183d, "mptscsih_event_process" },
	{ 0x8c0be9b4, "queue_work" },
	{ 0xb296269c, "mptscsih_ioc_reset" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xf5b78a84, "mpt_reset_register" },
	{ 0xfa955d96, "mpt_event_register" },
	{ 0x620572b7, "mptscsih_scandv_complete" },
	{ 0x8e0983f6, "mptscsih_taskmgmt_complete" },
	{ 0x44dbcac8, "mpt_register" },
	{ 0xbe8e9821, "mptscsih_io_done" },
	{ 0x8475ea75, "fc_attach_transport" },
	{ 0x1b7d4074, "printk" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x7e72ae57, "mpt_config" },
	{ 0xf1e222e8, "scsi_is_fc_rport" },
	{ 0xf686164d, "mptscsih_remove" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0x4c185a54, "fc_remove_host" },
	{ 0x31153eb8, "destroy_workqueue" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x6fb5ab71, "mpt_deregister" },
	{ 0x73fec4bb, "mpt_event_deregister" },
	{ 0xae4fb61e, "mpt_reset_deregister" },
	{ 0x9541a10f, "fc_release_transport" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=mptscsih,scsi_transport_fc,scsi_mod,mptbase";

MODULE_ALIAS("pci:v00001000d00000621sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000624sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000622sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000628sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000626sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000642sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000640sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000646sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A931417D2FE43F934D04D5E");
