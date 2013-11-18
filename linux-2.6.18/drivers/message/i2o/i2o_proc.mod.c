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
	{ 0x3dccf731, "single_release" },
	{ 0xe6eee95b, "seq_read" },
	{ 0xf9b907c1, "seq_lseek" },
	{ 0x2e60bace, "memcpy" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xc12e8a55, "proc_mkdir" },
	{ 0x1e40d4fc, "i2o_driver_register" },
	{ 0x1b7d4074, "printk" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0xf682c07e, "i2o_status_get" },
	{ 0x27f6bc71, "i2o_parm_field_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x296e3330, "i2o_parm_table_get" },
	{ 0x669e2d2f, "seq_printf" },
	{ 0xdb01fdc3, "single_open" },
	{ 0xb4c00dcf, "i2o_controllers" },
	{ 0xa3baa26e, "i2o_driver_unregister" },
	{ 0xa7ce993b, "remove_proc_entry" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=i2o_core";


MODULE_INFO(srcversion, "2C3B04D7E4589EB695C1F86");
