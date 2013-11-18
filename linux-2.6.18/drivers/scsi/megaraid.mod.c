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
	{ 0x72216fa9, "param_get_uint" },
	{ 0x8abac70a, "param_set_uint" },
	{ 0x5418d52a, "param_get_ushort" },
	{ 0xc4c5509d, "param_set_ushort" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x89535602, "scsi_remove_host" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0xedc03953, "iounmap" },
	{ 0xf4bef259, "scsi_host_put" },
	{ 0xd3597019, "scsi_scan_host" },
	{ 0x7f12bc25, "scsi_add_host" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0x26e96637, "request_irq" },
	{ 0xdec27e6e, "scsi_host_alloc" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x4c3af445, "__request_region" },
	{ 0xdc3eaf70, "iomem_resource" },
	{ 0x59981248, "pci_bus_read_config_dword" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x1e8e5fac, "register_chrdev" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xc12e8a55, "proc_mkdir" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x5152e605, "memcmp" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x7dceceac, "capable" },
	{ 0x7d4e29ae, "page_address" },
	{ 0x6df713c9, "scsi_device_types" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xa34eb072, "wait_for_completion" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x16b86be, "kunmap_atomic" },
	{ 0xa6367e45, "kmap_atomic" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0x7e0221e4, "complete" },
	{ 0x37a0cba, "kfree" },
	{ 0x4afe9a77, "scsi_partsize" },
	{ 0x3795802, "scsi_bios_ptable" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x760a0f4f, "yield" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1b7d4074, "printk" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0xd3460f31, "proc_root" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0xc192d491, "unregister_chrdev" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

MODULE_ALIAS("pci:v0000101Ed00009010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000101Ed00009060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001960sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B489BC8901732F8D3AB63BA");
