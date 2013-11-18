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
	{ 0xf9a482f9, "msleep" },
	{ 0x3da60680, "attach_capi_ctr" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xd42dd828, "capi_ctr_handle_message" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x1b7d4074, "printk" },
	{ 0x65e4602a, "capi_ctr_ready" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x548de514, "__alloc_skb" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x2e60bace, "memcpy" },
	{ 0x41b3d0a1, "detach_capi_ctr" },
	{ 0x8235805b, "memmove" },
	{ 0x2974ead1, "DIVA_DIDD_Read" },
	{ 0x6943ea4b, "_spin_lock_bh" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=kernelcapi,divadidd";


MODULE_INFO(srcversion, "91853FCFD3285C577151DFA");
