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
	{ 0x96befe4d, "no_llseek" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xaf5f9c5f, "nonseekable_open" },
	{ 0xdb5ea3f9, "module_refcount" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x1cc6719a, "register_reboot_notifier" },
	{ 0x4c3af445, "__request_region" },
	{ 0x1ef3eb01, "misc_register" },
	{ 0x2e60bace, "memcpy" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x4827a016, "del_timer" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0x3980aac1, "unregister_reboot_notifier" },
	{ 0x25dd4bad, "misc_deregister" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x1b7d4074, "printk" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd16ac615, "__get_user_1" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "85612388D0E2166129ACA04");
