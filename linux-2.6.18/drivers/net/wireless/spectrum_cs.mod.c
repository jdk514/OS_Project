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
	{ 0xf251c670, "netif_device_detach" },
	{ 0xbe93b89, "__orinoco_down" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x5598dc19, "register_netdev" },
	{ 0x94c5aaac, "pcmcia_request_configuration" },
	{ 0xed47b224, "hermes_struct_init" },
	{ 0x594bf15b, "ioport_map" },
	{ 0xd9273e5a, "pcmcia_request_irq" },
	{ 0xd12ca23c, "pccard_get_next_tuple" },
	{ 0x8a8d6f30, "pcmcia_request_io" },
	{ 0x2e60bace, "memcpy" },
	{ 0x2bc95bd4, "memset" },
	{ 0x838abde1, "pcmcia_get_configuration_info" },
	{ 0xcd2ac1c1, "pccard_parse_tuple" },
	{ 0xa2d20b5c, "pccard_get_tuple_data" },
	{ 0xbc08d5a8, "pccard_get_first_tuple" },
	{ 0x36feb7f6, "orinoco_interrupt" },
	{ 0x1f4c9e31, "alloc_orinocodev" },
	{ 0xa143539c, "pcmcia_register_driver" },
	{ 0x1b7d4074, "printk" },
	{ 0x33934162, "release_firmware" },
	{ 0x70dc0e3, "request_firmware" },
	{ 0xd5336e5d, "hermes_init" },
	{ 0x375bf494, "iowrite8" },
	{ 0x1eba9e49, "iowrite16_rep" },
	{ 0x54324f95, "ioread16_rep" },
	{ 0x4775eacf, "iowrite16" },
	{ 0x3960713, "ioread16" },
	{ 0xd54e219d, "hermes_docmd_wait" },
	{ 0xb4fb5977, "cs_error" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe91eae94, "pcmcia_access_configuration_register" },
	{ 0x66d603cb, "pcmcia_dev_present" },
	{ 0xd487849f, "free_orinocodev" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0xfc39e32f, "ioport_unmap" },
	{ 0x13d45792, "pcmcia_disable_device" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0x817c07c7, "netif_device_attach" },
	{ 0x30910043, "pcmcia_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=orinoco,hermes";

MODULE_ALIAS("pcmcia:m026Cc0001f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0104c0001f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa816CC815pb6FBF459Apc*pd*");

MODULE_INFO(srcversion, "C98677C7124DE614DA97267");
