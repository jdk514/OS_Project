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
	{ 0xfa955d96, "mpt_event_register" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0x7d11c268, "jiffies" },
	{ 0x73fec4bb, "mpt_event_deregister" },
	{ 0x5598dc19, "register_netdev" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x42e22666, "alloc_fcdev" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0xd8c152cd, "raise_softirq_irqoff" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xe8e53e56, "per_cpu__softnet_data" },
	{ 0x96f7398e, "netif_rx" },
	{ 0x5152e605, "memcmp" },
	{ 0xd3dad18a, "schedule_delayed_work" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0x1c733de3, "mpt_free_msg_frame" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x548de514, "__alloc_skb" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x5528b7ca, "mpt_put_msg_frame" },
	{ 0x12d90ef9, "mpt_get_msg_frame" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0x306cdcb1, "mpt_device_driver_register" },
	{ 0xf5b78a84, "mpt_reset_register" },
	{ 0x44dbcac8, "mpt_register" },
	{ 0x1b7d4074, "printk" },
	{ 0x3b4f162e, "mpt_lan_index" },
	{ 0x6fb5ab71, "mpt_deregister" },
	{ 0xae4fb61e, "mpt_reset_deregister" },
	{ 0x17c3bdf6, "mpt_device_driver_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=mptbase";


MODULE_INFO(srcversion, "14935C638A80BBBC15C5DA0");
