#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
};

static const struct modversion_info ____versions[]
__attribute_used__
__attribute__((section("__versions"))) = {
	{ 0xb499ef18, "struct_module" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0xdec27e6e, "scsi_host_alloc" },
	{ 0xcc4c11a9, "_write_unlock_bh" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xe891725c, "iscsi_block_session" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x7c775173, "__kfifo_put" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x416ad8a6, "iscsi_unblock_session" },
	{ 0xd4061e5, "iscsi_create_session" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x7634a81, "iscsi_destroy_session" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xa635ffaf, "scsi_adjust_queue_depth" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x7d11c268, "jiffies" },
	{ 0x2fad7ec2, "scsi_is_host_device" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x83beff83, "iscsi_recv_pdu" },
	{ 0xd645c93b, "scsi_queue_work" },
	{ 0x16d3432, "iscsi_conn_error" },
	{ 0x93ba42f1, "_write_lock_bh" },
	{ 0xfa31cd3b, "kfifo_init" },
	{ 0x5cc5b658, "kfifo_alloc" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x859204af, "sscanf" },
	{ 0x7f12bc25, "scsi_add_host" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x7527e0d, "__kfifo_get" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xf4bef259, "scsi_host_put" },
	{ 0xd0880362, "iscsi_create_conn" },
	{ 0xade698, "flush_signals" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x29fd090f, "iscsi_destroy_conn" },
	{ 0x4292364c, "schedule" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0xea10212a, "int_to_scsilun" },
	{ 0x37a0cba, "kfree" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x89535602, "scsi_remove_host" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0x8a64e7c, "kfifo_free" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=scsi_mod,scsi_transport_iscsi";


MODULE_INFO(srcversion, "BC67A0B215C61D8AF5F3DB7");
