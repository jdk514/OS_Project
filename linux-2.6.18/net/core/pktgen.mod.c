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
	{ 0x3dccf731, "single_release" },
	{ 0xe6eee95b, "seq_read" },
	{ 0xf9b907c1, "seq_lseek" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xb994c584, "per_cpu__irq_stat" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0xd4abb36c, "__alloc_pages" },
	{ 0x8a9eec75, "contig_page_data" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0xe3038592, "skb_under_panic" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x4292364c, "schedule" },
	{ 0xf0a529b7, "do_softirq" },
	{ 0x1af78947, "set_cpus_allowed" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0xdc43a9c8, "daemonize" },
	{ 0x332eb002, "__next_cpu" },
	{ 0x7e9ebb05, "kernel_thread" },
	{ 0xf4a91d48, "__first_cpu" },
	{ 0x99bdf0a8, "cpu_online_map" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0xc12e8a55, "proc_mkdir" },
	{ 0xe6be1c28, "proc_net" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x7dceceac, "capable" },
	{ 0x669e2d2f, "seq_printf" },
	{ 0x1c66f64c, "net_random" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xbf8e93eb, "dev_get_by_name" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x1b6314fd, "in_aton" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x37a0cba, "kfree" },
	{ 0x2fd1d81c, "vfree" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0xdd7b7024, "seq_puts" },
	{ 0xdb01fdc3, "single_open" },
	{ 0x1b7d4074, "printk" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xd16ac615, "__get_user_1" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "EEE5742A6EDC0FB5824E5EB");
