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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xc52ef5, "g_make_token_header" },
	{ 0xf42b8826, "make_checksum" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x52735a38, "gss_mech_register" },
	{ 0x4c2f4b6d, "print_hexl" },
	{ 0x7d11c268, "jiffies" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0xf8b2ff6e, "g_verify_token_header" },
	{ 0x31a89d59, "rpc_debug" },
	{ 0x1b7d4074, "printk" },
	{ 0x5152e605, "memcmp" },
	{ 0x4e187030, "crypto_free_tfm" },
	{ 0x2f217791, "gss_mech_unregister" },
	{ 0x7047c641, "crypto_alloc_tfm" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xb5dea7ef, "g_token_size" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=auth_rpcgss,sunrpc";


MODULE_INFO(srcversion, "BDA1B276A1D553B0D75A20F");
