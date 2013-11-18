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
	{ 0xacd81448, "skb_queue_head" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x7e3f931f, "_spin_trylock" },
	{ 0xf49bc67a, "atm_pcr_goal" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x807a89d4, "__net_timestamp" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0xaeb0e66f, "atm_alloc_charge" },
	{ 0x3d7c39ea, "_read_lock" },
	{ 0x2ff92ca0, "find_next_bit" },
	{ 0x13e0584f, "atm_dev_deregister" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x26e96637, "request_irq" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x9eac042a, "__ioremap" },
	{ 0xfe7afd73, "pci_bus_write_config_byte" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0x9728b2f9, "pci_set_consistent_dma_mask" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x8bb7c126, "atm_dev_register" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0xedc03953, "iounmap" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7d11c268, "jiffies" },
	{ 0x3a233a33, "skb_dequeue" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x553d0022, "_read_unlock_irqrestore" },
	{ 0x13c12a56, "skb_queue_tail" },
	{ 0x496a442, "_read_lock_irqsave" },
	{ 0x1e0dfcf0, "vcc_sklist_lock" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x1b7d4074, "printk" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=atm";

MODULE_ALIAS("pci:v0000111Ad00000003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000111Ad00000005sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "704D5F0AB29FA9F61FA9EA3");
