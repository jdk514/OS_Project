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
	{ 0x99bdf0a8, "cpu_online_map" },
	{ 0x332eb002, "__next_cpu" },
	{ 0xe6488b47, "cpufreq_notify_transition" },
	{ 0xf4a91d48, "__first_cpu" },
	{ 0xbfc0e723, "cpufreq_frequency_table_target" },
	{ 0xacddfa42, "cpufreq_register_driver" },
	{ 0x9ca7c49f, "cpufreq_frequency_table_cpuinfo" },
	{ 0xc62123ea, "cpufreq_gov_userspace" },
	{ 0x706b3a33, "cpufreq_frequency_table_get_attr" },
	{ 0x16836e04, "speedstep_detect_processor" },
	{ 0x4cdb4bd0, "speedstep_get_processor_frequency" },
	{ 0x1b7d4074, "printk" },
	{ 0x56edceeb, "cpufreq_debug_printk" },
	{ 0x85c02b80, "cpu_data" },
	{ 0x68f4125, "cpu_sibling_map" },
	{ 0x810a3db0, "cpufreq_frequency_table_verify" },
	{ 0x1af78947, "set_cpus_allowed" },
	{ 0x7ae1ae8e, "cpufreq_frequency_table_put_attr" },
	{ 0x9cd66ef2, "cpufreq_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "56C5B9E35C2622F61FEAC0D");
