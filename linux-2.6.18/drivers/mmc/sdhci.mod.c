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
	{ 0xdbd5f6ea, "mmc_detect_change" },
	{ 0x88c9b5d0, "mmc_add_host" },
	{ 0x26e96637, "request_irq" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0x3762cb6e, "ioremap_nocache" },
	{ 0x2822ea4b, "pci_request_region" },
	{ 0x25da070, "snprintf" },
	{ 0x61eefb7e, "mmc_alloc_host" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x49653ec1, "pci_restore_state" },
	{ 0x7e9fcf24, "pci_set_power_state" },
	{ 0x38379ca3, "pci_enable_wake" },
	{ 0xff271466, "pci_choose_state" },
	{ 0xb8435063, "pci_save_state" },
	{ 0xa626c85e, "mmc_resume_host" },
	{ 0x93f41ea5, "mmc_suspend_host" },
	{ 0x16b86be, "kunmap_atomic" },
	{ 0xa6367e45, "kmap_atomic" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xb3b8bf9c, "mmc_request_done" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x4827a016, "del_timer" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xed5c73bf, "__tasklet_schedule" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x564bf8bc, "mmc_free_host" },
	{ 0xa0e2231b, "pci_release_region" },
	{ 0xedc03953, "iounmap" },
	{ 0x79ad224b, "tasklet_kill" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xaf51232f, "mmc_remove_host" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1b7d4074, "printk" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=mmc_core";

MODULE_ALIAS("pci:v00001180d00000822sv00001014sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001180d00000822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Cd00008034sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v*d*sv*sd*bc08sc05i*");

MODULE_INFO(srcversion, "3BEDE73C2FCA648FDD8DB4B");
