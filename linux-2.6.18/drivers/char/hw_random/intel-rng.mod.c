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
	{ 0x707e31d1, "hwrng_register" },
	{ 0x1b7d4074, "printk" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x3145216f, "pci_dev_present" },
	{ 0xedc03953, "iounmap" },
	{ 0xd205af0a, "hwrng_unregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00008086d00002418sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002428sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002430sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002448sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000244Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000245Esv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2D441AFD8DFD81176875926");
