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
	{ 0x52c0a61d, "_write_unlock_irqrestore" },
	{ 0x3d7c39ea, "_read_lock" },
	{ 0xebb99830, "seq_open" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x3093180f, "_write_lock_irqsave" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0x669e2d2f, "seq_printf" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xe6eee95b, "seq_read" },
	{ 0xda4008e6, "cond_resched" },
	{ 0xf21a8115, "skb_queue_purge" },
	{ 0xc12e8a55, "proc_mkdir" },
	{ 0x8d3894f2, "_ctype" },
	{ 0x1b7d4074, "printk" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x553d0022, "_read_unlock_irqrestore" },
	{ 0x496a442, "_read_lock_irqsave" },
	{ 0x13c12a56, "skb_queue_tail" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x72216fa9, "param_get_uint" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xf9b907c1, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x8abac70a, "param_set_uint" },
	{ 0x3a233a33, "skb_dequeue" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x5a1d6f47, "seq_release" },
	{ 0x8235805b, "memmove" },
	{ 0x96b27088, "__down_failed" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x782b0008, "vsprintf" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "021A86E059554B8AECF75D0");
