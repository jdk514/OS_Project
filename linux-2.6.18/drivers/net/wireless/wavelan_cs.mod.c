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
	{ 0x8372fc9a, "iw_handler_get_thrspy" },
	{ 0x24c26754, "iw_handler_set_thrspy" },
	{ 0x46688607, "iw_handler_get_spy" },
	{ 0xebfa457d, "iw_handler_set_spy" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x96f7398e, "netif_rx" },
	{ 0x518accb0, "wireless_spy_update" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xc52109a7, "skb_pad" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x5152e605, "memcmp" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0x5598dc19, "register_netdev" },
	{ 0x98434c60, "pcmcia_map_mem_page" },
	{ 0x9eac042a, "__ioremap" },
	{ 0xc5d155cf, "pcmcia_request_window" },
	{ 0x94c5aaac, "pcmcia_request_configuration" },
	{ 0xd9273e5a, "pcmcia_request_irq" },
	{ 0x8a8d6f30, "pcmcia_request_io" },
	{ 0xcd2ac1c1, "pccard_parse_tuple" },
	{ 0xa2d20b5c, "pccard_get_tuple_data" },
	{ 0xbc08d5a8, "pccard_get_first_tuple" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0xa143539c, "pcmcia_register_driver" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x4827a016, "del_timer" },
	{ 0x37a0cba, "kfree" },
	{ 0x13d45792, "pcmcia_disable_device" },
	{ 0xedc03953, "iounmap" },
	{ 0xf251c670, "netif_device_detach" },
	{ 0x817c07c7, "netif_device_attach" },
	{ 0xb4fb5977, "cs_error" },
	{ 0xe91eae94, "pcmcia_access_configuration_register" },
	{ 0x2e60bace, "memcpy" },
	{ 0xe714c8c4, "dev_mc_add" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1b7d4074, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x30910043, "pcmcia_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paE7C5AFFDpb1BC50975pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa9999AB35pb00D05E06pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa23EB9949pb1BC50975pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa24358CD4pb1BC50975pc*pd*");

MODULE_INFO(srcversion, "D3F3BF5BD1BBEBDE5450FD3");
