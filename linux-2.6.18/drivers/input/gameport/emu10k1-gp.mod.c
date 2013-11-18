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
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x9b8917e, "__gameport_register_port" },
	{ 0x7b7de87d, "gameport_set_phys" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x1b7d4074, "printk" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x4c3af445, "__request_region" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0xb3e5cea, "gameport_unregister_port" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=gameport";

MODULE_ALIAS("pci:v00001102d00007002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d00007003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d00007004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d00007005sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "98023294BF0A787C0908C5A");
