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
	{ 0x89b301d4, "param_get_int" },
	{ 0xd5ceab1e, "sk_stop_timer" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x7d11c268, "jiffies" },
	{ 0x1b7d4074, "printk" },
	{ 0x4a4b12ba, "dccp_send_ack" },
	{ 0x769f4612, "sk_free" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x86ac08f4, "sk_reset_timer" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x7b75643a, "ccid_register" },
	{ 0xf53e8c19, "ccid_unregister" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x37a0cba, "kfree" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=dccp";


MODULE_INFO(srcversion, "0C235323D0B9BB203EF4807");
