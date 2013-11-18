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
	{ 0x91d8dd53, "dm_register_hw_handler" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x859204af, "sscanf" },
	{ 0x37a0cba, "kfree" },
	{ 0x7d4e29ae, "page_address" },
	{ 0x42827246, "elv_add_request" },
	{ 0x9b05ea5c, "scsi_command_size" },
	{ 0x449e5cdf, "blk_rq_bio_prep" },
	{ 0x7f64488b, "blk_get_request" },
	{ 0x2579aa6, "bio_add_page" },
	{ 0xd4abb36c, "__alloc_pages" },
	{ 0x8a9eec75, "contig_page_data" },
	{ 0xb0eb26ed, "bio_alloc" },
	{ 0x7f356de5, "bio_put" },
	{ 0x65734b02, "__free_pages" },
	{ 0xed5bd11b, "dm_pg_init_complete" },
	{ 0x48b52867, "dm_scsi_err_handler" },
	{ 0x1b7d4074, "printk" },
	{ 0xf7ca3358, "dm_unregister_hw_handler" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=dm-multipath";


MODULE_INFO(srcversion, "DCE99606B161993A0314F87");
