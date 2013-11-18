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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x3f13c534, "sock_init_data" },
	{ 0x2c2512ea, "get_zeroed_page" },
	{ 0x85898a89, "class_register" },
	{ 0x3d7c39ea, "_read_lock" },
	{ 0xebb99830, "seq_open" },
	{ 0xc220dd00, "seq_release_private" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x1bc64a0b, "send_sig" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xdd7b7024, "seq_puts" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x669e2d2f, "seq_printf" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0x8e01a41e, "skb_recv_datagram" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xe6eee95b, "seq_read" },
	{ 0x27dc8ba7, "sock_no_sendpage" },
	{ 0x63d28ea2, "sock_get_timestamp" },
	{ 0xa8bed6df, "class_device_put" },
	{ 0x29c9c48, "sock_no_mmap" },
	{ 0xe6c247b4, "class_device_del" },
	{ 0xf21a8115, "skb_queue_purge" },
	{ 0x7900058d, "sock_no_socketpair" },
	{ 0xc12e8a55, "proc_mkdir" },
	{ 0x8f338b7f, "sk_alloc" },
	{ 0x1b7d4074, "printk" },
	{ 0x5152e605, "memcmp" },
	{ 0x93618160, "class_unregister" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x78fa5b46, "seq_putc" },
	{ 0x7e869f04, "sock_no_listen" },
	{ 0x6180e3ac, "class_device_create_file" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x19c25cde, "sock_no_accept" },
	{ 0xb8854b5b, "sock_wake_async" },
	{ 0x769f4612, "sk_free" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0x8123901d, "lock_sock" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x13c12a56, "skb_queue_tail" },
	{ 0x7dceceac, "capable" },
	{ 0x189f12c0, "proto_register" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x69b50ff6, "sock_register" },
	{ 0x4292364c, "schedule" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x6495dd71, "proto_unregister" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0x50bc9c7c, "_write_lock_irq" },
	{ 0x3c2b8737, "class_device_register" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0xf39bf4d9, "put_cmsg" },
	{ 0x29c568d6, "skb_copy_datagram_iovec" },
	{ 0x9941ccb8, "free_pages" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0xf9b907c1, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x98adfde2, "request_module" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0x2394a062, "sock_unregister" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x3a233a33, "skb_dequeue" },
	{ 0x4888a014, "__get_user_2" },
	{ 0x25da070, "snprintf" },
	{ 0x5a1d6f47, "seq_release" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x97df9669, "skb_free_datagram" },
	{ 0x45e87ae6, "add_uevent_var" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "43A4BD78C926FBB542D78C7");
