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
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x1ef3eb01, "misc_register" },
	{ 0x1cc6719a, "register_reboot_notifier" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x1075bf0, "panic" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0x3980aac1, "unregister_reboot_notifier" },
	{ 0x25dd4bad, "misc_deregister" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xd16ac615, "__get_user_1" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x1b7d4074, "printk" },
	{ 0xaf5f9c5f, "nonseekable_open" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000011E3d00005030sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "28C9CA0AD7BB5DAB5629497");
