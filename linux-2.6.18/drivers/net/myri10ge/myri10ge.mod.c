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
	{ 0x6900ec70, "ethtool_op_set_tso" },
	{ 0xa5f201bb, "ethtool_op_get_tso" },
	{ 0x4767d536, "ethtool_op_set_sg" },
	{ 0x3140fca, "ethtool_op_get_sg" },
	{ 0xb24e8b13, "ethtool_op_set_tx_hw_csum" },
	{ 0xf7712dbb, "ethtool_op_get_tx_csum" },
	{ 0xaa136450, "param_get_charp" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xc4be936d, "__pskb_pull_tail" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0xc52109a7, "skb_pad" },
	{ 0x156a70fb, "skb_checksum_help" },
	{ 0xfe7afd73, "pci_bus_write_config_byte" },
	{ 0x817c07c7, "netif_device_attach" },
	{ 0x5598dc19, "register_netdev" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x26e96637, "request_irq" },
	{ 0xa6172ba8, "pci_enable_msi" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x5152e605, "memcmp" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x56179c5f, "mtrr_add" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0x3320212, "pci_find_ext_capability" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0x7e9fcf24, "pci_set_power_state" },
	{ 0xff271466, "pci_choose_state" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf251c670, "netif_device_detach" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xc767785d, "netif_carrier_on" },
	{ 0xd8c152cd, "raise_softirq_irqoff" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xe8e53e56, "per_cpu__softnet_data" },
	{ 0x31f06050, "__netif_rx_schedule" },
	{ 0x81dabb5c, "netif_receive_skb" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xf3b39202, "mod_timer" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x33934162, "release_firmware" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0x70dc0e3, "request_firmware" },
	{ 0x859204af, "sscanf" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x272d394e, "mtrr_del" },
	{ 0xedc03953, "iounmap" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x69c560c8, "pci_disable_msi" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xa99d5102, "netif_carrier_off" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x37a0cba, "kfree" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0x59981248, "pci_bus_read_config_dword" },
	{ 0xb8435063, "pci_save_state" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1b7d4074, "printk" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaa2a72bf, "__iowrite64_copy" },
	{ 0x49653ec1, "pci_restore_state" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0xa09539e, "pci_bus_write_config_dword" },
	{ 0x20645ff6, "pci_find_capability" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1715059FF3060525EE1B659");
