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
	{ 0x4330f0ef, "input_free_device" },
	{ 0x380db0a0, "input_register_device" },
	{ 0xa0a04ad6, "serio_open" },
	{ 0x25da070, "snprintf" },
	{ 0xc59d2532, "input_allocate_device" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x37a0cba, "kfree" },
	{ 0xbf025a91, "serio_close" },
	{ 0x963f24f1, "input_unregister_device" },
	{ 0xe7c21ffd, "input_event" },
	{ 0xf91d6ba1, "__serio_register_driver" },
	{ 0x716d5284, "serio_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("serio:ty02pr29id*ex*");

MODULE_INFO(srcversion, "50FAD24DF21625DD75CD805");