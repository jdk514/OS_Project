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
	{ 0x72216fa9, "param_get_uint" },
	{ 0x8abac70a, "param_set_uint" },
	{ 0xf07d36, "suni_init" },
	{ 0x8bb7c126, "atm_dev_register" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x96b27088, "__down_failed" },
	{ 0xda4008e6, "cond_resched" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xbf8e93eb, "dev_get_by_name" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x26e96637, "request_irq" },
	{ 0xfe7afd73, "pci_bus_write_config_byte" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0xedc03953, "iounmap" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x13e0584f, "atm_dev_deregister" },
	{ 0x807a89d4, "__net_timestamp" },
	{ 0xde537c9d, "atm_charge" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x4827a016, "del_timer" },
	{ 0xacd81448, "skb_queue_head" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x13c12a56, "skb_queue_tail" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0xf49bc67a, "atm_pcr_goal" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x37a0cba, "kfree" },
	{ 0x3a233a33, "skb_dequeue" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1b7d4074, "printk" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=suni,atm";

MODULE_ALIAS("pci:v0000111Dd00000003sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2B9C154B902A6B6B828C8BA");
