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
	{ 0xcbbbba4e, "scsi_flush_work" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xdd658c7c, "transport_destroy_device" },
	{ 0x8c0be9b4, "queue_work" },
	{ 0xa03dfdbb, "attribute_container_unregister" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x3fc15018, "scsi_scan_target" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0xf2766228, "__create_workqueue" },
	{ 0x2fad7ec2, "scsi_is_host_device" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x5a37ee35, "device_del" },
	{ 0xd645c93b, "scsi_queue_work" },
	{ 0x76a3d040, "transport_add_device" },
	{ 0x1b7d4074, "printk" },
	{ 0xaa1548d4, "transport_configure_device" },
	{ 0xc6380d66, "attribute_container_register" },
	{ 0x31153eb8, "destroy_workqueue" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x2ca5f1b5, "device_add" },
	{ 0xe5ea3bb0, "transport_class_unregister" },
	{ 0xd0bbbd3f, "flush_workqueue" },
	{ 0xf3c776fd, "scsi_target_unblock" },
	{ 0xa9615177, "put_device" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x58fa6ddc, "transport_setup_device" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x7de6dcd6, "get_device" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0xc07f052f, "device_initialize" },
	{ 0x8ea68c83, "scsi_is_target_device" },
	{ 0x30909c4f, "transport_remove_device" },
	{ 0x25da070, "snprintf" },
	{ 0x6f75aac6, "scsi_target_block" },
	{ 0x622ab174, "queue_delayed_work" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";


MODULE_INFO(srcversion, "8E4D772279623CEEF0F4CBF");
