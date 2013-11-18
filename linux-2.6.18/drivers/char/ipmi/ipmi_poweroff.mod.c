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
	{ 0xb0cd0edd, "proc_dointvec" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xde08287b, "ipmi_smi_watcher_unregister" },
	{ 0x1e23e869, "ipmi_user_set_run_to_completion" },
	{ 0x60a32ea9, "pm_power_off" },
	{ 0xb27719c5, "ipmi_destroy_user" },
	{ 0x355f3678, "ipmi_create_user" },
	{ 0xa34eb072, "wait_for_completion" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x7e0221e4, "complete" },
	{ 0x5152e605, "memcmp" },
	{ 0x581c3d28, "ipmi_request_supply_msgs" },
	{ 0x4f8cddbf, "unregister_sysctl_table" },
	{ 0x1fcebdd8, "ipmi_smi_watcher_register" },
	{ 0x4f71ea18, "register_sysctl_table" },
	{ 0x1b7d4074, "printk" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ipmi_msghandler";


MODULE_INFO(srcversion, "4A4179B04A9996CE15635D3");
