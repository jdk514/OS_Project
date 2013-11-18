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
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x96f7398e, "netif_rx" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x5152e605, "memcmp" },
	{ 0xa143539c, "pcmcia_register_driver" },
	{ 0x66d603cb, "pcmcia_dev_present" },
	{ 0x7d11c268, "jiffies" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0xb4fb5977, "cs_error" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x5598dc19, "register_netdev" },
	{ 0x94c5aaac, "pcmcia_request_configuration" },
	{ 0xd9273e5a, "pcmcia_request_irq" },
	{ 0x8a8d6f30, "pcmcia_request_io" },
	{ 0xcd2ac1c1, "pccard_parse_tuple" },
	{ 0xa2d20b5c, "pccard_get_tuple_data" },
	{ 0xbc08d5a8, "pccard_get_first_tuple" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x13d45792, "pcmcia_disable_device" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0xf251c670, "netif_device_detach" },
	{ 0x817c07c7, "netif_device_attach" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x4292364c, "schedule" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1b7d4074, "printk" },
	{ 0x30910043, "pcmcia_unregister_driver" },
	{ 0x2bc95bd4, "memset" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pcmcia:mD601c0001f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "F4583AC6008D40FBB6E4924");
