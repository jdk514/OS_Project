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
	{ 0x83d09e36, "video_exclusive_release" },
	{ 0xb545cb0b, "video_register_device" },
	{ 0x1b7d4074, "printk" },
	{ 0xa2b8d7fc, "video_unregister_device" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x500c5062, "video_devdata" },
	{ 0xbea94231, "video_exclusive_open" },
	{ 0xf2a644fb, "copy_from_user" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=videodev";


MODULE_INFO(srcversion, "52517AA37FF6D739F6E170B");
