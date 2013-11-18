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
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x17d9ce1a, "i2c_add_adapter" },
	{ 0x25da070, "snprintf" },
	{ 0x2e60bace, "memcpy" },
	{ 0x4c3af445, "__request_region" },
	{ 0x1b7d4074, "printk" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0x37a0cba, "kfree" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0xa4d29bf3, "i2c_del_adapter" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=i2c-core";

MODULE_ALIAS("pci:v000010DEd00000064sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000084sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000D4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000E4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000052sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000034sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000264sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000368sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "888DCAD55CF6189399E6B8E");
