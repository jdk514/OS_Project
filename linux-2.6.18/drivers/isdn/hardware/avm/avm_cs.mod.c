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
	{ 0xa143539c, "pcmcia_register_driver" },
	{ 0xf14bf8b1, "b1pcmcia_addcard_b1" },
	{ 0xea620116, "b1pcmcia_addcard_m2" },
	{ 0xaec3240e, "b1pcmcia_addcard_m1" },
	{ 0x94c5aaac, "pcmcia_request_configuration" },
	{ 0xd9273e5a, "pcmcia_request_irq" },
	{ 0xd12ca23c, "pccard_get_next_tuple" },
	{ 0x8a8d6f30, "pcmcia_request_io" },
	{ 0x1b7d4074, "printk" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xb4fb5977, "cs_error" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xbc08d5a8, "pccard_get_first_tuple" },
	{ 0xcd2ac1c1, "pccard_parse_tuple" },
	{ 0xa2d20b5c, "pccard_get_tuple_data" },
	{ 0x37a0cba, "kfree" },
	{ 0x13d45792, "pcmcia_disable_device" },
	{ 0x29562993, "b1pcmcia_delcard" },
	{ 0x30910043, "pcmcia_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=b1pcmcia";

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa95D42008pb845DC335pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa95D42008pb81E10430pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa95D42008pb18E8558Apc*pd*");

MODULE_INFO(srcversion, "1F989B6FF469749C8826A1D");
