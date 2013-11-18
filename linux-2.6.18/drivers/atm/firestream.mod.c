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
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xf49bc67a, "atm_pcr_goal" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x4827a016, "del_timer" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xa3e9fd5e, "interruptible_sleep_on" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x807a89d4, "__net_timestamp" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x13e0584f, "atm_dev_deregister" },
	{ 0x26e96637, "request_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9eac042a, "__ioremap" },
	{ 0xa09539e, "pci_bus_write_config_dword" },
	{ 0x59981248, "pci_bus_read_config_dword" },
	{ 0x8bb7c126, "atm_dev_register" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4292364c, "schedule" },
	{ 0x37a0cba, "kfree" },
	{ 0x1b7d4074, "printk" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=atm";

MODULE_ALIAS("pci:v0000119Ed00000003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000119Ed00000001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7BD847F5C5518C12A8CA2EA");
