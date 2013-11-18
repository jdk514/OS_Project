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
	{ 0xd700d99e, "nf_log_register" },
	{ 0x63db3b5b, "ebt_register_watcher" },
	{ 0xb7e6dc17, "nf_log_packet" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0xb1922cfe, "skb_copy_bits" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0x1b7d4074, "printk" },
	{ 0x6135241f, "ebt_unregister_watcher" },
	{ 0xac27241e, "nf_log_unregister_logger" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ebtables";


MODULE_INFO(srcversion, "23FEC4172B1B6F131C0FAB6");
