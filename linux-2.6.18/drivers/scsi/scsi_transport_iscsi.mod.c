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
	{ 0x85898a89, "class_register" },
	{ 0xf78d04ab, "netlink_register_notifier" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x81cbc788, "sock_release" },
	{ 0xdd658c7c, "transport_destroy_device" },
	{ 0xe5077a8f, "mempool_destroy" },
	{ 0xf338d4c3, "netlink_unregister_notifier" },
	{ 0x5253a3a4, "class_device_unregister" },
	{ 0xa03dfdbb, "attribute_container_unregister" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x3fc15018, "scsi_scan_target" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x91ed7e93, "sysfs_remove_group" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x2fad7ec2, "scsi_is_host_device" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x7e011933, "netlink_kernel_create" },
	{ 0x5a37ee35, "device_del" },
	{ 0xcdfb7700, "device_register" },
	{ 0x76a3d040, "transport_add_device" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x859204af, "sscanf" },
	{ 0x692d1a65, "sysfs_create_group" },
	{ 0x93618160, "class_unregister" },
	{ 0xc6380d66, "attribute_container_register" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x942aa696, "netlink_unicast" },
	{ 0x2ca5f1b5, "device_add" },
	{ 0xe5ea3bb0, "transport_class_unregister" },
	{ 0xf4bef259, "scsi_host_put" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0xf3c776fd, "scsi_target_unblock" },
	{ 0xcfaf79ba, "mempool_alloc" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x9da4337e, "scsi_host_get" },
	{ 0x5e66a425, "netlink_broadcast" },
	{ 0xa9615177, "put_device" },
	{ 0xd3dad18a, "schedule_delayed_work" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xbe8a1485, "mempool_create" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x58fa6ddc, "transport_setup_device" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x3c2b8737, "class_device_register" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x37a9798f, "mempool_free" },
	{ 0x7de6dcd6, "get_device" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0xc07f052f, "device_initialize" },
	{ 0x3a233a33, "skb_dequeue" },
	{ 0x761ca99d, "device_unregister" },
	{ 0x30909c4f, "transport_remove_device" },
	{ 0x25da070, "snprintf" },
	{ 0x6f75aac6, "scsi_target_block" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";


MODULE_INFO(srcversion, "F81B98425B194A808D84DBE");
