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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0xf9a482f9, "msleep" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x4827a016, "del_timer" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x6bc7760e, "pci_get_slot" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xc12e8a55, "proc_mkdir" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0x49653ec1, "pci_restore_state" },
	{ 0x1b7d4074, "printk" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x9eac042a, "__ioremap" },
	{ 0xa6172ba8, "pci_enable_msi" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0x26e96637, "request_irq" },
	{ 0x4292364c, "schedule" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x7e9fcf24, "pci_set_power_state" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xfe7afd73, "pci_bus_write_config_byte" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0x69c560c8, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x865edc9b, "finish_wait" },
	{ 0xdd334e07, "pci_dev_put" },
	{ 0x25da070, "snprintf" },
	{ 0xff271466, "pci_choose_state" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x9728b2f9, "pci_set_consistent_dma_mask" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xb8435063, "pci_save_state" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F3EB4E9DF7D9C95917104B1");
