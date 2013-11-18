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
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x4292364c, "schedule" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xbb8cc8f5, "set_blocksize" },
	{ 0x61dc8e70, "fget" },
	{ 0xf51976d4, "fput" },
	{ 0x7dceceac, "capable" },
	{ 0x2c715df5, "elv_next_request" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x9973d1c9, "elv_dequeue_request" },
	{ 0xfcf3ea47, "end_that_request_last" },
	{ 0x33f1f594, "end_that_request_first" },
	{ 0x1e397ba5, "kunmap" },
	{ 0x432f6c35, "kmap" },
	{ 0x953d2c6d, "dequeue_signal" },
	{ 0x553e0b7a, "kernel_recvmsg" },
	{ 0xb407100a, "kernel_sendmsg" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xe10dc728, "add_disk" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x476f0d58, "blk_init_queue" },
	{ 0xa4935a88, "alloc_disk" },
	{ 0x1b7d4074, "printk" },
	{ 0xeac1c4af, "unregister_blkdev" },
	{ 0x5fe7f92a, "put_disk" },
	{ 0x81db09d7, "blk_cleanup_queue" },
	{ 0x700d5f9, "del_gendisk" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "01B1BCB5C94A682FEC61912");
