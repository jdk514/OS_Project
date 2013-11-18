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
	{ 0x12f237eb, "__kzalloc" },
	{ 0xe49414e9, "rtattr_parse" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xe9b9a91f, "tcf_exts_dump_stats" },
	{ 0x12f10809, "tcf_exts_dump" },
	{ 0x77bed7e3, "__rta_fill" },
	{ 0x47741b69, "register_tcf_proto_ops" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x75924195, "tcf_action_exec" },
	{ 0x41f7018, "tcf_exts_change" },
	{ 0x85902f79, "rtattr_strlcpy" },
	{ 0x8bceecbe, "tcf_exts_validate" },
	{ 0x58563e64, "qdisc_unlock_tree" },
	{ 0x30b0fbc8, "qdisc_lock_tree" },
	{ 0x1b7d4074, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xa3d6f23b, "tcf_exts_destroy" },
	{ 0xadc4769c, "unregister_tcf_proto_ops" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6C6307766AAD8E92ADE0940");
