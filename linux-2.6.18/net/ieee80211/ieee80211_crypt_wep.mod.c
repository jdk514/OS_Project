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
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x5152e605, "memcmp" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0xa860dd71, "ieee80211_register_crypto_ops" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x1b7d4074, "printk" },
	{ 0x7047c641, "crypto_alloc_tfm" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x37a0cba, "kfree" },
	{ 0x4e187030, "crypto_free_tfm" },
	{ 0x8235805b, "memmove" },
	{ 0xe3038592, "skb_under_panic" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xe982b3bb, "ieee80211_unregister_crypto_ops" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ieee80211_crypt";


MODULE_INFO(srcversion, "B950E7FFC48B7442D4F6C58");
