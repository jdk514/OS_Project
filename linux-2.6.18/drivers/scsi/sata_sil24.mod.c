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
	{ 0xa6ae80b8, "ata_scsi_device_suspend" },
	{ 0x6c10037a, "ata_scsi_device_resume" },
	{ 0x72ac4f87, "ata_std_bios_param" },
	{ 0xc673e23e, "ata_scsi_change_queue_depth" },
	{ 0x94a68723, "ata_scsi_slave_destroy" },
	{ 0x69e9a2cb, "ata_scsi_slave_config" },
	{ 0xc3bbf3c9, "ata_scsi_queuecmd" },
	{ 0x94dc62d2, "ata_scsi_ioctl" },
	{ 0x6f82367d, "ata_pci_device_suspend" },
	{ 0x9db86830, "ata_pci_remove_one" },
	{ 0x28177a3f, "ata_tf_to_fis" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0xceb32d70, "ata_device_add" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0x9c0148bd, "ata_std_ports" },
	{ 0x9728b2f9, "pci_set_consistent_dma_mask" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0xa3599a5d, "pci_iomap" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x531dcb8, "ata_dev_classify" },
	{ 0xffb705c8, "ata_port_offline" },
	{ 0xa27192a4, "sata_phy_debounce" },
	{ 0xc428068d, "sata_deb_timing_long" },
	{ 0x441e503e, "ata_port_online" },
	{ 0xd240605, "sata_set_spd" },
	{ 0xf8f3a0fb, "ata_ratelimit" },
	{ 0x35a82357, "ata_port_freeze" },
	{ 0x974c7c8a, "ata_qc_complete_multiple" },
	{ 0x813bc945, "ata_port_abort" },
	{ 0x7d11c268, "jiffies" },
	{ 0x28f35813, "scnprintf" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x2721f174, "ata_do_eh" },
	{ 0x8409af6, "ata_std_prereset" },
	{ 0x159a98a1, "ata_std_postreset" },
	{ 0x6153a8, "ata_eh_freeze_port" },
	{ 0x67df75, "ata_tf_from_fis" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0xf5eef57f, "pci_iounmap" },
	{ 0xb7e0863b, "ata_host_set_resume" },
	{ 0x55e771de, "ata_pci_device_do_resume" },
	{ 0x1b7d4074, "printk" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0xe49ff3b0, "ata_wait_register" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x2e60bace, "memcpy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v00001095d00003124sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003124sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00003132sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00003131sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00003531sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D7A14AE1BDF4B66D0E1FFA3");
