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
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x768040a5, "usb_root_hub_lost_power" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x2cd3086, "__down_failed_trylock" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x7e64181d, "usb_calc_bus_time" },
	{ 0x3da7382a, "pci_find_slot" },
	{ 0xd0ee38b8, "schedule_timeout_uninterruptible" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x1cc6719a, "register_reboot_notifier" },
	{ 0x4c09c5f1, "dma_pool_create" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x8a24f99e, "dma_pool_destroy" },
	{ 0x3980aac1, "unregister_reboot_notifier" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x5e552f71, "dma_pool_alloc" },
	{ 0xf855182, "usb_hcd_resume_root_hub" },
	{ 0x9e8e043d, "usb_hcd_suspend_root_hub" },
	{ 0x7d11c268, "jiffies" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x1b7d4074, "printk" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x4b1cfaef, "usb_hcd_giveback_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x3db28e6f, "dma_pool_free" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc03i10*");

MODULE_INFO(srcversion, "E53437064626400CD08203F");
