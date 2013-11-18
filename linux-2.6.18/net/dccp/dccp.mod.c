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
	{ 0xc147557a, "release_sock" },
	{ 0x1c5b2327, "kmem_cache_destroy" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x1291465e, "__kfree_skb" },
	{ 0xbf48c391, "inet_csk_listen_stop" },
	{ 0x4f71ea18, "register_sysctl_table" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xcc4c11a9, "_write_unlock_bh" },
	{ 0x3d7c39ea, "_read_lock" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xb0cd0edd, "proc_dointvec" },
	{ 0x2af854f2, "inet_csk_destroy_sock" },
	{ 0xfc1e946f, "sk_stream_wait_connect" },
	{ 0xf93cb7da, "skb_clone" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0xab49c1ec, "__alloc_percpu" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x9155c375, "inet_sk_rebuild_header" },
	{ 0xb007fea4, "sock_rfree" },
	{ 0x3e3dbfb5, "inet_csk_listen_start" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd012c83a, "free_percpu" },
	{ 0xded1ee1, "net_statistics" },
	{ 0xca8f3d36, "__inet_twsk_hashdance" },
	{ 0x8497eff2, "inet_csk_reqsk_queue_prune" },
	{ 0xe07268f7, "sk_wait_data" },
	{ 0x140f44ca, "inet_csk_reset_keepalive_timer" },
	{ 0x93ba42f1, "_write_lock_bh" },
	{ 0xcd1262dc, "inet_csk_clone" },
	{ 0x1b7d4074, "printk" },
	{ 0xd6f1a665, "pskb_copy" },
	{ 0x44527744, "kmem_cache_name" },
	{ 0xad3ce0db, "inet_csk_delete_keepalive_timer" },
	{ 0xcc1f1c3d, "inet_twdr_hangman" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xb689e344, "kmem_cache_free" },
	{ 0x948cde9, "num_physpages" },
	{ 0x1fcece42, "inet_twdr_twcal_tick" },
	{ 0xb8854b5b, "sock_wake_async" },
	{ 0x769f4612, "sk_free" },
	{ 0x1d676acf, "boot_tvec_bases" },
	{ 0x8123901d, "lock_sock" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x8f5ea7cc, "sk_stream_wait_close" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x4b05104f, "_write_lock" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x86ac08f4, "sk_reset_timer" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x548de514, "__alloc_skb" },
	{ 0xa63eaa1c, "inet_listen_wlock" },
	{ 0x107d6ba3, "__get_free_pages" },
	{ 0x4f8cddbf, "unregister_sysctl_table" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xdfc20ea8, "inet_csk_init_xmit_timers" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0xe3038592, "skb_under_panic" },
	{ 0x51b6baff, "inet_put_port" },
	{ 0xe7ad70c3, "sock_alloc_send_skb" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x29c568d6, "skb_copy_datagram_iovec" },
	{ 0xad339b79, "inet_twsk_alloc" },
	{ 0xfc76e10b, "kmem_cache_create" },
	{ 0xfbb469aa, "inet_twdr_twkill_work" },
	{ 0x6989a769, "vsnprintf" },
	{ 0x98e293ea, "inet_csk_clear_xmit_timers" },
	{ 0x9941ccb8, "free_pages" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0x9f2b1a24, "inet_twsk_schedule" },
	{ 0x37a0cba, "kfree" },
	{ 0x98adfde2, "request_module" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0x9fb3dd30, "memcpy_fromiovec" },
	{ 0x865edc9b, "finish_wait" },
	{ 0xd5e5106d, "sock_wmalloc" },
	{ 0xdb5040c0, "sock_wfree" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x760a0f4f, "yield" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "A9DDFCE749E10172678D2BB");
