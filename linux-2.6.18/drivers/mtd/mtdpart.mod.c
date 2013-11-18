#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
};

static const struct modversion_info ____versions[]
__attribute_used__
__attribute__((section("__versions"))) = {
	{ 0xb499ef18, "struct_module" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x1b7d4074, "printk" },
	{ 0x6d2bcfdd, "add_mtd_device" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0xb9203fc0, "del_mtd_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x98adfde2, "request_module" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=mtdcore";


MODULE_INFO(srcversion, "0A68E907FB34C59578C0FF9");
