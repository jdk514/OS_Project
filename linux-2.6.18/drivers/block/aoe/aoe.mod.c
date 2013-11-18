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
	{ 0xa4935a88, "alloc_disk" },
	{ 0x3d7c39ea, "_read_lock" },
	{ 0xc7ec6c27, "strspn" },
	{ 0x7d4e29ae, "page_address" },
	{ 0x27514859, "class_device_destroy" },
	{ 0xd10fc04d, "class_device_create" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x77a4c2ed, "blk_queue_bounce" },
	{ 0xf93cb7da, "skb_clone" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0x1ab0f38, "dev_base_lock" },
	{ 0xe5077a8f, "mempool_destroy" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x6c1ce5ce, "strcspn" },
	{ 0x7d11c268, "jiffies" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0xc4be936d, "__pskb_pull_tail" },
	{ 0x183fa88b, "mempool_alloc_slab" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x1b7d4074, "printk" },
	{ 0x859204af, "sscanf" },
	{ 0x700d5f9, "del_gendisk" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x50754443, "dev_base" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x625acc81, "__down_failed_interruptible" },
	{ 0xc83decb4, "class_create" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xf46f821, "dev_remove_pack" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x4149cb93, "sysfs_remove_link" },
	{ 0xbf9b99c4, "bio_endio" },
	{ 0xeac1c4af, "unregister_blkdev" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0xcfaf79ba, "mempool_alloc" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x324fb89, "blk_queue_make_request" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x5fe7f92a, "put_disk" },
	{ 0xbe8a1485, "mempool_create" },
	{ 0xe3038592, "skb_under_panic" },
	{ 0x1e8e5fac, "register_chrdev" },
	{ 0x6dc76950, "sysfs_create_file" },
	{ 0x683a3221, "param_set_copystring" },
	{ 0x37a9798f, "mempool_free" },
	{ 0xfc76e10b, "kmem_cache_create" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0xe10dc728, "add_disk" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0x93538172, "class_destroy" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x25da070, "snprintf" },
	{ 0x8857488c, "bdget" },
	{ 0x3047c858, "dev_add_pack" },
	{ 0x93304684, "param_get_string" },
	{ 0x7fce77eb, "dev_queue_xmit" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x67dc93bf, "bdput" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1154FEB66D6B77EDF4705D1");
