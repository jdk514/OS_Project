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
	{ 0x54e0450, "blk_queue_merge_bvec" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xddc3ea6d, "blk_queue_stack_limits" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x697d0d13, "bdevname" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x3f9e3f56, "blk_queue_segment_boundary" },
	{ 0xeb4364da, "blk_queue_max_sectors" },
	{ 0x87b9a132, "register_md_personality" },
	{ 0x1b7d4074, "printk" },
	{ 0x4557a93c, "bio_pair_release" },
	{ 0x20cd79f3, "generic_make_request" },
	{ 0x561afe01, "bio_split" },
	{ 0x2146f99f, "bio_split_pool" },
	{ 0xbf9b99c4, "bio_endio" },
	{ 0x37a0cba, "kfree" },
	{ 0x3e7f7e2d, "blk_sync_queue" },
	{ 0x669e2d2f, "seq_printf" },
	{ 0xa727fc18, "unregister_md_personality" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BD99D0DA3D2A064264A86C6");
