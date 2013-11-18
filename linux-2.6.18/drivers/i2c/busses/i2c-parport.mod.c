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
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x35fef8c8, "i2c_bit_add_bus" },
	{ 0x20ca67eb, "parport_release" },
	{ 0xe33d9502, "parport_claim_or_block" },
	{ 0x2e60bace, "memcpy" },
	{ 0xa7d6af18, "parport_register_device" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xe676d461, "parport_register_driver" },
	{ 0x1b7d4074, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xea1ea44c, "parport_unregister_device" },
	{ 0xaaee7e8f, "i2c_bit_del_bus" },
	{ 0x6da9db6f, "parport_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=i2c-algo-bit,parport";


MODULE_INFO(srcversion, "A371CDFA7A8B19FFEE4FB07");
