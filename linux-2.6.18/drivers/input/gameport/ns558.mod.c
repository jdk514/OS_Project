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
	{ 0x34e485cf, "pnp_register_driver" },
	{ 0x9b8917e, "__gameport_register_port" },
	{ 0x7b7de87d, "gameport_set_phys" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x4c3af445, "__request_region" },
	{ 0x1b7d4074, "printk" },
	{ 0x53d27a87, "pnp_unregister_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0xb3e5cea, "gameport_unregister_port" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=gameport";

MODULE_ALIAS("pnp:d@P@0001*");
MODULE_ALIAS("pnp:d@P@0020*");
MODULE_ALIAS("pnp:d@P@1001*");
MODULE_ALIAS("pnp:d@P@2001*");
MODULE_ALIAS("pnp:dASB16fd*");
MODULE_ALIAS("pnp:dAZT3001*");
MODULE_ALIAS("pnp:dCDC0001*");
MODULE_ALIAS("pnp:dCSC0001*");
MODULE_ALIAS("pnp:dCSC000f*");
MODULE_ALIAS("pnp:dCSC0101*");
MODULE_ALIAS("pnp:dCTL7001*");
MODULE_ALIAS("pnp:dCTL7002*");
MODULE_ALIAS("pnp:dCTL7005*");
MODULE_ALIAS("pnp:dENS2020*");
MODULE_ALIAS("pnp:dESS0001*");
MODULE_ALIAS("pnp:dESS0005*");
MODULE_ALIAS("pnp:dESS6880*");
MODULE_ALIAS("pnp:dIBM0012*");
MODULE_ALIAS("pnp:dOPT0001*");
MODULE_ALIAS("pnp:dYMH0006*");
MODULE_ALIAS("pnp:dYMH0022*");
MODULE_ALIAS("pnp:dPNPb02f*");

MODULE_INFO(srcversion, "EA18F6A30AFBA03F7BAA1E0");
