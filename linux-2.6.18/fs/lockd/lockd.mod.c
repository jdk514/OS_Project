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
	{ 0x463aec2b, "locks_copy_lock" },
	{ 0xdb5ea3f9, "module_refcount" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xe6a3557, "rpc_create_client" },
	{ 0xcff53400, "kref_put" },
	{ 0x1bb30384, "rpc_destroy_client" },
	{ 0x61bed476, "up_read" },
	{ 0x4f71ea18, "register_sysctl_table" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x1b0bcb16, "rpc_call_async" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x1be57115, "xdr_decode_netobj" },
	{ 0xabc0fe0c, "xdr_encode_string" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x60eb4aef, "rpc_restart_call" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x2ebbc1d1, "rpc_force_rebind" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x2d1f50b5, "xprt_create_proto" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xbabf0f35, "rpciod_down" },
	{ 0x7d11c268, "jiffies" },
	{ 0x375492a4, "rpciod_up" },
	{ 0x649337c8, "svc_set_client" },
	{ 0x1985af2a, "down_read" },
	{ 0xb635d4d2, "flock_lock_file_wait" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x16250200, "_atomic_dec_and_lock" },
	{ 0xcd8afab7, "svc_create_thread" },
	{ 0x18d4641c, "svc_makesock" },
	{ 0x34231ba3, "rpc_delay" },
	{ 0xa34eb072, "wait_for_completion" },
	{ 0xf3446d42, "rpc_call_sync" },
	{ 0x2b27da5d, "svc_create" },
	{ 0x1cdb9499, "svc_destroy" },
	{ 0x53445f68, "nlm_debug" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0x5152e605, "memcmp" },
	{ 0x5568be43, "lock_kernel" },
	{ 0xbce67dc0, "xprt_set_timeout" },
	{ 0xdd94b586, "proc_doulongvec_minmax" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x1123c4cb, "svc_process" },
	{ 0xde0c05c3, "up_write" },
	{ 0xbca92367, "down_write" },
	{ 0xd79b5a02, "allow_signal" },
	{ 0xade698, "flush_signals" },
	{ 0x5dfe8f1a, "unlock_kernel" },
	{ 0x1735ed79, "posix_lock_file_wait" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xa9e2c33e, "locks_init_lock" },
	{ 0xb12cdfe7, "system_utsname" },
	{ 0x4f8cddbf, "unregister_sysctl_table" },
	{ 0x29c6f164, "xdr_encode_netobj" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0x35c2ba9e, "refrigerator" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0xb5f578a5, "__module_put_and_exit" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x7ded8240, "param_get_ulong" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x4f511882, "posix_unblock_lock" },
	{ 0x2fd5b3d3, "svc_exit_thread" },
	{ 0x3ae831b6, "kref_init" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0xf077d5f1, "posix_lock_file" },
	{ 0x37a0cba, "kfree" },
	{ 0x932da67e, "kill_proc" },
	{ 0x2e60bace, "memcpy" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0x8e334f2b, "interruptible_sleep_on_timeout" },
	{ 0x8a1203a9, "kref_get" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x7e9ebb05, "kernel_thread" },
	{ 0xad552147, "rpc_new_client" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x7e0221e4, "complete" },
	{ 0x25da070, "snprintf" },
	{ 0x555bd44b, "svc_recv" },
	{ 0x96b27088, "__down_failed" },
	{ 0x7bd87272, "xdr_decode_string_inplace" },
	{ 0xf1f0ab07, "__init_rwsem" },
	{ 0xdc43a9c8, "daemonize" },
	{ 0x112942c2, "svc_wake_up" },
	{ 0x912bdca0, "posix_test_lock" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=sunrpc";


MODULE_INFO(srcversion, "C0E1093E467C58E581BD410");
