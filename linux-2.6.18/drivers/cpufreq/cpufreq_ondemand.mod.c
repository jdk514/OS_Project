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
	{ 0x31153eb8, "destroy_workqueue" },
	{ 0x91ed7e93, "sysfs_remove_group" },
	{ 0xd0bbbd3f, "flush_workqueue" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x692d1a65, "sysfs_create_group" },
	{ 0xf2766228, "__create_workqueue" },
	{ 0x1b7d4074, "printk" },
	{ 0x99bdf0a8, "cpu_online_map" },
	{ 0xd1968c06, "cpufreq_register_governor" },
	{ 0xb01737c7, "queue_delayed_work_on" },
	{ 0xdbb6cbd9, "unlock_cpu_hotplug" },
	{ 0x672a179e, "__cpufreq_driver_target" },
	{ 0x332eb002, "__next_cpu" },
	{ 0xca09a9af, "per_cpu__kstat" },
	{ 0xf4a91d48, "__first_cpu" },
	{ 0x37e74642, "get_jiffies_64" },
	{ 0xba813bd6, "lock_cpu_hotplug" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x859204af, "sscanf" },
	{ 0xd845f3af, "cpufreq_unregister_governor" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "749B2A2677FCFDE73B03EC4");