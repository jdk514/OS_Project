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
	{ 0x6d0dc14c, "ata_host_stop" },
	{ 0x8d95cfb5, "ata_port_stop" },
	{ 0xc9c60b7c, "ata_port_start" },
	{ 0xd90592c7, "ata_bmdma_irq_clear" },
	{ 0x12058575, "ata_interrupt" },
	{ 0xfcc9986a, "ata_bmdma_post_internal_cmd" },
	{ 0x6843b329, "ata_bmdma_error_handler" },
	{ 0x3a750bd6, "ata_bmdma_thaw" },
	{ 0xc3047eb4, "ata_bmdma_freeze" },
	{ 0xe5c0dfc6, "ata_qc_issue_prot" },
	{ 0x589ac118, "ata_qc_prep" },
	{ 0x1713ef6b, "ata_pio_data_xfer" },
	{ 0x32271c97, "ata_bmdma_start" },
	{ 0x3019fbfe, "ata_bmdma_setup" },
	{ 0x75c1017, "ata_std_dev_select" },
	{ 0x480ec49e, "ata_check_status" },
	{ 0x4aec1363, "ata_exec_command" },
	{ 0x8c5cc98d, "ata_tf_read" },
	{ 0x2aab13fd, "ata_tf_load" },
	{ 0x2ad7a5ba, "ata_port_disable" },
	{ 0x72ac4f87, "ata_std_bios_param" },
	{ 0x94a68723, "ata_scsi_slave_destroy" },
	{ 0x69e9a2cb, "ata_scsi_slave_config" },
	{ 0xc3bbf3c9, "ata_scsi_queuecmd" },
	{ 0x94dc62d2, "ata_scsi_ioctl" },
	{ 0x9db86830, "ata_pci_remove_one" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0x37a0cba, "kfree" },
	{ 0xceb32d70, "ata_device_add" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xfe7afd73, "pci_bus_write_config_byte" },
	{ 0x9c0148bd, "ata_std_ports" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xf8a65d1b, "ata_pci_init_native_mode" },
	{ 0x9728b2f9, "pci_set_consistent_dma_mask" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x52f22ddc, "ata_busy_sleep" },
	{ 0x1b7d4074, "printk" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7d11c268, "jiffies" },
	{ 0xac623480, "ata_bmdma_drive_eh" },
	{ 0x80883390, "ata_std_softreset" },
	{ 0x159a98a1, "ata_std_postreset" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v00001106d00000591sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003149sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003249sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "826D41190D62A5FFC744E90");
