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
	{ 0x37a0cba, "kfree" },
	{ 0xeb8f54b3, "strstrip" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xaf5f9c5f, "nonseekable_open" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x4292364c, "schedule" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xd0ee38b8, "schedule_timeout_uninterruptible" },
	{ 0x25dd4bad, "misc_deregister" },
	{ 0x3980aac1, "unregister_reboot_notifier" },
	{ 0xd1d8adad, "atomic_notifier_chain_unregister" },
	{ 0xde08287b, "ipmi_smi_watcher_unregister" },
	{ 0xe0e482de, "ipmi_free_recv_msg" },
	{ 0x14126ae8, "kill_fasync" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x1075bf0, "panic" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x54ee23d3, "fasync_helper" },
	{ 0xde0c05c3, "up_write" },
	{ 0xb27719c5, "ipmi_destroy_user" },
	{ 0x1ef3eb01, "misc_register" },
	{ 0xa9f21ccf, "ipmi_get_version" },
	{ 0x355f3678, "ipmi_create_user" },
	{ 0xbca92367, "down_write" },
	{ 0xede74815, "atomic_notifier_chain_register" },
	{ 0x4a8702be, "panic_notifier_list" },
	{ 0x1cc6719a, "register_reboot_notifier" },
	{ 0x1fcebdd8, "ipmi_smi_watcher_register" },
	{ 0x61bed476, "up_read" },
	{ 0x1985af2a, "down_read" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xd16ac615, "__get_user_1" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xa34eb072, "wait_for_completion" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x1b7d4074, "printk" },
	{ 0x581c3d28, "ipmi_request_supply_msgs" },
	{ 0x7e0221e4, "complete" },
	{ 0x1d26aa98, "sprintf" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ipmi_msghandler";


MODULE_INFO(srcversion, "9BF634FE82E226B4DC3E79F");
