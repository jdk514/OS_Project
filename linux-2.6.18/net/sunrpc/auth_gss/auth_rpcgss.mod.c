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
	{ 0xb65ec91b, "rpcauth_register" },
	{ 0x68aede5, "xdr_shift_buf" },
	{ 0x96d20f15, "auth_domain_put" },
	{ 0xdb5ea3f9, "module_refcount" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xcff53400, "kref_put" },
	{ 0xc7c89918, "sunrpc_cache_update" },
	{ 0x8c840fa0, "xdr_buf_read_netobj" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0x3d7c39ea, "_read_lock" },
	{ 0x7d4e29ae, "page_address" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xbbdca8c9, "rpc_unlink" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x74ebf49d, "rpc_init_wait_queue" },
	{ 0xf668ba9, "svc_auth_unregister" },
	{ 0x111bcb2c, "groups_free" },
	{ 0xfbd7ed67, "cache_register" },
	{ 0x7d11c268, "jiffies" },
	{ 0x2cc2679, "xdr_buf_subsegment" },
	{ 0x31a89d59, "rpc_debug" },
	{ 0x6434a6c2, "cache_check" },
	{ 0xd4abb36c, "__alloc_pages" },
	{ 0xd1c2ab9b, "rpc_queue_upcall" },
	{ 0x1b7d4074, "printk" },
	{ 0xd7d9a5f9, "sunrpc_cache_lookup" },
	{ 0x5152e605, "memcmp" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x4e187030, "crypto_free_tfm" },
	{ 0xd2955490, "rpcauth_init_credcache" },
	{ 0xe97f4ce5, "qword_get" },
	{ 0xc8e96dea, "qword_addhex" },
	{ 0xe973e509, "rpcauth_lookup_credcache" },
	{ 0x1a5a57be, "cache_unregister" },
	{ 0x8a9eec75, "contig_page_data" },
	{ 0x4b05104f, "_write_lock" },
	{ 0xd83c3501, "rpcauth_free_credcache" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x65734b02, "__free_pages" },
	{ 0xa5652dee, "svc_auth_register" },
	{ 0x29c6f164, "xdr_encode_netobj" },
	{ 0x69a1b2f6, "rpc_wake_up_status" },
	{ 0x4292364c, "schedule" },
	{ 0x7f819f63, "auth_domain_lookup" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x16dfc375, "rpc_sleep_on" },
	{ 0x7047c641, "crypto_alloc_tfm" },
	{ 0xe9e79d5, "xdr_encode_opaque" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x9564e986, "rpcauth_unregister" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x51cd47e2, "groups_alloc" },
	{ 0x3ae831b6, "kref_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0x8a1203a9, "kref_get" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x71f59f14, "read_bytes_from_xdr_buf" },
	{ 0x8c45b512, "rpc_mkpipe" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x25da070, "snprintf" },
	{ 0x8235805b, "memmove" },
	{ 0xdc3dd085, "auth_domain_find" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0xb8264ba9, "xdr_buf_from_iov" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=sunrpc";


MODULE_INFO(srcversion, "40BFBC48E4741E7E347C70F");
