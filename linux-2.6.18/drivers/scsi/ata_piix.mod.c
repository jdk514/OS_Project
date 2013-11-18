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
	{ 0x8d95cfb5, "ata_port_stop" },
	{ 0xc9c60b7c, "ata_port_start" },
	{ 0xd90592c7, "ata_bmdma_irq_clear" },
	{ 0x12058575, "ata_interrupt" },
	{ 0xfcc9986a, "ata_bmdma_post_internal_cmd" },
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
	{ 0x3622dcae, "ata_pci_default_filter" },
	{ 0x2ad7a5ba, "ata_port_disable" },
	{ 0xa6ae80b8, "ata_scsi_device_suspend" },
	{ 0x6c10037a, "ata_scsi_device_resume" },
	{ 0x72ac4f87, "ata_std_bios_param" },
	{ 0x94a68723, "ata_scsi_slave_destroy" },
	{ 0x69e9a2cb, "ata_scsi_slave_config" },
	{ 0xc3bbf3c9, "ata_scsi_queuecmd" },
	{ 0x94dc62d2, "ata_scsi_ioctl" },
	{ 0x36e371cc, "ata_pci_device_resume" },
	{ 0x6f82367d, "ata_pci_device_suspend" },
	{ 0x9db86830, "ata_pci_remove_one" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xfe7afd73, "pci_bus_write_config_byte" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xb9ecfa8, "ata_pci_init_one" },
	{ 0x129cbf09, "pci_get_device" },
	{ 0x218a4b4e, "pci_intx" },
	{ 0xf9a482f9, "msleep" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xf5eef57f, "pci_iounmap" },
	{ 0xa3599a5d, "pci_iomap" },
	{ 0x2e60bace, "memcpy" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0x1b7d4074, "printk" },
	{ 0x1017ab25, "pci_test_config_bits" },
	{ 0x6d0dc14c, "ata_host_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0x80883390, "ata_std_softreset" },
	{ 0xac623480, "ata_bmdma_drive_eh" },
	{ 0x8409af6, "ata_std_prereset" },
	{ 0x159a98a1, "ata_std_postreset" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v00008086d000024D1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000025A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000025B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002651sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002652sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002653sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002680sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002820sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002825sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002828sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "71016387550917DE480B386");
