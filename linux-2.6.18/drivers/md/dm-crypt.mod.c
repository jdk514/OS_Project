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
	{ 0x7b6f2551, "dm_get_device" },
	{ 0xa8c6ce0c, "dm_table_get_mode" },
	{ 0x859204af, "sscanf" },
	{ 0x53326531, "mempool_alloc_pages" },
	{ 0xd985dc99, "mempool_free_pages" },
	{ 0xbe8a1485, "mempool_create" },
	{ 0x183fa88b, "mempool_alloc_slab" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x85df9b6c, "strsep" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x7047c641, "crypto_alloc_tfm" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0x1d17e4bd, "blk_congestion_wait" },
	{ 0x20cd79f3, "generic_make_request" },
	{ 0xb0eb26ed, "bio_alloc" },
	{ 0xa42d0418, "bio_clone" },
	{ 0xcfaf79ba, "mempool_alloc" },
	{ 0xb6537757, "dm_register_target" },
	{ 0xf2766228, "__create_workqueue" },
	{ 0xfc76e10b, "kmem_cache_create" },
	{ 0xcc8adef0, "dm_put_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xe5077a8f, "mempool_destroy" },
	{ 0x4e187030, "crypto_free_tfm" },
	{ 0x8c0be9b4, "queue_work" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xbf9b99c4, "bio_endio" },
	{ 0x7f356de5, "bio_put" },
	{ 0x37a9798f, "mempool_free" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x28f35813, "scnprintf" },
	{ 0x1c5b2327, "kmem_cache_destroy" },
	{ 0x31153eb8, "destroy_workqueue" },
	{ 0x1b7d4074, "printk" },
	{ 0x8ae6c9c, "dm_unregister_target" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=dm-mod";


MODULE_INFO(srcversion, "58E7187DA8F52140FF2ABB1");
