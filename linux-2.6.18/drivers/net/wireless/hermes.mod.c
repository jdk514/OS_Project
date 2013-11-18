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
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x54324f95, "ioread16_rep" },
	{ 0x1eba9e49, "iowrite16_rep" },
	{ 0x1b7d4074, "printk" },
	{ 0x375bf494, "iowrite8" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x4775eacf, "iowrite16" },
	{ 0x3960713, "ioread16" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "513CE492195BD1B95DAFAF8");
