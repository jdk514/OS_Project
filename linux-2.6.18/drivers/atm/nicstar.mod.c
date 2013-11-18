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
	{ 0xaa136450, "param_get_charp" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x7dceceac, "capable" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x4292364c, "schedule" },
	{ 0x13e0584f, "atm_dev_deregister" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x8e334f2b, "interruptible_sleep_on_timeout" },
	{ 0xf49bc67a, "atm_pcr_goal" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xe3038592, "skb_under_panic" },
	{ 0x807a89d4, "__net_timestamp" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0xde537c9d, "atm_charge" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xd8c152cd, "raise_softirq_irqoff" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xe8e53e56, "per_cpu__softnet_data" },
	{ 0x5152e605, "memcmp" },
	{ 0x8bb7c126, "atm_dev_register" },
	{ 0x26e96637, "request_irq" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0x9eac042a, "__ioremap" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x68c861cc, "skb_unlink" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x13c12a56, "skb_queue_tail" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0xedc03953, "iounmap" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x3a233a33, "skb_dequeue" },
	{ 0x37a0cba, "kfree" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0x1b7d4074, "printk" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x4827a016, "del_timer" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=atm";

MODULE_ALIAS("pci:v0000111Dd00000001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5B13D7E7074A10C8B3588F5");
