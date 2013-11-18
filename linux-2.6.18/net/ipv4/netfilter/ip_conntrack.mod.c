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
	{ 0x1a83ced6, "proc_dointvec_minmax" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x1c5b2327, "kmem_cache_destroy" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x73cbd362, "proc_net_stat" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x4f71ea18, "register_sysctl_table" },
	{ 0xcc4c11a9, "_write_unlock_bh" },
	{ 0x4827a016, "del_timer" },
	{ 0x332eb002, "__next_cpu" },
	{ 0xebb99830, "seq_open" },
	{ 0xc220dd00, "seq_release_private" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa74c636a, "ip_ct_attach" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xb0cd0edd, "proc_dointvec" },
	{ 0xebace4f8, "ip_send_check" },
	{ 0x669e2d2f, "seq_printf" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0xd1d8adad, "atomic_notifier_chain_unregister" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xe6eee95b, "seq_read" },
	{ 0x7d11c268, "jiffies" },
	{ 0x3291d565, "nf_ip_checksum" },
	{ 0xb7e6dc17, "nf_log_packet" },
	{ 0xdc07f8fe, "atomic_notifier_call_chain" },
	{ 0xd66de9d3, "ip_defrag" },
	{ 0x21968b7f, "_read_lock_bh" },
	{ 0xe6be1c28, "proc_net" },
	{ 0x93ba42f1, "_write_lock_bh" },
	{ 0x1b7d4074, "printk" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x78fa5b46, "seq_putc" },
	{ 0xcfc6b0bd, "sysctl_intvec" },
	{ 0xb689e344, "kmem_cache_free" },
	{ 0xf4a91d48, "__first_cpu" },
	{ 0x948cde9, "num_physpages" },
	{ 0x87301eb3, "nf_unregister_hooks" },
	{ 0x5dfd3f0d, "cpu_possible_map" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x4f8cddbf, "unregister_sysctl_table" },
	{ 0x107d6ba3, "__get_free_pages" },
	{ 0xede74815, "atomic_notifier_chain_register" },
	{ 0x72216fa9, "param_get_uint" },
	{ 0x3e9dc8f6, "nf_unregister_sockopt" },
	{ 0x4292364c, "schedule" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x8bf46c54, "_read_unlock_bh" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xfc76e10b, "kmem_cache_create" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x9941ccb8, "free_pages" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xef509d51, "nfattr_parse" },
	{ 0xf9b907c1, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0xd646fc13, "nf_register_hooks" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x4e94c2bf, "__nfa_fill" },
	{ 0xca6132eb, "nf_register_sockopt" },
	{ 0x5a1d6f47, "seq_release" },
	{ 0xe656ef3a, "proc_dointvec_jiffies" },
	{ 0xb1922cfe, "skb_copy_bits" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=nfnetlink";


MODULE_INFO(srcversion, "781F66107DCA76F6FE5386E");
