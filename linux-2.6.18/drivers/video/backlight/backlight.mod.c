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
	{ 0x85898a89, "class_register" },
	{ 0x5934392b, "fb_register_client" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x5253a3a4, "class_device_unregister" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x8d3894f2, "_ctype" },
	{ 0x93618160, "class_unregister" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x6180e3ac, "class_device_create_file" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x2eb16cd2, "class_device_remove_file" },
	{ 0x3c2b8737, "class_device_register" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x37a0cba, "kfree" },
	{ 0xcc36f32e, "fb_unregister_client" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x96b27088, "__down_failed" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "44D597E718114194B206540");
