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
	{ 0xaa136450, "param_get_charp" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x2e60bace, "memcpy" },
	{ 0xafd234a5, "scsi_register" },
	{ 0x5152e605, "memcmp" },
	{ 0x4c3af445, "__request_region" },
	{ 0x72808e8d, "pci_find_device" },
	{ 0x3762cb6e, "ioremap_nocache" },
	{ 0xa09539e, "pci_bus_write_config_dword" },
	{ 0x59981248, "pci_bus_read_config_dword" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x85df9b6c, "strsep" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0xf9a482f9, "msleep" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0xd3597019, "scsi_scan_host" },
	{ 0x7f12bc25, "scsi_add_host" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x26e96637, "request_irq" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xea333b63, "scsi_track_queue_full" },
	{ 0x9b05ea5c, "scsi_command_size" },
	{ 0xa635ffaf, "scsi_adjust_queue_depth" },
	{ 0x1075bf0, "panic" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfe7afd73, "pci_bus_write_config_byte" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x4afe9a77, "scsi_partsize" },
	{ 0x3795802, "scsi_bios_ptable" },
	{ 0xaee32001, "scsi_unregister" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x89535602, "scsi_remove_host" },
	{ 0x1b7d4074, "printk" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";


MODULE_INFO(srcversion, "98D52E1A2F3B2723C378D39");
