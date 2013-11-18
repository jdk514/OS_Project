#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
};

static const struct modversion_info ____versions[]
__attribute_used__
__attribute__((section("__versions"))) = {
	{ 0xb499ef18, "struct_module" },
	{ 0x5f14efa7, "alloc_ieee80211" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xd089bd5f, "ieee80211_tx_frame" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xc767785d, "netif_carrier_on" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0xa99d5102, "netif_carrier_off" },
	{ 0xdede2a7e, "free_ieee80211" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x2dbbdd68, "complete_all" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0xa13798f8, "printk_ratelimit" },
	{ 0xa34eb072, "wait_for_completion" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x1b7d4074, "printk" },
	{ 0x5152e605, "memcmp" },
	{ 0x9a5962fa, "wireless_send_event" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0x310917fe, "sort" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xd3dad18a, "schedule_delayed_work" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x63aef1c3, "ieee80211_wx_get_scan" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x6943ea4b, "_spin_lock_bh" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ieee80211";


MODULE_INFO(srcversion, "C5585B1082B866919536DE2");
