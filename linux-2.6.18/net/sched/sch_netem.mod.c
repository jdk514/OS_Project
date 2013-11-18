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
	{ 0x58563e64, "qdisc_unlock_tree" },
	{ 0x30b0fbc8, "qdisc_lock_tree" },
	{ 0x21463d65, "noop_qdisc" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x99cc6f13, "qdisc_destroy" },
	{ 0x3dc17552, "qdisc_create_dflt" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x77bed7e3, "__rta_fill" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x28b9d1e0, "qdisc_reset" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0x156a70fb, "skb_checksum_help" },
	{ 0xc78194a4, "skb_copy" },
	{ 0xf93cb7da, "skb_clone" },
	{ 0xf0f58d8d, "register_qdisc" },
	{ 0x1b7d4074, "printk" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xf21a8115, "skb_queue_purge" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xe49414e9, "rtattr_parse" },
	{ 0x37a0cba, "kfree" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x1c66f64c, "net_random" },
	{ 0x19202db3, "unregister_qdisc" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "74726EC261610259DE859A9");
