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
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0xc53457bc, "spi_dv_device" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0xdec27e6e, "scsi_host_alloc" },
	{ 0x6bc7760e, "pci_get_slot" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0x1c1f571, "spi_attach_transport" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xa635ffaf, "scsi_adjust_queue_depth" },
	{ 0x7d11c268, "jiffies" },
	{ 0xaa136450, "param_get_charp" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0x2fad7ec2, "scsi_is_host_device" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0x389e200f, "ioread8" },
	{ 0x8d3894f2, "_ctype" },
	{ 0xf5eef57f, "pci_iounmap" },
	{ 0x1b7d4074, "printk" },
	{ 0x7f12bc25, "scsi_add_host" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0x5152e605, "memcmp" },
	{ 0x1075bf0, "panic" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xd3597019, "scsi_scan_host" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xef06974, "spi_populate_ppr_msg" },
	{ 0xf465b72a, "param_get_byte" },
	{ 0xf4bef259, "scsi_host_put" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0xfe0df06f, "pci_set_mwi" },
	{ 0x5418d52a, "param_get_ushort" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0xcffa2aff, "spi_populate_width_msg" },
	{ 0x107d6ba3, "__get_free_pages" },
	{ 0x72216fa9, "param_get_uint" },
	{ 0x26e96637, "request_irq" },
	{ 0x375bf494, "iowrite8" },
	{ 0x5ad53dbc, "param_set_byte" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2b119258, "spi_release_transport" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x683a3221, "param_set_copystring" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x9941ccb8, "free_pages" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xfe7afd73, "pci_bus_write_config_byte" },
	{ 0x4775eacf, "iowrite16" },
	{ 0x37a0cba, "kfree" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0x553f824a, "spi_display_xfer_agreement" },
	{ 0x8abac70a, "param_set_uint" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xa0c71dac, "spi_populate_sync_msg" },
	{ 0x3960713, "ioread16" },
	{ 0xdd334e07, "pci_dev_put" },
	{ 0x89535602, "scsi_remove_host" },
	{ 0x7e0221e4, "complete" },
	{ 0x93304684, "param_get_string" },
	{ 0xa3599a5d, "pci_iomap" },
	{ 0x908aa9b2, "iowrite32" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x3686ea09, "spi_print_msg" },
	{ 0x736bb1ef, "wait_for_completion_timeout" },
	{ 0x782b0008, "vsprintf" },
	{ 0x2241a928, "ioread32" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xc4c5509d, "param_set_ushort" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=scsi_transport_spi,scsi_mod";

MODULE_ALIAS("pci:v00001000d00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000000Asv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00001000d0000000Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000000Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000000Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000000Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000008Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C870D52048FE61B9570E7B1");
