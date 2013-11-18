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
	{ 0x1c5b2327, "kmem_cache_destroy" },
	{ 0xb35c8afd, "xfrm6_tunnel_deregister" },
	{ 0xcc4c11a9, "_write_unlock_bh" },
	{ 0x9baa66d1, "xfrm_unregister_type" },
	{ 0x21968b7f, "_read_lock_bh" },
	{ 0x93ba42f1, "_write_lock_bh" },
	{ 0x5152e605, "memcmp" },
	{ 0xb689e344, "kmem_cache_free" },
	{ 0xfdf00883, "xfrm_register_type" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x8bf46c54, "_read_unlock_bh" },
	{ 0xfc76e10b, "kmem_cache_create" },
	{ 0x5bc9a4b3, "xfrm6_rcv_spi" },
	{ 0xd0a133d1, "xfrm6_tunnel_register" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=tunnel6,ipv6";


MODULE_INFO(srcversion, "3C6E096ACD3FE9DD1D6908E");
