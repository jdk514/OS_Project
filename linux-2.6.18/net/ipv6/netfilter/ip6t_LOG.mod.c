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
	{ 0xfcf2e40e, "xt_register_target" },
	{ 0xb7e6dc17, "nf_log_packet" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0x8bf46c54, "_read_unlock_bh" },
	{ 0x21968b7f, "_read_lock_bh" },
	{ 0xb8bddf33, "ip6t_ext_hdr" },
	{ 0x1b7d4074, "printk" },
	{ 0xb1922cfe, "skb_copy_bits" },
	{ 0x786fab6c, "xt_unregister_target" },
	{ 0xac27241e, "nf_log_unregister_logger" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=x_tables,ip6_tables";


MODULE_INFO(srcversion, "9BC4CA222E4B642212B8022");
