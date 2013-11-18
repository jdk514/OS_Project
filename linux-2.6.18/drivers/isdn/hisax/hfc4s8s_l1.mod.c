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
	{ 0xf3b39202, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0x13c12a56, "skb_queue_tail" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x3a233a33, "skb_dequeue" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x26e96637, "request_irq" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x4c3af445, "__request_region" },
	{ 0x2e60bace, "memcpy" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x37a0cba, "kfree" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0xf21a8115, "skb_queue_purge" },
	{ 0x4827a016, "del_timer" },
	{ 0x7f4f2ce, "hisax_unregister" },
	{ 0xee93522c, "hisax_register" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1b7d4074, "printk" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=hisax";

MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd000008B4bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd000016B8bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B520bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd0000B522bc*sc*i*");

MODULE_INFO(srcversion, "1E7A2090E78989B799E9EC1");
