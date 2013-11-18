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
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0xdec27e6e, "scsi_host_alloc" },
	{ 0xd3597019, "scsi_scan_host" },
	{ 0x7f12bc25, "scsi_add_host" },
	{ 0x6818f98f, "mraid_mm_register_adp" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0xf4bef259, "scsi_host_put" },
	{ 0x89535602, "scsi_remove_host" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x7d4e29ae, "page_address" },
	{ 0x2e60bace, "memcpy" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xed5c73bf, "__tasklet_schedule" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0x59981248, "pci_bus_read_config_dword" },
	{ 0x5e552f71, "dma_pool_alloc" },
	{ 0x4c09c5f1, "dma_pool_create" },
	{ 0x26e96637, "request_irq" },
	{ 0x3762cb6e, "ioremap_nocache" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x79ad224b, "tasklet_kill" },
	{ 0x8a24f99e, "dma_pool_destroy" },
	{ 0x3db28e6f, "dma_pool_free" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x512c956d, "mraid_mm_unregister_adp" },
	{ 0x37a0cba, "kfree" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x4292364c, "schedule" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x96b27088, "__down_failed" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x1b7d4074, "printk" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x25da070, "snprintf" },
	{ 0x2250c66e, "mraid_mm_adapter_app_handle" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=scsi_mod,megaraid_mm";

MODULE_ALIAS("pci:v00001028d0000000Esv00001028sd00000123bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00001960sv00001028sd00000520bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00001960sv00001028sd00000518bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000407sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001028d0000000Fsv00001028sd0000014Abc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000013sv00001028sd0000016Cbc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000013sv00001028sd0000016Dbc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000013sv00001028sd0000016Ebc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000013sv00001028sd0000016Fbc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000013sv00001028sd00000170bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000408sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000101Ed00001960sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00001960sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000409sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0B71F30F1E95E778A74A4D1");
