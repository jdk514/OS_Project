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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xc767785d, "netif_carrier_on" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0xa99d5102, "netif_carrier_off" },
	{ 0xd3f714e5, "hermes_bap_pread" },
	{ 0xd8c152cd, "raise_softirq_irqoff" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x7d11c268, "jiffies" },
	{ 0x96f7398e, "netif_rx" },
	{ 0x518accb0, "wireless_spy_update" },
	{ 0xd5168829, "hermes_allocate" },
	{ 0x1b7d4074, "printk" },
	{ 0xf7013d4e, "ethtool_op_get_link" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0x5152e605, "memcmp" },
	{ 0x46688607, "iw_handler_get_spy" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x9a5962fa, "wireless_send_event" },
	{ 0xd54e219d, "hermes_docmd_wait" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0x4196c38b, "hermes_write_ltv" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x7dceceac, "capable" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xf251c670, "netif_device_detach" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x8372fc9a, "iw_handler_get_thrspy" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xe3038592, "skb_under_panic" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0xc60b5e9e, "hermes_bap_pwrite" },
	{ 0xd5336e5d, "hermes_init" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x4775eacf, "iowrite16" },
	{ 0xebfa457d, "iw_handler_set_spy" },
	{ 0x37a0cba, "kfree" },
	{ 0xd38d8ae2, "hermes_read_ltv" },
	{ 0x3960713, "ioread16" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0x25da070, "snprintf" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0xe8e53e56, "per_cpu__softnet_data" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=hermes";


MODULE_INFO(srcversion, "56EE5B6AA18EB10A037A791");
