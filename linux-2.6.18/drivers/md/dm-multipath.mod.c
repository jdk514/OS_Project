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
	{ 0x61bed476, "up_read" },
	{ 0x7b6f2551, "dm_get_device" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xa8c6ce0c, "dm_table_get_mode" },
	{ 0xe5077a8f, "mempool_destroy" },
	{ 0x8c0be9b4, "queue_work" },
	{ 0x4e830a3e, "strnicmp" },
	{ 0xb6537757, "dm_register_target" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1985af2a, "down_read" },
	{ 0xf2766228, "__create_workqueue" },
	{ 0x183fa88b, "mempool_alloc_slab" },
	{ 0xbd2d400, "dm_table_event" },
	{ 0x1b7d4074, "printk" },
	{ 0x859204af, "sscanf" },
	{ 0x8ae6c9c, "dm_unregister_target" },
	{ 0x31153eb8, "destroy_workqueue" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x20cd79f3, "generic_make_request" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0xde0c05c3, "up_write" },
	{ 0xbca92367, "down_write" },
	{ 0xd0bbbd3f, "flush_workqueue" },
	{ 0xbf9b99c4, "bio_endio" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xcfaf79ba, "mempool_alloc" },
	{ 0xbe8a1485, "mempool_create" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x37a9798f, "mempool_free" },
	{ 0xfc76e10b, "kmem_cache_create" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x98adfde2, "request_module" },
	{ 0x28f35813, "scnprintf" },
	{ 0xcc8adef0, "dm_put_device" },
	{ 0x94ef8f6d, "dm_get_mapinfo" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=dm-mod";


MODULE_INFO(srcversion, "A3FA6AEE79690622735D79B");
