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
	{ 0x98bd6f46, "param_set_int" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x4292364c, "schedule" },
	{ 0x3a233a33, "skb_dequeue" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x1ef3eb01, "misc_register" },
	{ 0xed5c73bf, "__tasklet_schedule" },
	{ 0x807a89d4, "__net_timestamp" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x548de514, "__alloc_skb" },
	{ 0xf21a8115, "skb_queue_purge" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x14126ae8, "kill_fasync" },
	{ 0x13c12a56, "skb_queue_tail" },
	{ 0xe3038592, "skb_under_panic" },
	{ 0xaf5f9c5f, "nonseekable_open" },
	{ 0xd87fe4c2, "hci_register_dev" },
	{ 0x911fb10d, "hci_alloc_dev" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x37a0cba, "kfree" },
	{ 0x21a1d9de, "hci_free_dev" },
	{ 0x168b4917, "hci_unregister_dev" },
	{ 0x54ee23d3, "fasync_helper" },
	{ 0x1b7d4074, "printk" },
	{ 0x25dd4bad, "misc_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "FBC12E962CC0829EB2DCC3C");
