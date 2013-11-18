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
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x81279ce0, "register_netdevice" },
	{ 0xcc6a24fd, "slhc_init" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xcf81566a, "alloc_netdev" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7930fe23, "unregister_netdevice" },
	{ 0xf86e951e, "dev_close" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x7dceceac, "capable" },
	{ 0x5c95a422, "slhc_compress" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0x3246810d, "n_tty_ioctl" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xba3d372c, "tty_register_ldisc" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x7e71b7cf, "slhc_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x9785f810, "tty_hangup" },
	{ 0x4827a016, "del_timer" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x7d11c268, "jiffies" },
	{ 0x96f7398e, "netif_rx" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x8ead0478, "slhc_remember" },
	{ 0xd73fd490, "slhc_uncompress" },
	{ 0x1b7d4074, "printk" },
	{ 0xaaab5c7a, "free_netdev" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=slhc";


MODULE_INFO(srcversion, "93979A365CDC15CAADF0FC3");
