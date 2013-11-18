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
	{ 0xbea51acc, "add_mtd_partitions" },
	{ 0x612ced3a, "do_map_probe" },
	{ 0x1b7d4074, "printk" },
	{ 0x3762cb6e, "ioremap_nocache" },
	{ 0xedc03953, "iounmap" },
	{ 0xd83d7167, "map_destroy" },
	{ 0x5df825c4, "del_mtd_partitions" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=mtdpart,chipreg";


MODULE_INFO(srcversion, "F08945D82935263C4A08495");
