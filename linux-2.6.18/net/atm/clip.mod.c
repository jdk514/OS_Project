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
	{ 0x1feb6034, "neigh_seq_next" },
	{ 0x88eb4560, "neigh_seq_stop" },
	{ 0xc220dd00, "seq_release_private" },
	{ 0xe6eee95b, "seq_read" },
	{ 0xf9b907c1, "seq_lseek" },
	{ 0x7fce77eb, "dev_queue_xmit" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xe3038592, "skb_under_panic" },
	{ 0xb5ec9803, "vcc_release_async" },
	{ 0xed6d253d, "__neigh_for_each_release" },
	{ 0x4b05104f, "_write_lock" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x3e45e9ff, "register_inetaddr_notifier" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0xd8252f4f, "register_atm_ioctl" },
	{ 0x75ae6d50, "neigh_table_init_no_netlink" },
	{ 0xebb99830, "seq_open" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x82d05fa5, "neigh_seq_start" },
	{ 0x78fa5b46, "seq_putc" },
	{ 0x28f35813, "scnprintf" },
	{ 0x669e2d2f, "seq_printf" },
	{ 0xdd7b7024, "seq_puts" },
	{ 0xd592aca8, "neigh_destroy" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xf5cd0a25, "neigh_create" },
	{ 0xfc23d160, "neigh_lookup" },
	{ 0x4b27b343, "ip_route_output_key" },
	{ 0x2bc95bd4, "memset" },
	{ 0x3a233a33, "skb_dequeue" },
	{ 0xd16b5cc1, "skb_migrate" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xdb5ea3f9, "module_refcount" },
	{ 0xf2922f9, "vcc_insert_socket" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x5598dc19, "register_netdev" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xcf81566a, "alloc_netdev" },
	{ 0x7dceceac, "capable" },
	{ 0x96f7398e, "netif_rx" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0xde537c9d, "atm_charge" },
	{ 0x5152e605, "memcmp" },
	{ 0x37a0cba, "kfree" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0xf7abe799, "neigh_update" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xf21a8115, "skb_queue_purge" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x13c12a56, "skb_queue_tail" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x548de514, "__alloc_skb" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x264d8032, "icmp_send" },
	{ 0x7d11c268, "jiffies" },
	{ 0xe8cf3ae7, "inet_addr_type" },
	{ 0x1b7d4074, "printk" },
	{ 0x78da467f, "clip_tbl_hook" },
	{ 0xcda7349d, "neigh_table_clear" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0x8ab42a8f, "neigh_ifdown" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x92898495, "deregister_atm_ioctl" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0x760b437a, "unregister_inetaddr_notifier" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0x6432e001, "atm_proc_root" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=atm";


MODULE_INFO(srcversion, "101E5134300282CFBD24BB6");
