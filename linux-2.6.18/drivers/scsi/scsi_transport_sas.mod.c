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
	{ 0x8136e2d4, "scsi_remove_target" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xdd658c7c, "transport_destroy_device" },
	{ 0xa03dfdbb, "attribute_container_unregister" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x3fc15018, "scsi_scan_target" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x2fad7ec2, "scsi_is_host_device" },
	{ 0x5a37ee35, "device_del" },
	{ 0x76a3d040, "transport_add_device" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0xaa1548d4, "transport_configure_device" },
	{ 0xc6380d66, "attribute_container_register" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x4149cb93, "sysfs_remove_link" },
	{ 0x2ca5f1b5, "device_add" },
	{ 0xe5ea3bb0, "transport_class_unregister" },
	{ 0x2ef69a16, "sysfs_create_link" },
	{ 0xa9615177, "put_device" },
	{ 0x58fa6ddc, "transport_setup_device" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x7de6dcd6, "get_device" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xd779536b, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0xc07f052f, "device_initialize" },
	{ 0x30909c4f, "transport_remove_device" },
	{ 0x25da070, "snprintf" },
	{ 0x5e1b80a, "scsi_mode_sense" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";


MODULE_INFO(srcversion, "B211A18696E2CC9F1069EF4");
