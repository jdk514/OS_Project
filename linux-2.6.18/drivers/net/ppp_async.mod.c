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
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xa8fcd37e, "stop_tty" },
	{ 0x33343965, "start_tty" },
	{ 0x13c12a56, "skb_queue_tail" },
	{ 0xe3038592, "skb_under_panic" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x3a233a33, "skb_dequeue" },
	{ 0x70354e72, "ppp_input" },
	{ 0x9f5b325c, "ppp_input_error" },
	{ 0x92f50af9, "ppp_register_channel" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0x37a0cba, "kfree" },
	{ 0xf21a8115, "skb_queue_purge" },
	{ 0xf7b108c4, "ppp_unregister_channel" },
	{ 0x79ad224b, "tasklet_kill" },
	{ 0x96b27088, "__down_failed" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x50bc9c7c, "_write_lock_irq" },
	{ 0x3246810d, "n_tty_ioctl" },
	{ 0x590c7473, "ppp_output_wakeup" },
	{ 0x211f01b3, "ppp_unit_number" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xff21308, "ppp_channel_index" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x7d11c268, "jiffies" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0xed5c73bf, "__tasklet_schedule" },
	{ 0x3d7c39ea, "_read_lock" },
	{ 0xba3d372c, "tty_register_ldisc" },
	{ 0x1b7d4074, "printk" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0x75811312, "crc_ccitt_table" },
	{ 0x60a4461c, "__up_wakeup" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ppp_generic,crc-ccitt";


MODULE_INFO(srcversion, "6DF9DBEF0566AC7EC77260A");
