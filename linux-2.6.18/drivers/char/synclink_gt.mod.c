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
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0xb2433ebe, "tty_ldisc_flush" },
	{ 0xd75beaaf, "tty_wait_until_sent" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x4292364c, "schedule" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xa3e9fd5e, "interruptible_sleep_on" },
	{ 0x876edfe8, "tty_hung_up_p" },
	{ 0xb5ff2338, "tty_register_driver" },
	{ 0x70b3c64, "tty_set_operations" },
	{ 0x2e60bace, "memcpy" },
	{ 0x89ac5254, "tty_std_termios" },
	{ 0x9b22a5d, "alloc_tty_driver" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x97cce049, "tty_get_baud_rate" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x5152e605, "memcmp" },
	{ 0x26e96637, "request_irq" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x4c3af445, "__request_region" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x81cfa94c, "put_tty_driver" },
	{ 0x4171b957, "tty_unregister_driver" },
	{ 0xedc03953, "iounmap" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0xdc3eaf70, "iomem_resource" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0x9785f810, "tty_hangup" },
	{ 0xfc7a2547, "do_SAK" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x4827a016, "del_timer" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x41d418f, "tty_flip_buffer_push" },
	{ 0xccac1736, "tty_insert_flip_string_flags" },
	{ 0x7ebe04c0, "tty_ldisc_deref" },
	{ 0xb946bdb5, "tty_ldisc_ref" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xd1913548, "tty_wakeup" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x1b7d4074, "printk" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000013C0d00000070sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013C0d000000A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013C0d00000080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013C0d00000090sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "EF05BAA6493E5376E727AC6");
