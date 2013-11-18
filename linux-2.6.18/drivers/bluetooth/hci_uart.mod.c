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
	{ 0xacd81448, "skb_queue_head" },
	{ 0x3246810d, "n_tty_ioctl" },
	{ 0x4827a016, "del_timer" },
	{ 0xd87fe4c2, "hci_register_dev" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x807a89d4, "__net_timestamp" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x168b4917, "hci_unregister_dev" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0x7d11c268, "jiffies" },
	{ 0xf21a8115, "skb_queue_purge" },
	{ 0x1b7d4074, "printk" },
	{ 0x5152e605, "memcmp" },
	{ 0xb2433ebe, "tty_ldisc_flush" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0xed5c73bf, "__tasklet_schedule" },
	{ 0x911fb10d, "hci_alloc_dev" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xf3b39202, "mod_timer" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x13c12a56, "skb_queue_tail" },
	{ 0x548de514, "__alloc_skb" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xe3038592, "skb_under_panic" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x3a233a33, "skb_dequeue" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0x21a1d9de, "hci_free_dev" },
	{ 0xba3d372c, "tty_register_ldisc" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "B2470FBCEF890D482AF94EB");
