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
	{ 0xe6eee95b, "seq_read" },
	{ 0xf9b907c1, "seq_lseek" },
	{ 0xb494e82a, "br_fdb_put_hook" },
	{ 0x650128e7, "br_fdb_get_hook" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0xc3c79136, "skb_copy_expand" },
	{ 0xe3038592, "skb_under_panic" },
	{ 0xddabf283, "skb_realloc_headroom" },
	{ 0xebb99830, "seq_open" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x78fa5b46, "seq_putc" },
	{ 0x669e2d2f, "seq_printf" },
	{ 0xdd7b7024, "seq_puts" },
	{ 0xc220dd00, "seq_release_private" },
	{ 0xd8252f4f, "register_atm_ioctl" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0xacafa1f8, "alloc_trdev" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xdb5ea3f9, "module_refcount" },
	{ 0xf2922f9, "vcc_insert_socket" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x5598dc19, "register_netdev" },
	{ 0x25da070, "snprintf" },
	{ 0x60cf5c9e, "alloc_etherdev" },
	{ 0x7dceceac, "capable" },
	{ 0x96f7398e, "netif_rx" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0x1da7bfee, "tr_type_trans" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x3a233a33, "skb_dequeue" },
	{ 0x13c12a56, "skb_queue_tail" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x1b7d4074, "printk" },
	{ 0xf21a8115, "skb_queue_purge" },
	{ 0x5152e605, "memcmp" },
	{ 0x4827a016, "del_timer" },
	{ 0xb5ec9803, "vcc_release_async" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0x92898495, "deregister_atm_ioctl" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0x6432e001, "atm_proc_root" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=atm";


MODULE_INFO(srcversion, "E6A2191358E31A189D5D918");
