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
	{ 0xef8cf02f, "cpufreq_freq_attr_scaling_available_freqs" },
	{ 0x72216fa9, "param_get_uint" },
	{ 0x8abac70a, "param_set_uint" },
	{ 0x1af78947, "set_cpus_allowed" },
	{ 0xe6488b47, "cpufreq_notify_transition" },
	{ 0x99bdf0a8, "cpu_online_map" },
	{ 0xbfc0e723, "cpufreq_frequency_table_target" },
	{ 0xacddfa42, "cpufreq_register_driver" },
	{ 0x259005db, "acpi_processor_preregister_performance" },
	{ 0x706b3a33, "cpufreq_frequency_table_get_attr" },
	{ 0x9cc7d4fc, "acpi_processor_notify_smm" },
	{ 0x9ca7c49f, "cpufreq_frequency_table_cpuinfo" },
	{ 0xd6b33026, "cpu_khz" },
	{ 0xc62123ea, "cpufreq_gov_userspace" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x85c02b80, "cpu_data" },
	{ 0x41ab8c8a, "acpi_processor_register_performance" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x810a3db0, "cpufreq_frequency_table_verify" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1b7d4074, "printk" },
	{ 0xcf8ee05a, "acpi_processor_unregister_performance" },
	{ 0x7ae1ae8e, "cpufreq_frequency_table_put_attr" },
	{ 0x332eb002, "__next_cpu" },
	{ 0x37a0cba, "kfree" },
	{ 0xf4a91d48, "__first_cpu" },
	{ 0x5dfd3f0d, "cpu_possible_map" },
	{ 0x9cd66ef2, "cpufreq_unregister_driver" },
	{ 0x56edceeb, "cpufreq_debug_printk" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6A6602EA8C841E8FF7137DA");
