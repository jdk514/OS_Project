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
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xf465b72a, "param_get_byte" },
	{ 0x5ad53dbc, "param_set_byte" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xfe7afd73, "pci_bus_write_config_byte" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0x8bb7c126, "atm_dev_register" },
	{ 0x26e96637, "request_irq" },
	{ 0x4c3af445, "__request_region" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x2e60bace, "memcpy" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xf49bc67a, "atm_pcr_goal" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0xaeb0e66f, "atm_alloc_charge" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x4292364c, "schedule" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x1b7d4074, "printk" },
	{ 0x807a89d4, "__net_timestamp" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x13e0584f, "atm_dev_deregister" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=atm";

MODULE_ALIAS("pci:v000010B6d00001000sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6F92DEEC952514FD9D89A8C");
