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
	{ 0x1c5b2327, "kmem_cache_destroy" },
	{ 0x9d489c00, "bus_register" },
	{ 0x845b7a76, "device_remove_file" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4d101f5f, "driver_register" },
	{ 0xd0ee38b8, "schedule_timeout_uninterruptible" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0xe5077a8f, "mempool_destroy" },
	{ 0x8c0be9b4, "queue_work" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x8a90d932, "allocate_resource" },
	{ 0x7d11c268, "jiffies" },
	{ 0x3da7382a, "pci_find_slot" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0xf2766228, "__create_workqueue" },
	{ 0x183fa88b, "mempool_alloc_slab" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0x5a37ee35, "device_del" },
	{ 0xcdfb7700, "device_register" },
	{ 0x1b7d4074, "printk" },
	{ 0x3e158c0e, "driver_unregister" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x31153eb8, "destroy_workqueue" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x4149cb93, "sysfs_remove_link" },
	{ 0x2ca5f1b5, "device_add" },
	{ 0x6e3baace, "bus_unregister" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x68e0d967, "device_create_file" },
	{ 0x2ef69a16, "sysfs_create_link" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xcfaf79ba, "mempool_alloc" },
	{ 0x3762cb6e, "ioremap_nocache" },
	{ 0xa9615177, "put_device" },
	{ 0x72216fa9, "param_get_uint" },
	{ 0x26e96637, "request_irq" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0xbe8a1485, "mempool_create" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x37a9798f, "mempool_free" },
	{ 0xfc76e10b, "kmem_cache_create" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0x8abac70a, "param_set_uint" },
	{ 0xc07f052f, "device_initialize" },
	{ 0xedc03953, "iounmap" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x761ca99d, "device_unregister" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x25da070, "snprintf" },
	{ 0x7c85212e, "pci_find_parent_resource" },
	{ 0x96b27088, "__down_failed" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v*d*sv*sd*bc0Esc00i*");
MODULE_ALIAS("pci:v00001044d0000A511sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001962sv0000105Asd*bc*sc*i*");

MODULE_INFO(srcversion, "2FC7327B877D600E75AC31D");
