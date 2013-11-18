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
	{ 0xa143539c, "pcmcia_register_driver" },
	{ 0xb4fb5977, "cs_error" },
	{ 0x6634de10, "hisax_init_pcmcia" },
	{ 0x1b7d4074, "printk" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x94c5aaac, "pcmcia_request_configuration" },
	{ 0xd9273e5a, "pcmcia_request_irq" },
	{ 0xd12ca23c, "pccard_get_next_tuple" },
	{ 0x98434c60, "pcmcia_map_mem_page" },
	{ 0xc5d155cf, "pcmcia_request_window" },
	{ 0x8a8d6f30, "pcmcia_request_io" },
	{ 0x2e60bace, "memcpy" },
	{ 0x2bc95bd4, "memset" },
	{ 0x838abde1, "pcmcia_get_configuration_info" },
	{ 0xcd2ac1c1, "pccard_parse_tuple" },
	{ 0xa2d20b5c, "pccard_get_tuple_data" },
	{ 0xbc08d5a8, "pccard_get_first_tuple" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x37a0cba, "kfree" },
	{ 0x13d45792, "pcmcia_disable_device" },
	{ 0xfc27303b, "HiSax_closecard" },
	{ 0x30910043, "pcmcia_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=hisax";

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa81FB79F5pbF3612E1Dpc6B95C78Apd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa81FB79F5pbE4E9BC12pc397B7E90pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa81FB79F5pbE4E9BC12pc2E5C7FCEpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa81FB79F5pbE4E9BC12pc8DB143FEpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa81FB79F5pbE4E9BC12pcB391AB4Cpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paD79E0B84pb21D083AEpc*pd*");

MODULE_INFO(srcversion, "83089A3A173B23660C0D9A6");
