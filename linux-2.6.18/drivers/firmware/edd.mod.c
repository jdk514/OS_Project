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
	{ 0x3da7382a, "pci_find_slot" },
	{ 0x2ef69a16, "sysfs_create_link" },
	{ 0x6dc76950, "sysfs_create_file" },
	{ 0x5f5de934, "kobject_register" },
	{ 0x7d4a1f83, "kobject_set_name" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x3568853c, "firmware_register" },
	{ 0x1b7d4074, "printk" },
	{ 0x25da070, "snprintf" },
	{ 0x8d3894f2, "_ctype" },
	{ 0x28f35813, "scnprintf" },
	{ 0xf6b3a641, "firmware_unregister" },
	{ 0xba09992e, "kobject_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x6a3e46a5, "edd" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "245ACCF5A3FA5549DC5D2F6");
