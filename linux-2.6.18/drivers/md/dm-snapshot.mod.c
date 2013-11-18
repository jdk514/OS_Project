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
	{ 0xd6ee688f, "vmalloc" },
	{ 0x7b6f2551, "dm_get_device" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xa8c6ce0c, "dm_table_get_mode" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xe5077a8f, "mempool_destroy" },
	{ 0xc79bcd36, "dm_vcalloc" },
	{ 0x2fd1d81c, "vfree" },
	{ 0xb6537757, "dm_register_target" },
	{ 0x1985af2a, "down_read" },
	{ 0x183fa88b, "mempool_alloc_slab" },
	{ 0xbd2d400, "dm_table_event" },
	{ 0x8d3894f2, "_ctype" },
	{ 0xb0d8c5d, "dm_io_sync_vm" },
	{ 0x1b7d4074, "printk" },
	{ 0x8ae6c9c, "dm_unregister_target" },
	{ 0xb689e344, "kmem_cache_free" },
	{ 0xfeae9a7, "dm_io_put" },
	{ 0x20cd79f3, "generic_make_request" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0xb3576650, "dm_io_get" },
	{ 0xde0c05c3, "up_write" },
	{ 0xbca92367, "down_write" },
	{ 0xbf9b99c4, "bio_endio" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xcfaf79ba, "mempool_alloc" },
	{ 0xbe8a1485, "mempool_create" },
	{ 0x37a9798f, "mempool_free" },
	{ 0xca50561d, "kcopyd_client_create" },
	{ 0xfc76e10b, "kmem_cache_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x50540927, "dm_table_get_size" },
	{ 0xcc8adef0, "dm_put_device" },
	{ 0x25da070, "snprintf" },
	{ 0xd2e90143, "kcopyd_copy" },
	{ 0xf1f0ab07, "__init_rwsem" },
	{ 0x93fcc8a5, "kcopyd_client_destroy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=dm-mod";


MODULE_INFO(srcversion, "0C6E3CF8845369723BC8F76");
