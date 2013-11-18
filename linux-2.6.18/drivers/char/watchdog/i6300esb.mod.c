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
	{ 0x1ef3eb01, "misc_register" },
	{ 0x1cc6719a, "register_reboot_notifier" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x2822ea4b, "pci_request_region" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x129cbf09, "pci_get_device" },
	{ 0xb8af8935, "pci_match_id" },
	{ 0x1b7d4074, "printk" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x59981248, "pci_bus_read_config_dword" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xdd334e07, "pci_dev_put" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0xa0e2231b, "pci_release_region" },
	{ 0xedc03953, "iounmap" },
	{ 0x3980aac1, "unregister_reboot_notifier" },
	{ 0x25dd4bad, "misc_deregister" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0xaf5f9c5f, "nonseekable_open" },
	{ 0xfe7afd73, "pci_bus_write_config_byte" },
	{ 0xd16ac615, "__get_user_1" },
	{ 0x1bcd461f, "_spin_lock" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00008086d000025ABsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2A37792AAD84EC032278ECA");
