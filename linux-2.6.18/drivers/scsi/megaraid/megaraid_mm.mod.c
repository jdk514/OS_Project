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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x8a24f99e, "dma_pool_destroy" },
	{ 0x7d11c268, "jiffies" },
	{ 0xda4008e6, "cond_resched" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x1b7d4074, "printk" },
	{ 0x5152e605, "memcmp" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x3db28e6f, "dma_pool_free" },
	{ 0x7dceceac, "capable" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x4292364c, "schedule" },
	{ 0x1e8e5fac, "register_chrdev" },
	{ 0x5e552f71, "dma_pool_alloc" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x96b27088, "__down_failed" },
	{ 0x4c09c5f1, "dma_pool_create" },
	{ 0xf2a644fb, "copy_from_user" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "564959495500032FB187109");
