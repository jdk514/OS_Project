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
	{ 0x5418d52a, "param_get_ushort" },
	{ 0xc4c5509d, "param_set_ushort" },
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x72216fa9, "param_get_uint" },
	{ 0x8abac70a, "param_set_uint" },
	{ 0xf465b72a, "param_get_byte" },
	{ 0x5ad53dbc, "param_set_byte" },
	{ 0xf49bc67a, "atm_pcr_goal" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x96b27088, "__down_failed" },
	{ 0xda4008e6, "cond_resched" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x8bb7c126, "atm_dev_register" },
	{ 0x26e96637, "request_irq" },
	{ 0xfe7afd73, "pci_bus_write_config_byte" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x2822ea4b, "pci_request_region" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xa0e2231b, "pci_release_region" },
	{ 0x13e0584f, "atm_dev_deregister" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0x1b7d4074, "printk" },
	{ 0x807a89d4, "__net_timestamp" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0xde537c9d, "atm_charge" },
	{ 0x4292364c, "schedule" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2e60bace, "memcpy" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=atm";

MODULE_ALIAS("pci:v000010B6d00001001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B6d00001002sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5452058EC156DE6302D0CDE");
