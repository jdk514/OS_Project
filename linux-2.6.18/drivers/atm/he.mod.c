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
	{ 0x6483655c, "param_get_short" },
	{ 0x40046949, "param_set_short" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x8bb7c126, "atm_dev_register" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xf49bc67a, "atm_pcr_goal" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x7dceceac, "capable" },
	{ 0xed5c73bf, "__tasklet_schedule" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x807a89d4, "__net_timestamp" },
	{ 0xaeb0e66f, "atm_alloc_charge" },
	{ 0x2cc2d52d, "vcc_hash" },
	{ 0x3d7c39ea, "_read_lock" },
	{ 0x1e0dfcf0, "vcc_sklist_lock" },
	{ 0x3db28e6f, "dma_pool_free" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x4c09c5f1, "dma_pool_create" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0x26e96637, "request_irq" },
	{ 0x9eac042a, "__ioremap" },
	{ 0xfe7afd73, "pci_bus_write_config_byte" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x1b7d4074, "printk" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5e552f71, "dma_pool_alloc" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x13e0584f, "atm_dev_deregister" },
	{ 0xedc03953, "iounmap" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0x8a24f99e, "dma_pool_destroy" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xa09539e, "pci_bus_write_config_dword" },
	{ 0x59981248, "pci_bus_read_config_dword" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=atm";

MODULE_ALIAS("pci:v00001127d00000400sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4A81A9CA57A24765CF3E86C");
