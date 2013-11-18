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
	{ 0x5a1d6f47, "seq_release" },
	{ 0xe6eee95b, "seq_read" },
	{ 0xf9b907c1, "seq_lseek" },
	{ 0xed6d6a06, "ether_setup" },
	{ 0xe3038592, "skb_under_panic" },
	{ 0xddabf283, "skb_realloc_headroom" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0x92898495, "deregister_atm_ioctl" },
	{ 0x669e2d2f, "seq_printf" },
	{ 0xebb99830, "seq_open" },
	{ 0xd8252f4f, "register_atm_ioctl" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0x6432e001, "atm_proc_root" },
	{ 0x5598dc19, "register_netdev" },
	{ 0xcf81566a, "alloc_netdev" },
	{ 0xdb5ea3f9, "module_refcount" },
	{ 0x3a233a33, "skb_dequeue" },
	{ 0xd16b5cc1, "skb_migrate" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x7dceceac, "capable" },
	{ 0x4888a014, "__get_user_2" },
	{ 0x96f7398e, "netif_rx" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x409bc2c0, "eth_type_trans" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x1b7d4074, "printk" },
	{ 0x5152e605, "memcmp" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0x3d7c39ea, "_read_lock" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x37a0cba, "kfree" },
	{ 0x50bc9c7c, "_write_lock_irq" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=atm";


MODULE_INFO(srcversion, "037B90D7552F7A5A60470F0");
