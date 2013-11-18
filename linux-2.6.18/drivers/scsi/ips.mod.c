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
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x1cc6719a, "register_reboot_notifier" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x85df9b6c, "strsep" },
	{ 0x4e830a3e, "strnicmp" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xa635ffaf, "scsi_adjust_queue_depth" },
	{ 0x782b0008, "vsprintf" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x4c3af445, "__request_region" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xd3597019, "scsi_scan_host" },
	{ 0x7f12bc25, "scsi_add_host" },
	{ 0xdec27e6e, "scsi_host_alloc" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0x26e96637, "request_irq" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0xf4bef259, "scsi_host_put" },
	{ 0x89535602, "scsi_remove_host" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0xdc3eaf70, "iomem_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1b7d4074, "printk" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x16b86be, "kunmap_atomic" },
	{ 0xa6367e45, "kmap_atomic" },
	{ 0x3980aac1, "unregister_reboot_notifier" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x2e60bace, "memcpy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

MODULE_ALIAS("pci:v00001014d0000002Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001014d000001BDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000250sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "916FE63BD17E908F10CAD1C");
