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
	{ 0x4ea92da1, "transport_class_register" },
	{ 0x197030a8, "attribute_container_classdev_to_container" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x5253a3a4, "class_device_unregister" },
	{ 0xa03dfdbb, "attribute_container_unregister" },
	{ 0x1b7d4074, "printk" },
	{ 0xc6380d66, "attribute_container_register" },
	{ 0xe5ea3bb0, "transport_class_unregister" },
	{ 0xecf16b18, "attribute_container_find_class_device" },
	{ 0x1fe72a83, "class_device_add" },
	{ 0xa9615177, "put_device" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x7de6dcd6, "get_device" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x25da070, "snprintf" },
	{ 0x8e97bacf, "scsi_is_sdev_device" },
	{ 0x58c6b902, "class_device_initialize" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";


MODULE_INFO(srcversion, "8160D578461FC51D01408A1");
