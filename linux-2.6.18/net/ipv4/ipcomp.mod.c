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
	{ 0x3235dbeb, "pskb_expand_head" },
	{ 0xebace4f8, "ip_send_check" },
	{ 0xc73109d0, "___pskb_trim" },
	{ 0xc4be936d, "__pskb_pull_tail" },
	{ 0x468ed483, "inet_add_protocol" },
	{ 0xfdf00883, "xfrm_register_type" },
	{ 0x4c9bd9e3, "xfrm_calg_get_byname" },
	{ 0x48bcfa68, "__xfrm_state_destroy" },
	{ 0x2b02e035, "xfrm_state_insert" },
	{ 0x7fad4c51, "xfrm_init_state" },
	{ 0x55f6d69e, "xfrm_state_alloc" },
	{ 0x9a8c674b, "xfrm_state_lookup" },
	{ 0x7047c641, "crypto_alloc_tfm" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xab49c1ec, "__alloc_percpu" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xb057056b, "xfrm_state_delete_tunnel" },
	{ 0x2fd1d81c, "vfree" },
	{ 0xd012c83a, "free_percpu" },
	{ 0x332eb002, "__next_cpu" },
	{ 0x4e187030, "crypto_free_tfm" },
	{ 0xf4a91d48, "__first_cpu" },
	{ 0x5dfd3f0d, "cpu_possible_map" },
	{ 0x37a0cba, "kfree" },
	{ 0x9baa66d1, "xfrm_unregister_type" },
	{ 0x1b7d4074, "printk" },
	{ 0xc968c8a9, "inet_del_protocol" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "670DA79969C2B4E67593614");
