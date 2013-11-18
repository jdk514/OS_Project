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
	{ 0x81279ce0, "register_netdevice" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2e1d9d6e, "dev_change_flags" },
	{ 0x7930fe23, "unregister_netdevice" },
	{ 0xdb01fdc3, "single_open" },
	{ 0x3d7c39ea, "_read_lock" },
	{ 0xebb99830, "seq_open" },
	{ 0x3dccf731, "single_release" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xdd7b7024, "seq_puts" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc767785d, "netif_carrier_on" },
	{ 0xbf8e93eb, "dev_get_by_name" },
	{ 0xc78194a4, "skb_copy" },
	{ 0x669e2d2f, "seq_printf" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0xa99d5102, "netif_carrier_off" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0x1ab0f38, "dev_base_lock" },
	{ 0x51d3534a, "dev_set_allmulti" },
	{ 0xcf81566a, "alloc_netdev" },
	{ 0x7b5fd755, "linkwatch_fire_event" },
	{ 0x8706fba7, "call_rcu" },
	{ 0xddabf283, "skb_realloc_headroom" },
	{ 0xe6eee95b, "seq_read" },
	{ 0x7d11c268, "jiffies" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0xe714c8c4, "dev_mc_add" },
	{ 0x3797e731, "vlan_ioctl_set" },
	{ 0x96f7398e, "netif_rx" },
	{ 0xc12e8a55, "proc_mkdir" },
	{ 0xe6be1c28, "proc_net" },
	{ 0x1b7d4074, "printk" },
	{ 0x5152e605, "memcmp" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0xd5614e73, "dev_ethtool" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x50754443, "dev_base" },
	{ 0xf46f821, "dev_remove_pack" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0x48a40a1f, "dev_mc_delete" },
	{ 0x7dceceac, "capable" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xe9d9168f, "arp_find" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xe3038592, "skb_under_panic" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0x2f2a91b1, "skb_pull_rcsum" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xf9b907c1, "seq_lseek" },
	{ 0x475c5596, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0x25da070, "snprintf" },
	{ 0x3047c858, "dev_add_pack" },
	{ 0x5a1d6f47, "seq_release" },
	{ 0x8235805b, "memmove" },
	{ 0x7fce77eb, "dev_queue_xmit" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x6e720ff2, "rtnl_unlock" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "5CA662C35E46AE4E2DDA98C");
