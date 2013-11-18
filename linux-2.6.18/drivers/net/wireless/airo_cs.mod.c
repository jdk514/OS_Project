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
	{ 0xe4a7bc70, "init_airo_card" },
	{ 0x94c5aaac, "pcmcia_request_configuration" },
	{ 0xd9273e5a, "pcmcia_request_irq" },
	{ 0xd12ca23c, "pccard_get_next_tuple" },
	{ 0x98434c60, "pcmcia_map_mem_page" },
	{ 0xc5d155cf, "pcmcia_request_window" },
	{ 0x8a8d6f30, "pcmcia_request_io" },
	{ 0x2e60bace, "memcpy" },
	{ 0x2bc95bd4, "memset" },
	{ 0xcd2ac1c1, "pccard_parse_tuple" },
	{ 0xa2d20b5c, "pccard_get_tuple_data" },
	{ 0xbc08d5a8, "pccard_get_first_tuple" },
	{ 0x1b7d4074, "printk" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x37a0cba, "kfree" },
	{ 0xf6c35bcb, "stop_airo_card" },
	{ 0x13d45792, "pcmcia_disable_device" },
	{ 0xf251c670, "netif_device_detach" },
	{ 0x817c07c7, "netif_device_attach" },
	{ 0x96fcaac6, "reset_airo_card" },
	{ 0x30910043, "pcmcia_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=airo";

MODULE_ALIAS("pcmcia:m015Fc000Af*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m015Fc0005f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m015Fc0007f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0105c0007f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "11E40D856FC2E3B94D44EF9");
