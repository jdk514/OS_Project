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
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0xcab54631, "uart_write_wakeup" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xe957dac7, "uart_add_one_port" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0x4cc85ebd, "uart_unregister_driver" },
	{ 0x441ce43c, "tty_buffer_request_room" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x7d11c268, "jiffies" },
	{ 0xf3bf83c3, "uart_remove_one_port" },
	{ 0x1b7d4074, "printk" },
	{ 0x7ebe04c0, "tty_ldisc_deref" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xb946bdb5, "tty_ldisc_ref" },
	{ 0x9eac042a, "__ioremap" },
	{ 0xccac1736, "tty_insert_flip_string_flags" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x26e96637, "request_irq" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0xf60c8df5, "tty_insert_flip_string" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xf77a3a40, "uart_register_driver" },
	{ 0x41d418f, "tty_flip_buffer_push" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v0000114Fd000000C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd000000C9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd000000CAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd000000CBsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "51AE187904FEFBF6C9A3BDF");
