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
	{ 0x272abac2, "ata_noop_dev_select" },
	{ 0x2ad7a5ba, "ata_port_disable" },
	{ 0x72ac4f87, "ata_std_bios_param" },
	{ 0xc673e23e, "ata_scsi_change_queue_depth" },
	{ 0x94a68723, "ata_scsi_slave_destroy" },
	{ 0x69e9a2cb, "ata_scsi_slave_config" },
	{ 0xc3bbf3c9, "ata_scsi_queuecmd" },
	{ 0x94dc62d2, "ata_scsi_ioctl" },
	{ 0xceb32d70, "ata_device_add" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0x9728b2f9, "pci_set_consistent_dma_mask" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0xa3599a5d, "pci_iomap" },
	{ 0xa6172ba8, "pci_enable_msi" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xfe7afd73, "pci_bus_write_config_byte" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x52f22ddc, "ata_busy_sleep" },
	{ 0xffb705c8, "ata_port_offline" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0xf9a482f9, "msleep" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x1b7d4074, "printk" },
	{ 0xf8f3a0fb, "ata_ratelimit" },
	{ 0x35a82357, "ata_port_freeze" },
	{ 0x974c7c8a, "ata_qc_complete_multiple" },
	{ 0x813bc945, "ata_port_abort" },
	{ 0x7d11c268, "jiffies" },
	{ 0x28f35813, "scnprintf" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x159a98a1, "ata_std_postreset" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x67df75, "ata_tf_from_fis" },
	{ 0x8409af6, "ata_std_prereset" },
	{ 0xe49ff3b0, "ata_wait_register" },
	{ 0x441e503e, "ata_port_online" },
	{ 0x1c5b75e8, "sata_std_hardreset" },
	{ 0x28177a3f, "ata_tf_to_fis" },
	{ 0x531dcb8, "ata_dev_classify" },
	{ 0x2721f174, "ata_do_eh" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0x218a4b4e, "pci_intx" },
	{ 0x69c560c8, "pci_disable_msi" },
	{ 0xf5eef57f, "pci_iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0xf4bef259, "scsi_host_put" },
	{ 0x6a74743b, "ata_scsi_release" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xc70d85f4, "ata_port_detach" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=libata,scsi_mod";

MODULE_ALIAS("pci:v00008086d00002652sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002653sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027C1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B9d00005288sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002682sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002683sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002821sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002824sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002829sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000282Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002361sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002363sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002365sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002366sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004380sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004381sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003349sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000044Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000044Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000044Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000044Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "838FF95F4F8D8E441715270");
