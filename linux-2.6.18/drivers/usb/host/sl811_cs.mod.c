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
	{ 0xb4fb5977, "cs_error" },
	{ 0xbed4bf59, "platform_device_register" },
	{ 0x67e6b461, "sl811h_driver" },
	{ 0x1b7d4074, "printk" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x94c5aaac, "pcmcia_request_configuration" },
	{ 0xd9273e5a, "pcmcia_request_irq" },
	{ 0xd12ca23c, "pccard_get_next_tuple" },
	{ 0x8a8d6f30, "pcmcia_request_io" },
	{ 0x2e60bace, "memcpy" },
	{ 0x838abde1, "pcmcia_get_configuration_info" },
	{ 0xcd2ac1c1, "pccard_parse_tuple" },
	{ 0xa2d20b5c, "pccard_get_tuple_data" },
	{ 0xbc08d5a8, "pccard_get_first_tuple" },
	{ 0x2bc95bd4, "memset" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x37a0cba, "kfree" },
	{ 0x2c077a33, "platform_device_unregister" },
	{ 0x13d45792, "pcmcia_disable_device" },
	{ 0x30910043, "pcmcia_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=sl811-hcd";

MODULE_ALIAS("pcmcia:mC015c0001f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "C4F3E5D8E27F07DD8E5FA2A");
