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
	{ 0xec7bc0d, "__mod_timer" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xb4fb5977, "cs_error" },
	{ 0x5598dc19, "register_netdev" },
	{ 0x94c5aaac, "pcmcia_request_configuration" },
	{ 0xd9273e5a, "pcmcia_request_irq" },
	{ 0x8a8d6f30, "pcmcia_request_io" },
	{ 0xcd2ac1c1, "pccard_parse_tuple" },
	{ 0xa2d20b5c, "pccard_get_tuple_data" },
	{ 0xbc08d5a8, "pccard_get_first_tuple" },
	{ 0x2e60bace, "memcpy" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xa143539c, "pcmcia_register_driver" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x7d11c268, "jiffies" },
	{ 0x96f7398e, "netif_rx" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x66d603cb, "pcmcia_dev_present" },
	{ 0x1b7d4074, "printk" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0x13d45792, "pcmcia_disable_device" },
	{ 0xf251c670, "netif_device_detach" },
	{ 0x817c07c7, "netif_device_attach" },
	{ 0x30910043, "pcmcia_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pcmcia:m0101c0562f*fn00pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn00pfn*paF03E4E77pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0101c0589f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa58D93FC4pb992C2202pc*pd*");
MODULE_ALIAS("pcmcia:m0101c0035f*fn00pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0101c003Df*fn00pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "2F4A9FE2D3466510944A895");
