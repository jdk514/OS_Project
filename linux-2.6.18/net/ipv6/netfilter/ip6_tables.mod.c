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
	{ 0x786fab6c, "xt_unregister_target" },
	{ 0xe1eab65, "xt_find_target" },
	{ 0xfe858069, "xt_unregister_table" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x63f05053, "xt_find_revision" },
	{ 0xcc4c11a9, "_write_unlock_bh" },
	{ 0x45f83c24, "xt_check_target" },
	{ 0x332eb002, "__next_cpu" },
	{ 0x44aa2672, "xt_proto_fini" },
	{ 0x99714050, "xt_table_unlock" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x5912f155, "xt_find_table_lock" },
	{ 0x41f32855, "xt_replace_table" },
	{ 0x2b3dbc9b, "xt_proto_init" },
	{ 0xe28815d1, "xt_register_table" },
	{ 0x21968b7f, "_read_lock_bh" },
	{ 0x93ba42f1, "_write_lock_bh" },
	{ 0x1b7d4074, "printk" },
	{ 0x8e0b7743, "ipv6_ext_hdr" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xf4a91d48, "__first_cpu" },
	{ 0xfcf2e40e, "xt_register_target" },
	{ 0x5dfd3f0d, "cpu_possible_map" },
	{ 0x7dceceac, "capable" },
	{ 0x3e9dc8f6, "nf_unregister_sockopt" },
	{ 0x60b4e935, "xt_unregister_match" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x8bf46c54, "_read_unlock_bh" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x2e60bace, "memcpy" },
	{ 0x5bfc16b, "xt_check_match" },
	{ 0x98adfde2, "request_module" },
	{ 0xca6132eb, "nf_register_sockopt" },
	{ 0xb67dcc20, "xt_alloc_table_info" },
	{ 0xf729c8e2, "xt_find_match" },
	{ 0x5219501f, "xt_register_match" },
	{ 0xb1922cfe, "skb_copy_bits" },
	{ 0x2076d245, "xt_free_table_info" },
	{ 0xf2a644fb, "copy_from_user" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=x_tables";


MODULE_INFO(srcversion, "23B56662687382966B15AEE");
