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
	{ 0x1c66f64c, "net_random" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0x77bed7e3, "__rta_fill" },
	{ 0xf21a8115, "skb_queue_purge" },
	{ 0xf0f58d8d, "register_qdisc" },
	{ 0x37a0cba, "kfree" },
	{ 0x1b7d4074, "printk" },
	{ 0x58563e64, "qdisc_unlock_tree" },
	{ 0x30b0fbc8, "qdisc_lock_tree" },
	{ 0xe49414e9, "rtattr_parse" },
	{ 0x19202db3, "unregister_qdisc" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "823546AF9339350AF841EF0");
