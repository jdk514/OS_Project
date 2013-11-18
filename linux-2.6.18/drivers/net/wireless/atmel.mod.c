#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
};

static const struct modversion_info ____versions[]
__attribute_used__
__attribute__((section("__versions"))) = {
	{ 0xb499ef18, "struct_module" },
	{ 0x4c3af445, "__request_region" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0xc767785d, "netif_carrier_on" },
	{ 0xa99d5102, "netif_carrier_off" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0x96f7398e, "netif_rx" },
	{ 0xaa136450, "param_get_charp" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0x8d3894f2, "_ctype" },
	{ 0x1b7d4074, "printk" },
	{ 0x5152e605, "memcmp" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x5598dc19, "register_netdev" },
	{ 0x9a5962fa, "wireless_send_event" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x7dceceac, "capable" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x26e96637, "request_irq" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x298255fd, "dev_alloc_name" },
	{ 0x70dc0e3, "request_firmware" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0x25da070, "snprintf" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x33934162, "release_firmware" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E907C9CEB6F6EF19EBF9134");
