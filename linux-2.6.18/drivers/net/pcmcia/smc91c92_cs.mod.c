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
	{ 0x66d603cb, "pcmcia_dev_present" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x7f374097, "mii_nway_restart" },
	{ 0x15b22ef2, "mii_link_ok" },
	{ 0xb16b8e31, "mii_ethtool_sset" },
	{ 0x375cd688, "mii_ethtool_gset" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x1e5b7e01, "generic_mii_ioctl" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0x5598dc19, "register_netdev" },
	{ 0x94c5aaac, "pcmcia_request_configuration" },
	{ 0xd9273e5a, "pcmcia_request_irq" },
	{ 0xb4fb5977, "cs_error" },
	{ 0x37a0cba, "kfree" },
	{ 0x98434c60, "pcmcia_map_mem_page" },
	{ 0x9eac042a, "__ioremap" },
	{ 0xc5d155cf, "pcmcia_request_window" },
	{ 0x8a8d6f30, "pcmcia_request_io" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0xa143539c, "pcmcia_register_driver" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0x96f7398e, "netif_rx" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd8c152cd, "raise_softirq_irqoff" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xe8e53e56, "per_cpu__softnet_data" },
	{ 0x1676d1df, "pcmcia_modify_configuration" },
	{ 0xd12ca23c, "pccard_get_next_tuple" },
	{ 0xcd2ac1c1, "pccard_parse_tuple" },
	{ 0xa2d20b5c, "pccard_get_tuple_data" },
	{ 0xbc08d5a8, "pccard_get_first_tuple" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0x13d45792, "pcmcia_disable_device" },
	{ 0xedc03953, "iounmap" },
	{ 0xf251c670, "netif_device_detach" },
	{ 0x817c07c7, "netif_device_attach" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xbaeb160c, "bitreverse" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0x1b7d4074, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x30910043, "pcmcia_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=mii";

MODULE_ALIAS("pcmcia:m0109c0501f*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0140c000Af*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paF510DB04pb04CD2988pc46A52D63pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paF510DB04pb0143B773pc46A52D63pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paF510DB04pb856D66C8pcBD6C43EFpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paF510DB04pb52D21E1EpcBD6C43EFpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paDD9989BEpb662C394Cpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paF510DB04pb52D21E1Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa0C2F80CDpb656947B9pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa0C2F80CDpbDC9BA5EDpc*pd*");
MODULE_ALIAS("pcmcia:m016Cc0020f*fn00pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m016Cc0023f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa23C78A9Dpb00B2E941pcCEF397FBpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa78F308DCpbDCEA68BCpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paE59365C8pb6A2161D1pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa6A26D1CFpbC16CE9C5pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa58D93FC4pb244734E9pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa33234748pb3C95B953pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paA2CD8E6Dpb42DA662Apc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0C2F80CDpbB3466314pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0C2F80CDpb194B650Apc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5DpbDCEA68BCpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa4EF00B21pb844BE9E9pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paC4F8B18Bpb4A0EEB2Dpc*pd*");

MODULE_INFO(srcversion, "8CC2B5270C0B436AD0CC582");
