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
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x1cc6719a, "register_reboot_notifier" },
	{ 0x1e8e5fac, "register_chrdev" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0x7054a3e4, "request_dma" },
	{ 0x26e96637, "request_irq" },
	{ 0xafd234a5, "scsi_register" },
	{ 0x3980aac1, "unregister_reboot_notifier" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0x72b243d4, "free_dma" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xd3597019, "scsi_scan_host" },
	{ 0x7f12bc25, "scsi_add_host" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x3506d65b, "scsi_free_host_dev" },
	{ 0x37a0cba, "kfree" },
	{ 0xa34eb072, "wait_for_completion" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x8d3894f2, "_ctype" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0xa09539e, "pci_bus_write_config_dword" },
	{ 0xedc03953, "iounmap" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x72808e8d, "pci_find_device" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x9d166afd, "scsi_get_host_dev" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x16b86be, "kunmap_atomic" },
	{ 0xa6367e45, "kmap_atomic" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x4827a016, "del_timer" },
	{ 0x7e0221e4, "complete" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0x5152e605, "memcmp" },
	{ 0x2e60bace, "memcpy" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xa635ffaf, "scsi_adjust_queue_depth" },
	{ 0xaee32001, "scsi_unregister" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x1b7d4074, "printk" },
	{ 0x89535602, "scsi_remove_host" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

MODULE_ALIAS("pci:v00001119d*sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000601sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B0B501B3F57A81F3AF539E4");
