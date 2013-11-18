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
	{ 0xfcf2e40e, "xt_register_target" },
	{ 0xe062bfc9, "selinux_relabel_packet_permission" },
	{ 0x149db923, "selinux_string_to_sid" },
	{ 0x1b7d4074, "printk" },
	{ 0x786fab6c, "xt_unregister_target" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=x_tables";


MODULE_INFO(srcversion, "18F68D5D8A3282AB75A1F8C");
