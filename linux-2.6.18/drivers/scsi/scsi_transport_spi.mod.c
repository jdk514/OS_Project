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
	{ 0xc65e73c, "scsi_normalize_sense" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x9d61dd9d, "scsi_target_resume" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0x70f05724, "anon_transport_class_register" },
	{ 0xa03dfdbb, "attribute_container_unregister" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x4246687b, "scsi_execute" },
	{ 0x1f502c60, "scsi_device_quiesce" },
	{ 0x2fad7ec2, "scsi_is_host_device" },
	{ 0x8d3894f2, "_ctype" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x5152e605, "memcmp" },
	{ 0xc6380d66, "attribute_container_register" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xe5ea3bb0, "transport_class_unregister" },
	{ 0x6ce1aae, "scsi_device_put" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0xfaf161dd, "scsi_device_set_state" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xd779536b, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0xc18aa968, "scsi_target_quiesce" },
	{ 0x8ea68c83, "scsi_is_target_device" },
	{ 0x25da070, "snprintf" },
	{ 0x37ac91a4, "scsi_device_get" },
	{ 0xb58501a6, "anon_transport_class_unregister" },
	{ 0x8e97bacf, "scsi_is_sdev_device" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";


MODULE_INFO(srcversion, "A2011DE36CC1A8D47A28038");
