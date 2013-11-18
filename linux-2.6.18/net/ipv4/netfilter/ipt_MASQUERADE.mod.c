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
	{ 0x3e45e9ff, "register_inetaddr_notifier" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0xfcf2e40e, "xt_register_target" },
	{ 0xd10120cd, "ip_nat_setup_info" },
	{ 0x2e60bace, "memcpy" },
	{ 0xcc4c11a9, "_write_unlock_bh" },
	{ 0x93ba42f1, "_write_lock_bh" },
	{ 0x1b7d4074, "printk" },
	{ 0xf741d4eb, "inet_select_addr" },
	{ 0x8bf46c54, "_read_unlock_bh" },
	{ 0x21968b7f, "_read_lock_bh" },
	{ 0xe584a396, "ip_ct_iterate_cleanup" },
	{ 0x760b437a, "unregister_inetaddr_notifier" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0x786fab6c, "xt_unregister_target" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=x_tables,ip_nat,ip_conntrack";


MODULE_INFO(srcversion, "6A01F430446B26192EE1349");
