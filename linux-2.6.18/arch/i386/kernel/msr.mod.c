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
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x14bfd1, "smp_call_function" },
	{ 0x85c02b80, "cpu_data" },
	{ 0x5dfe8f1a, "unlock_kernel" },
	{ 0x5568be43, "lock_kernel" },
	{ 0x4550ba8a, "register_cpu_notifier" },
	{ 0xc83decb4, "class_create" },
	{ 0x1b7d4074, "printk" },
	{ 0x1e8e5fac, "register_chrdev" },
	{ 0xd10fc04d, "class_device_create" },
	{ 0x74cc1cbe, "unregister_cpu_notifier" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0x93538172, "class_destroy" },
	{ 0x332eb002, "__next_cpu" },
	{ 0x27514859, "class_device_destroy" },
	{ 0xf4a91d48, "__first_cpu" },
	{ 0x99bdf0a8, "cpu_online_map" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D440499A990C7FA0E81461D");
