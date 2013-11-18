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
	{ 0x72216fa9, "param_get_uint" },
	{ 0x8abac70a, "param_set_uint" },
	{ 0xe3038592, "skb_under_panic" },
	{ 0xddabf283, "skb_realloc_headroom" },
	{ 0x8d3894f2, "_ctype" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0x6f3ef8e2, "capi20_release" },
	{ 0xe19a11ac, "capi20_get_profile" },
	{ 0x2f937907, "capi20_set_callback" },
	{ 0xd3cdbdbe, "capi20_register" },
	{ 0x6057c6f3, "capi_message2cmsg" },
	{ 0xd45b5eb5, "capi_cmsg2str" },
	{ 0x47d3fc51, "capi_info2str" },
	{ 0xb19fda8d, "capi_cmd2str" },
	{ 0x4827a016, "del_timer" },
	{ 0x14f2aa5a, "capi20_get_version" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x7e6f1307, "capi20_get_manufacturer" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x28209a37, "register_isdn" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0xb60e5e5f, "capi_cmsg_header" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xa4cfe53f, "capi20_put_message" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x50b33ca4, "capi_cmsg2message" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x1b7d4074, "printk" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=kernelcapi,isdn";


MODULE_INFO(srcversion, "2A15F2816B231C4054F5DC4");
