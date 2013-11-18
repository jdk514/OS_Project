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
	{ 0x7ded8240, "param_get_ulong" },
	{ 0x66eaa8a9, "param_set_ulong" },
	{ 0xd16ac615, "__get_user_1" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0xaf5f9c5f, "nonseekable_open" },
	{ 0x229fb2ef, "cdev_add" },
	{ 0xc171912, "cdev_init" },
	{ 0x29537c9e, "alloc_chrdev_region" },
	{ 0xd8e484f0, "register_chrdev_region" },
	{ 0x4c3af445, "__request_region" },
	{ 0x1b7d4074, "printk" },
	{ 0x3145216f, "pci_dev_present" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0xdc3debb9, "cdev_del" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "05744A01E12E58779706795");
