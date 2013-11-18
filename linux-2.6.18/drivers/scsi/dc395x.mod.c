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
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0xd3597019, "scsi_scan_host" },
	{ 0x7f12bc25, "scsi_add_host" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0x26e96637, "request_irq" },
	{ 0x4c3af445, "__request_region" },
	{ 0xdec27e6e, "scsi_host_alloc" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x56c8799d, "scsi_kunmap_atomic_sg" },
	{ 0x6ed333b0, "scsi_kmap_atomic_sg" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x28e5c9c8, "scsicam_bios_param" },
	{ 0x7d11c268, "jiffies" },
	{ 0x1b7d4074, "printk" },
	{ 0xf4bef259, "scsi_host_put" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x89535602, "scsi_remove_host" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x4827a016, "del_timer" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

MODULE_ALIAS("pci:v00001DE1d00000391sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "06C62D112BA4D79258356B6");
