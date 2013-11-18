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
	{ 0x27dc8ba7, "sock_no_sendpage" },
	{ 0x29c9c48, "sock_no_mmap" },
	{ 0x594b12f4, "sock_no_getsockopt" },
	{ 0x8692a11, "sock_no_setsockopt" },
	{ 0x2cdfdecd, "sock_no_shutdown" },
	{ 0x7e869f04, "sock_no_listen" },
	{ 0x2fb491a6, "sock_no_ioctl" },
	{ 0x8e30c1e7, "datagram_poll" },
	{ 0xfed0110c, "sock_no_getname" },
	{ 0x19c25cde, "sock_no_accept" },
	{ 0x7900058d, "sock_no_socketpair" },
	{ 0xb0018a09, "sock_no_connect" },
	{ 0x69fa0a17, "sock_no_bind" },
	{ 0xe9d65cde, "xfrm_state_walk" },
	{ 0x55a2bd6d, "xfrm_alloc_spi" },
	{ 0xc898c148, "xfrm_find_acq" },
	{ 0xfb9e8dd, "xfrm_policy_insert" },
	{ 0xb9272ca8, "xfrm_policy_bysel_ctx" },
	{ 0x738bccca, "xfrm_state_delete" },
	{ 0xc1a726d5, "xfrm_state_update" },
	{ 0x50d4195e, "xfrm_state_add" },
	{ 0x7fad4c51, "xfrm_init_state" },
	{ 0x6b7ca4c, "xfrm_ealg_get_byid" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x744690cc, "xfrm_calg_get_byid" },
	{ 0x5a16594c, "xfrm_aalg_get_byid" },
	{ 0x55f6d69e, "xfrm_state_alloc" },
	{ 0x9b0f1de9, "km_waitq" },
	{ 0xb5bc7328, "xfrm_find_acq_byseq" },
	{ 0x48bcfa68, "__xfrm_state_destroy" },
	{ 0x1ded3e3d, "xfrm_ealg_get_byidx" },
	{ 0x6c672417, "xfrm_aalg_get_byidx" },
	{ 0x9cb8037b, "xfrm_count_enc_supported" },
	{ 0x686c703f, "xfrm_count_auth_supported" },
	{ 0x28e23139, "xfrm_probe_algs" },
	{ 0x89eda67c, "sock_i_uid" },
	{ 0x4ebab107, "sock_i_ino" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xb2865773, "xfrm_register_km" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0x69b50ff6, "sock_register" },
	{ 0x189f12c0, "proto_register" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x3f13c534, "sock_init_data" },
	{ 0x8f338b7f, "sk_alloc" },
	{ 0x7dceceac, "capable" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x4292364c, "schedule" },
	{ 0xcc4c11a9, "_write_unlock_bh" },
	{ 0x771dc9e2, "add_wait_queue_exclusive" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x93ba42f1, "_write_lock_bh" },
	{ 0xf21a8115, "skb_queue_purge" },
	{ 0x9a8c674b, "xfrm_state_lookup" },
	{ 0x734c5911, "km_state_notify" },
	{ 0x6daf354f, "xfrm_state_flush" },
	{ 0xc9e0ddd6, "__xfrm_policy_destroy" },
	{ 0xe83e169c, "xfrm_policy_byid" },
	{ 0x26379cda, "km_policy_notify" },
	{ 0x492f2c74, "xfrm_policy_flush" },
	{ 0x2e60bace, "memcpy" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x61c28c81, "xfrm_cfg_mutex" },
	{ 0x9fb3dd30, "memcpy_fromiovec" },
	{ 0x97df9669, "skb_free_datagram" },
	{ 0xf39bf4d9, "put_cmsg" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0x29c568d6, "skb_copy_datagram_iovec" },
	{ 0x8e01a41e, "skb_recv_datagram" },
	{ 0x4c9bd9e3, "xfrm_calg_get_byname" },
	{ 0xfab4bbc9, "xfrm_ealg_get_byname" },
	{ 0x217ef805, "xfrm_aalg_get_byname" },
	{ 0x5152e605, "memcmp" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x3cc0dd6c, "security_ops" },
	{ 0xeb0efc1a, "xfrm_policy_alloc" },
	{ 0x274cdfc9, "xfrm_policy_walk" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0x1b7d4074, "printk" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x3d7c39ea, "_read_lock" },
	{ 0x769f4612, "sk_free" },
	{ 0x13c12a56, "skb_queue_tail" },
	{ 0xb007fea4, "sock_rfree" },
	{ 0xf93cb7da, "skb_clone" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x6495dd71, "proto_unregister" },
	{ 0x2394a062, "sock_unregister" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0xc4e2c1a9, "xfrm_unregister_km" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D385C15782E6BB8D5891DA9");
