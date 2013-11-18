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
	{ 0x7ded8240, "param_get_ulong" },
	{ 0x66eaa8a9, "param_set_ulong" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x96f7398e, "netif_rx" },
	{ 0x1da7bfee, "tr_type_trans" },
	{ 0xd7359fa8, "csum_partial_copy_generic" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x548de514, "__alloc_skb" },
	{ 0xc767785d, "netif_carrier_on" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0xd8c152cd, "raise_softirq_irqoff" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xe8e53e56, "per_cpu__softnet_data" },
	{ 0xa99d5102, "netif_carrier_off" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0x8e334f2b, "interruptible_sleep_on_timeout" },
	{ 0x8dd8f6fb, "sleep_on_timeout" },
	{ 0xb4fb5977, "cs_error" },
	{ 0x94c5aaac, "pcmcia_request_configuration" },
	{ 0x98434c60, "pcmcia_map_mem_page" },
	{ 0xc5d155cf, "pcmcia_request_window" },
	{ 0xd9273e5a, "pcmcia_request_irq" },
	{ 0x8a8d6f30, "pcmcia_request_io" },
	{ 0xcd2ac1c1, "pccard_parse_tuple" },
	{ 0xa2d20b5c, "pccard_get_tuple_data" },
	{ 0xbc08d5a8, "pccard_get_first_tuple" },
	{ 0xacafa1f8, "alloc_trdev" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xd0ee38b8, "schedule_timeout_uninterruptible" },
	{ 0x5598dc19, "register_netdev" },
	{ 0xa143539c, "pcmcia_register_driver" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x37a0cba, "kfree" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0x13d45792, "pcmcia_disable_device" },
	{ 0x58bc94c7, "pcmcia_release_window" },
	{ 0xf251c670, "netif_device_detach" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0x817c07c7, "netif_device_attach" },
	{ 0x7d11c268, "jiffies" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xedc03953, "iounmap" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x1b7d4074, "printk" },
	{ 0x30910043, "pcmcia_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa41240E5Bpb82C3734Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB569A6E5pbBF8EED47pc*pd*");

MODULE_INFO(srcversion, "626A7E9095D4F5BE41A88F4");
