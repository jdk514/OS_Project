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
	{ 0x4c09c5f1, "dma_pool_create" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x4292364c, "schedule" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xae41e402, "usb_hcd_poll_rh_status" },
	{ 0x768040a5, "usb_root_hub_lost_power" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x8a24f99e, "dma_pool_destroy" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0xf855182, "usb_hcd_resume_root_hub" },
	{ 0x5c88228e, "usb_claim_bandwidth" },
	{ 0xdfeef794, "usb_check_bandwidth" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xfc76e10b, "kmem_cache_create" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x37a0cba, "kfree" },
	{ 0xaab4112d, "debugfs_remove" },
	{ 0x1c5b2327, "kmem_cache_destroy" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0x6619f2ac, "uhci_check_and_reset_hc" },
	{ 0x641406ae, "uhci_reset_hc" },
	{ 0x5e552f71, "dma_pool_alloc" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x4827a016, "del_timer" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x4b1cfaef, "usb_hcd_giveback_urb" },
	{ 0x9114871f, "usb_release_bandwidth" },
	{ 0xb689e344, "kmem_cache_free" },
	{ 0x3db28e6f, "dma_pool_free" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x1b7d4074, "printk" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0xf9a482f9, "msleep" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc03i00*");

MODULE_INFO(srcversion, "E420EF17C497CD11037B5E1");
