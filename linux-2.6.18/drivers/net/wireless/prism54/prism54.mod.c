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
	{ 0x24c26754, "iw_handler_set_thrspy" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x61bed476, "up_read" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0xd0ee38b8, "schedule_timeout_uninterruptible" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0xd8c152cd, "raise_softirq_irqoff" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0x1985af2a, "down_read" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x96f7398e, "netif_rx" },
	{ 0x518accb0, "wireless_spy_update" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0x49653ec1, "pci_restore_state" },
	{ 0x1b7d4074, "printk" },
	{ 0x5152e605, "memcmp" },
	{ 0x46688607, "iw_handler_get_spy" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x5598dc19, "register_netdev" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x2cd3086, "__down_failed_trylock" },
	{ 0x9a5962fa, "wireless_send_event" },
	{ 0x625acc81, "__down_failed_interruptible" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0x9eac042a, "__ioremap" },
	{ 0xde0c05c3, "up_write" },
	{ 0xbca92367, "down_write" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xfe0df06f, "pci_set_mwi" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x7dceceac, "capable" },
	{ 0xc3c79136, "skb_copy_expand" },
	{ 0x817c07c7, "netif_device_attach" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xf251c670, "netif_device_detach" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x59981248, "pci_bus_read_config_dword" },
	{ 0x26e96637, "request_irq" },
	{ 0x8372fc9a, "iw_handler_get_thrspy" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xe3038592, "skb_under_panic" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xfe7afd73, "pci_bus_write_config_byte" },
	{ 0xebfa457d, "iw_handler_set_spy" },
	{ 0x37a0cba, "kfree" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xedc03953, "iounmap" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x70dc0e3, "request_firmware" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0x25da070, "snprintf" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x8235805b, "memmove" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x33934162, "release_firmware" },
	{ 0xf1f0ab07, "__init_rwsem" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xb8435063, "pci_save_state" },
	{ 0xe8e53e56, "per_cpu__softnet_data" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001260d00003890sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00006001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001260d00003877sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001260d00003886sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2A68B1031F49397A039CCA0");
