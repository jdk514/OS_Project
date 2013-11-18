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
	{ 0x3dc9fa5e, "ata_mmio_data_xfer" },
	{ 0x75c1017, "ata_std_dev_select" },
	{ 0x4aec1363, "ata_exec_command" },
	{ 0x8c5cc98d, "ata_tf_read" },
	{ 0x2aab13fd, "ata_tf_load" },
	{ 0x72ac4f87, "ata_std_bios_param" },
	{ 0x94a68723, "ata_scsi_slave_destroy" },
	{ 0x69e9a2cb, "ata_scsi_slave_config" },
	{ 0xc3bbf3c9, "ata_scsi_queuecmd" },
	{ 0x94dc62d2, "ata_scsi_ioctl" },
	{ 0x9db86830, "ata_pci_remove_one" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x2d60e2c9, "ata_qc_complete" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0xf5eef57f, "pci_iounmap" },
	{ 0xceb32d70, "ata_device_add" },
	{ 0xa6172ba8, "pci_enable_msi" },
	{ 0xa3599a5d, "pci_iomap" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xe5c0dfc6, "ata_qc_issue_prot" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xcebf995d, "ata_eh_qc_complete" },
	{ 0x531dcb8, "ata_dev_classify" },
	{ 0x480ec49e, "ata_check_status" },
	{ 0x2ad7a5ba, "ata_port_disable" },
	{ 0x7c098b96, "ata_port_probe" },
	{ 0x441e503e, "ata_port_online" },
	{ 0xb4401945, "sata_scr_read" },
	{ 0x7d11c268, "jiffies" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd1b2f2fa, "sata_scr_write_flush" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x1b7d4074, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6d0dc14c, "ata_host_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x218a4b4e, "pci_intx" },
	{ 0x69c560c8, "pci_disable_msi" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v000011ABd00005040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00005041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00005080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00005081sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006081sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000241sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "73C2097C96DE2929ED1012A");
