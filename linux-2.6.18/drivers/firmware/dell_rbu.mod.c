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
	{ 0x93304684, "param_get_string" },
	{ 0x683a3221, "param_set_copystring" },
	{ 0x7ded8240, "param_get_ulong" },
	{ 0x66eaa8a9, "param_set_ulong" },
	{ 0x859204af, "sscanf" },
	{ 0xb5b49e73, "request_firmware_nowait" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x107d6ba3, "__get_free_pages" },
	{ 0x2c077a33, "platform_device_unregister" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x9941ccb8, "free_pages" },
	{ 0x34d6a5a7, "sysfs_create_bin_file" },
	{ 0x1b7d4074, "printk" },
	{ 0x84e549a0, "platform_device_register_simple" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1607E56FBB2ADD94AAB0639");
