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
	{ 0x37a0cba, "kfree" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0xc12e8a55, "proc_mkdir" },
	{ 0x46621493, "acpi_specific_hotkey_enabled" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0x2bfeb410, "acpi_get_handle" },
	{ 0x1b7d4074, "printk" },
	{ 0xd0470c98, "acpi_evaluate_object" },
	{ 0x859204af, "sscanf" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x8aafb3c, "acpi_root_dir" },
	{ 0xa7ce993b, "remove_proc_entry" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7D2D09D79F793D92F7CB033");
