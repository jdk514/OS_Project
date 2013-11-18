#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
};

static const struct modversion_info ____versions[]
__attribute_used__
__attribute__((section("__versions"))) = {
	{ 0xb499ef18, "struct_module" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0xaeb0e66f, "atm_alloc_charge" },
	{ 0x7d11c268, "jiffies" },
	{ 0x2cc2d52d, "vcc_hash" },
	{ 0x3d7c39ea, "_read_lock" },
	{ 0x1e0dfcf0, "vcc_sklist_lock" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x13e0584f, "atm_dev_deregister" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x9941ccb8, "free_pages" },
	{ 0x2c2512ea, "get_zeroed_page" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0x26e96637, "request_irq" },
	{ 0xf07d36, "suni_init" },
	{ 0xfe7afd73, "pci_bus_write_config_byte" },
	{ 0x3762cb6e, "ioremap_nocache" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0x8bb7c126, "atm_dev_register" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0xacd81448, "skb_queue_head" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x3a233a33, "skb_dequeue" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xd8c152cd, "raise_softirq_irqoff" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xe8e53e56, "per_cpu__softnet_data" },
	{ 0x37a0cba, "kfree" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x4292364c, "schedule" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x7dceceac, "capable" },
	{ 0xed5c73bf, "__tasklet_schedule" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x13c12a56, "skb_queue_tail" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xf49bc67a, "atm_pcr_goal" },
	{ 0x1b7d4074, "printk" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=atm,suni";

MODULE_ALIAS("pci:v0000111Ad00000000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000111Ad00000002sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E7D85381C8A83BD50428C4E");
