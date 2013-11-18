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
	{ 0xfc23d160, "neigh_lookup" },
	{ 0x4b27b343, "ip_route_output_key" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xc74bda34, "arp_tbl" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xd592aca8, "neigh_destroy" },
	{ 0xc6ee3c88, "ip_dev_find" },
	{ 0x7d11c268, "jiffies" },
	{ 0xf2766228, "__create_workqueue" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x1b7d4074, "printk" },
	{ 0x1598dc9d, "unregister_netevent_notifier" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x31153eb8, "destroy_workqueue" },
	{ 0x83479f58, "arp_send" },
	{ 0x1d676acf, "boot_tvec_bases" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x37a0cba, "kfree" },
	{ 0x5dd67618, "register_netevent_notifier" },
	{ 0x622ab174, "queue_delayed_work" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6BE0978E57E6843043553C6");
