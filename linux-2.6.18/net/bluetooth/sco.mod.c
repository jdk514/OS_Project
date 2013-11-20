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
	{ 0x29c9c48, "sock_no_mmap" },
	{ 0x9ddaec4c, "bt_sock_recvmsg" },
	{ 0x2cdfdecd, "sock_no_shutdown" },
	{ 0x2fb491a6, "sock_no_ioctl" },
	{ 0x73b92907, "bt_sock_poll" },
	{ 0x7900058d, "sock_no_socketpair" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x86ac08f4, "sk_reset_timer" },
	{ 0xad57b585, "hci_connect" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0xb398d722, "hci_get_route" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0x771dc9e2, "add_wait_queue_exclusive" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xcc4c11a9, "_write_unlock_bh" },
	{ 0x93ba42f1, "_write_lock_bh" },
	{ 0x44355708, "bt_sock_wait_state" },
	{ 0xcf835fb8, "bt_accept_dequeue" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0xe7e31a13, "hci_send_sco" },
	{ 0x9fb3dd30, "memcpy_fromiovec" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0xe7ad70c3, "sock_alloc_send_skb" },
	{ 0xc147557a, "release_sock" },
	{ 0x8123901d, "lock_sock" },
	{ 0x369b4451, "class_create_file" },
	{ 0x69a76b4a, "hci_register_proto" },
	{ 0xaf669f8c, "bt_sock_register" },
	{ 0x189f12c0, "proto_register" },
	{ 0x8bf46c54, "_read_unlock_bh" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xc2066af0, "batostr" },
	{ 0x21968b7f, "_read_lock_bh" },
	{ 0x5152e605, "memcmp" },
	{ 0x3d7c39ea, "_read_lock" },
	{ 0x89e96166, "bt_accept_enqueue" },
	{ 0xf21a8115, "skb_queue_purge" },
	{ 0xeb629cec, "bt_sock_link" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x3f13c534, "sock_init_data" },
	{ 0x8f338b7f, "sk_alloc" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x7094f8ae, "bt_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x769f4612, "sk_free" },
	{ 0x84c50ba, "bt_sock_unlink" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x4827a016, "del_timer" },
	{ 0xd5ceab1e, "sk_stop_timer" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x60445e73, "sock_queue_rcv_skb" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x6495dd71, "proto_unregister" },
	{ 0xe87a59d, "hci_unregister_proto" },
	{ 0x1b7d4074, "printk" },
	{ 0xf19294db, "bt_sock_unregister" },
	{ 0x789ddd86, "class_remove_file" },
	{ 0x2f1ebfd7, "bt_class" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "026764C791B3070149DEEA5");