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
	{ 0x1d676acf, "boot_tvec_bases" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x1ef3eb01, "misc_register" },
	{ 0x1cc6719a, "register_reboot_notifier" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xd0c05159, "emergency_restart" },
	{ 0xaf5f9c5f, "nonseekable_open" },
	{ 0xdb5ea3f9, "module_refcount" },
	{ 0x1b7d4074, "printk" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0xd16ac615, "__get_user_1" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x4827a016, "del_timer" },
	{ 0x3980aac1, "unregister_reboot_notifier" },
	{ 0x25dd4bad, "misc_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D0C09C70A7A3A25171A388F");
