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
	{ 0x7d4fcb06, "xfrm4_rcv" },
	{ 0x5152e605, "memcmp" },
	{ 0xe3038592, "skb_under_panic" },
	{ 0x3235dbeb, "pskb_expand_head" },
	{ 0xc4be936d, "__pskb_pull_tail" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x217ef805, "xfrm_aalg_get_byname" },
	{ 0x7047c641, "crypto_alloc_tfm" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xebace4f8, "ip_send_check" },
	{ 0xf3e66f5b, "xfrm_replay_notify" },
	{ 0xd471f34e, "netlink_has_listeners" },
	{ 0x7c059978, "xfrm_nl" },
	{ 0xe459a060, "crypto_hmac_final" },
	{ 0x6fe486f3, "skb_icv_walk" },
	{ 0xc2c9830e, "crypto_hmac_update" },
	{ 0xb02da006, "crypto_hmac_init" },
	{ 0x48bcfa68, "__xfrm_state_destroy" },
	{ 0x9a8c674b, "xfrm_state_lookup" },
	{ 0x468ed483, "inet_add_protocol" },
	{ 0xfdf00883, "xfrm_register_type" },
	{ 0x4e187030, "crypto_free_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0x9baa66d1, "xfrm_unregister_type" },
	{ 0x1b7d4074, "printk" },
	{ 0xc968c8a9, "inet_del_protocol" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C5DD1137E3AC8F930E36CBA");