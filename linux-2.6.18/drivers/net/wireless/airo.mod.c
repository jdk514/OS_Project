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
	{ 0x4c3af445, "__request_region" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfd59d987, "complete_and_exit" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0xdc3eaf70, "iomem_resource" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x806d5133, "param_array_get" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xcf81566a, "alloc_netdev" },
	{ 0xd8c152cd, "raise_softirq_irqoff" },
	{ 0x38379ca3, "pci_enable_wake" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x7d11c268, "jiffies" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x96f7398e, "netif_rx" },
	{ 0x518accb0, "wireless_spy_update" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xaa136450, "param_get_charp" },
	{ 0xa34eb072, "wait_for_completion" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0x9070b3f2, "ioport_resource" },
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
	{ 0x4e187030, "crypto_free_tfm" },
	{ 0x625acc81, "__down_failed_interruptible" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0x9eac042a, "__ioremap" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0xd79b5a02, "allow_signal" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0xade698, "flush_signals" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x13c12a56, "skb_queue_tail" },
	{ 0x7dceceac, "capable" },
	{ 0x817c07c7, "netif_device_attach" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xf251c670, "netif_device_detach" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x432f6c35, "kmap" },
	{ 0x26e96637, "request_irq" },
	{ 0x4292364c, "schedule" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0x8372fc9a, "iw_handler_get_thrspy" },
	{ 0x35c2ba9e, "refrigerator" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x7047c641, "crypto_alloc_tfm" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x7e9fcf24, "pci_set_power_state" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0xebfa457d, "iw_handler_set_spy" },
	{ 0x37a0cba, "kfree" },
	{ 0x74ce7f8b, "proc_root_driver" },
	{ 0x932da67e, "kill_proc" },
	{ 0x2e60bace, "memcpy" },
	{ 0x298255fd, "dev_alloc_name" },
	{ 0xedc03953, "iounmap" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x7e9ebb05, "kernel_thread" },
	{ 0x3a233a33, "skb_dequeue" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0xff271466, "pci_choose_state" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0xdc43a9c8, "daemonize" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xb8435063, "pci_save_state" },
	{ 0xe8e53e56, "per_cpu__softnet_data" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000014B9d00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014B9d00004500sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014B9d00004800sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014B9d00000340sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014B9d00000350sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014B9d00005000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014B9d0000A504sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8314DE9910D329FCE39230E");
