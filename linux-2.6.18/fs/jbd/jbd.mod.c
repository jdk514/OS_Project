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
	{ 0x1c5b2327, "kmem_cache_destroy" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0xd7e7ca24, "wake_up_bit" },
	{ 0xd0ee38b8, "schedule_timeout_uninterruptible" },
	{ 0x526ca68, "bmap" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x9e428ee6, "ll_rw_block" },
	{ 0x3bb70d5, "__lock_buffer" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x24fdac79, "wake_bit_function" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x8553417b, "unlock_buffer" },
	{ 0x7d11c268, "jiffies" },
	{ 0xc5645a3a, "set_bh_page" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x16b86be, "kunmap_atomic" },
	{ 0xa6367e45, "kmap_atomic" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0xb689e344, "kmem_cache_free" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x30af7393, "__wait_on_buffer" },
	{ 0x8b9b5d73, "sync_dirty_buffer" },
	{ 0x159c1518, "unlock_page" },
	{ 0x78b8d9f9, "__brelse" },
	{ 0xd6ae596d, "bit_waitqueue" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x7b129b32, "free_buffer_head" },
	{ 0x697d0d13, "bdevname" },
	{ 0xc31ab280, "sync_blockdev" },
	{ 0x78e8f570, "try_to_free_buffers" },
	{ 0x25629d18, "init_buffer" },
	{ 0x5f0c5570, "cond_resched_lock" },
	{ 0x4292364c, "schedule" },
	{ 0x35c2ba9e, "refrigerator" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x346357bf, "alloc_buffer_head" },
	{ 0x1d7ccd82, "submit_bh" },
	{ 0xfc76e10b, "kmem_cache_create" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xc317c43f, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x97e89e2c, "kthread_create" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0x946be58e, "put_page" },
	{ 0x4ef88542, "__bforget" },
	{ 0x865edc9b, "finish_wait" },
	{ 0xeccf2ca1, "__find_get_block" },
	{ 0x41d14f32, "mark_buffer_dirty" },
	{ 0x45b21ed2, "__getblk" },
	{ 0x760a0f4f, "yield" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E56432580E733199DEF2D8C");
