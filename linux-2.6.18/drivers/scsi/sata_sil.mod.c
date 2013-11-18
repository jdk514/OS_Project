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
	{ 0xde2afb54, "ata_bmdma_status" },
	{ 0x5218b023, "ata_bmdma_stop" },
	{ 0xe4a8a0eb, "ata_pci_host_stop" },
	{ 0x8d95cfb5, "ata_port_stop" },
	{ 0xc9c60b7c, "ata_port_start" },
	{ 0xfcc9986a, "ata_bmdma_post_internal_cmd" },
	{ 0x6843b329, "ata_bmdma_error_handler" },
	{ 0xe5c0dfc6, "ata_qc_issue_prot" },
	{ 0x589ac118, "ata_qc_prep" },
	{ 0x3dc9fa5e, "ata_mmio_data_xfer" },
	{ 0x32271c97, "ata_bmdma_start" },
	{ 0x3019fbfe, "ata_bmdma_setup" },
	{ 0x75c1017, "ata_std_dev_select" },
	{ 0x480ec49e, "ata_check_status" },
	{ 0x4aec1363, "ata_exec_command" },
	{ 0x8c5cc98d, "ata_tf_read" },
	{ 0x2aab13fd, "ata_tf_load" },
	{ 0x2ad7a5ba, "ata_port_disable" },
	{ 0xa6ae80b8, "ata_scsi_device_suspend" },
	{ 0x6c10037a, "ata_scsi_device_resume" },
	{ 0x72ac4f87, "ata_std_bios_param" },
	{ 0x94a68723, "ata_scsi_slave_destroy" },
	{ 0x69e9a2cb, "ata_scsi_slave_config" },
	{ 0xc3bbf3c9, "ata_scsi_queuecmd" },
	{ 0x94dc62d2, "ata_scsi_ioctl" },
	{ 0x6f82367d, "ata_pci_device_suspend" },
	{ 0x9db86830, "ata_pci_remove_one" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x35a82357, "ata_port_freeze" },
	{ 0x3fefc5f9, "ata_hsm_move" },
	{ 0xd90592c7, "ata_bmdma_irq_clear" },
	{ 0x7d11c268, "jiffies" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0x37a0cba, "kfree" },
	{ 0xceb32d70, "ata_device_add" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0x9c0148bd, "ata_std_ports" },
	{ 0xa3599a5d, "pci_iomap" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x9728b2f9, "pci_set_consistent_dma_mask" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xb6aeb661, "ata_id_c_string" },
	{ 0xb7e0863b, "ata_host_set_resume" },
	{ 0x55e771de, "ata_pci_device_do_resume" },
	{ 0x1b7d4074, "printk" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v00001095d00003112sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00000240sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00003512sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00003114sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000436Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004379sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000437Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "DD553B57E964E6C31251BAF");
