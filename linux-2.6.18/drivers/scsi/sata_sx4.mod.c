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
	{ 0x480ec49e, "ata_check_status" },
	{ 0x8c5cc98d, "ata_tf_read" },
	{ 0x2ad7a5ba, "ata_port_disable" },
	{ 0x72ac4f87, "ata_std_bios_param" },
	{ 0x94a68723, "ata_scsi_slave_destroy" },
	{ 0x69e9a2cb, "ata_scsi_slave_config" },
	{ 0xc3bbf3c9, "ata_scsi_queuecmd" },
	{ 0x94dc62d2, "ata_scsi_ioctl" },
	{ 0x9db86830, "ata_pci_remove_one" },
	{ 0xceb32d70, "ata_device_add" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xa3599a5d, "pci_iomap" },
	{ 0x9728b2f9, "pci_set_consistent_dma_mask" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xc9c60b7c, "ata_port_start" },
	{ 0x2d60e2c9, "ata_qc_complete" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x2aab13fd, "ata_tf_load" },
	{ 0x4aec1363, "ata_exec_command" },
	{ 0x9c5bca42, "ata_bus_reset" },
	{ 0x7c098b96, "ata_port_probe" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xe5c0dfc6, "ata_qc_issue_prot" },
	{ 0xcebf995d, "ata_eh_qc_complete" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1b7d4074, "printk" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x8d95cfb5, "ata_port_stop" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0xf5eef57f, "pci_iounmap" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v0000105Ad00006622sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D5E000FA3EA76C863A73865");
