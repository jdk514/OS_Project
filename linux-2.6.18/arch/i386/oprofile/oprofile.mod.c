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
	{ 0x68f4125, "cpu_sibling_map" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x92fb217b, "dcookie_unregister" },
	{ 0x1657963f, "sysdev_unregister" },
	{ 0x61bed476, "up_read" },
	{ 0xea065e01, "task_handoff_unregister" },
	{ 0x3c942368, "profile_event_unregister" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x3f238101, "dcookie_register" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x59d696b6, "register_module_notifier" },
	{ 0x7c904ded, "unregister_module_notifier" },
	{ 0x332eb002, "__next_cpu" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x2c4fa81f, "set_nmi_callback" },
	{ 0xf2fb62ee, "disable_timer_nmi_watchdog" },
	{ 0x74cc238d, "current_kernel_time" },
	{ 0x2ef9373e, "unset_nmi_callback" },
	{ 0xc4d65887, "boot_cpu_data" },
	{ 0x3fa545f8, "unregister_timer_hook" },
	{ 0x368ac883, "schedule_delayed_work_on" },
	{ 0x53e0eb34, "free_task" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x9271012a, "generic_delete_inode" },
	{ 0xa17ecfe, "dput" },
	{ 0xadcdf031, "sysdev_class_register" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x38a7dd83, "mmput" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x95c31ff5, "__copy_from_user_ll_nozero" },
	{ 0x1985af2a, "down_read" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0xd4a51edf, "get_sb_single" },
	{ 0x656a4576, "kill_litter_super" },
	{ 0x1b7d4074, "printk" },
	{ 0x9ac7d267, "d_rehash" },
	{ 0xf0aed7d9, "get_task_mm" },
	{ 0xd1f6c5f3, "smp_num_siblings" },
	{ 0xc0b9dad, "d_alloc_root" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xf4a91d48, "__first_cpu" },
	{ 0x1926e344, "sysdev_class_unregister" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x5dfd3f0d, "cpu_possible_map" },
	{ 0x99bdf0a8, "cpu_online_map" },
	{ 0x1ab944a0, "find_vma" },
	{ 0x178571fc, "sysdev_register" },
	{ 0x7dceceac, "capable" },
	{ 0x69dcda8, "nmi_active" },
	{ 0xafcd88eb, "simple_dir_operations" },
	{ 0x74abdafa, "task_handoff_register" },
	{ 0xd3dad18a, "schedule_delayed_work" },
	{ 0x4292364c, "schedule" },
	{ 0xb903b498, "reserve_lapic_nmi" },
	{ 0x4129043e, "release_lapic_nmi" },
	{ 0x118bc8c2, "register_filesystem" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xc317c43f, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xf5269962, "register_timer_hook" },
	{ 0xda5df516, "get_dcookie" },
	{ 0x3b056490, "simple_statfs" },
	{ 0x5e136a9f, "d_alloc_name" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x9159b9d6, "profile_event_register" },
	{ 0x933eb75d, "unregister_filesystem" },
	{ 0x25da070, "snprintf" },
	{ 0x3105bd2e, "new_inode" },
	{ 0x13f54343, "enable_timer_nmi_watchdog" },
	{ 0xbba1c14, "on_each_cpu" },
	{ 0x421039ba, "simple_dir_inode_operations" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x7406bbc, "d_instantiate" },
	{ 0x23fd3028, "vmalloc_node" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F89BC5F088F63F12610ED64");
