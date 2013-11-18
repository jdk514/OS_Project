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
	{ 0x7bcbd1af, "md_register_thread" },
	{ 0xbe8a1485, "mempool_create" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x44fbf49, "mempool_kzalloc" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x2893faa5, "md_wakeup_thread" },
	{ 0x6334ca17, "md_error" },
	{ 0xcfaf79ba, "mempool_alloc" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x669e2d2f, "seq_printf" },
	{ 0x87b9a132, "register_md_personality" },
	{ 0x20cd79f3, "generic_make_request" },
	{ 0x2e60bace, "memcpy" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xbb348188, "md_check_recovery" },
	{ 0x37a9798f, "mempool_free" },
	{ 0xbf9b99c4, "bio_endio" },
	{ 0x37a0cba, "kfree" },
	{ 0xe5077a8f, "mempool_destroy" },
	{ 0x3e7f7e2d, "blk_sync_queue" },
	{ 0xf2f88927, "md_unregister_thread" },
	{ 0xeb4364da, "blk_queue_max_sectors" },
	{ 0xddc3ea6d, "blk_queue_stack_limits" },
	{ 0x697d0d13, "bdevname" },
	{ 0x1b7d4074, "printk" },
	{ 0xa727fc18, "unregister_md_personality" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C57711033F7223D59243C09");
