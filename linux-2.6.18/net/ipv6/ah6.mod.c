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
	{ 0xf2ff4a6d, "xfrm6_rcv" },
	{ 0x5152e605, "memcmp" },
	{ 0xe3038592, "skb_under_panic" },
	{ 0x3235dbeb, "pskb_expand_head" },
	{ 0xc4be936d, "__pskb_pull_tail" },
	{ 0x217ef805, "xfrm_aalg_get_byname" },
	{ 0x7047c641, "crypto_alloc_tfm" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xf3e66f5b, "xfrm_replay_notify" },
	{ 0xd471f34e, "netlink_has_listeners" },
	{ 0x7c059978, "xfrm_nl" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xe459a060, "crypto_hmac_final" },
	{ 0x6fe486f3, "skb_icv_walk" },
	{ 0xc2c9830e, "crypto_hmac_update" },
	{ 0xb02da006, "crypto_hmac_init" },
	{ 0x307f2317, "inet6_add_protocol" },
	{ 0xfdf00883, "xfrm_register_type" },
	{ 0x48bcfa68, "__xfrm_state_destroy" },
	{ 0x9a8c674b, "xfrm_state_lookup" },
	{ 0x4e187030, "crypto_free_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0x8235805b, "memmove" },
	{ 0x9baa66d1, "xfrm_unregister_type" },
	{ 0x1b7d4074, "printk" },
	{ 0x9278bfec, "inet6_del_protocol" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ipv6";


MODULE_INFO(srcversion, "5ABB97BBC546E01DD7BDFDD");
