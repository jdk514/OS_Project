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
	{ 0x4550ba8a, "register_cpu_notifier" },
	{ 0xadaa2657, "cpufreq_register_notifier" },
	{ 0xdbb6cbd9, "unlock_cpu_hotplug" },
	{ 0x332eb002, "__next_cpu" },
	{ 0xf4a91d48, "__first_cpu" },
	{ 0x99bdf0a8, "cpu_online_map" },
	{ 0xba813bd6, "lock_cpu_hotplug" },
	{ 0x74cc1cbe, "unregister_cpu_notifier" },
	{ 0x3b3016d3, "cpufreq_unregister_notifier" },
	{ 0x91ed7e93, "sysfs_remove_group" },
	{ 0x8664f62e, "cpufreq_update_policy" },
	{ 0x37a0cba, "kfree" },
	{ 0xa47f8dd1, "cpufreq_cpu_put" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x692d1a65, "sysfs_create_group" },
	{ 0xcfa97be0, "cpufreq_cpu_get" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x2f47d8c7, "cpufreq_frequency_get_table" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x25da070, "snprintf" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x37e74642, "get_jiffies_64" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F174AE8830D9F193CA42BE9");
