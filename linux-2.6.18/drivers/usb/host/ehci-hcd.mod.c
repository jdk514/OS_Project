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
	{ 0x70786751, "usb_hcd_pci_resume" },
	{ 0x6b1efc48, "usb_hcd_pci_suspend" },
	{ 0xd986548b, "usb_hcd_pci_remove" },
	{ 0x4a48b403, "usb_hcd_pci_probe" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x72216fa9, "param_get_uint" },
	{ 0x8abac70a, "param_set_uint" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0x1cc6719a, "register_reboot_notifier" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x4c09c5f1, "dma_pool_create" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x9728b2f9, "pci_set_consistent_dma_mask" },
	{ 0xd0ee38b8, "schedule_timeout_uninterruptible" },
	{ 0x4783724e, "usb_get_urb" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0x768040a5, "usb_root_hub_lost_power" },
	{ 0xf855182, "usb_hcd_resume_root_hub" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0xfe0df06f, "pci_set_mwi" },
	{ 0x59981248, "pci_bus_read_config_dword" },
	{ 0x20645ff6, "pci_find_capability" },
	{ 0x3980aac1, "unregister_reboot_notifier" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x8a24f99e, "dma_pool_destroy" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x2e60bace, "memcpy" },
	{ 0x7e64181d, "usb_calc_bus_time" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x3ae831b6, "kref_init" },
	{ 0x5e552f71, "dma_pool_alloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0xd4b7594e, "usb_hub_tt_clear_buffer" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x37a0cba, "kfree" },
	{ 0x4b1cfaef, "usb_hcd_giveback_urb" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xcff53400, "kref_put" },
	{ 0x8a1203a9, "kref_get" },
	{ 0x1b7d4074, "printk" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x3db28e6f, "dma_pool_free" },
	{ 0x7d11c268, "jiffies" },
	{ 0xeae3dfd6, "__const_udelay" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc03i20*");

MODULE_INFO(srcversion, "B00437B816B6D379BB77286");
