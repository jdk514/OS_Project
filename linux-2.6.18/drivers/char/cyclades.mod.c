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
	{ 0x1d676acf, "boot_tvec_bases" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0xf4a59b50, "tty_schedule_flip" },
	{ 0xfc7a2547, "do_SAK" },
	{ 0xccac1736, "tty_insert_flip_string_flags" },
	{ 0x441ce43c, "tty_buffer_request_room" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x7dceceac, "capable" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xb2433ebe, "tty_ldisc_flush" },
	{ 0xd75beaaf, "tty_wait_until_sent" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x4292364c, "schedule" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xa3e9fd5e, "interruptible_sleep_on" },
	{ 0x876edfe8, "tty_hung_up_p" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xfe7afd73, "pci_bus_write_config_byte" },
	{ 0x26e96637, "request_irq" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x129cbf09, "pci_get_device" },
	{ 0x1075bf0, "panic" },
	{ 0xb5ff2338, "tty_register_driver" },
	{ 0x70b3c64, "tty_set_operations" },
	{ 0x2e60bace, "memcpy" },
	{ 0x89ac5254, "tty_std_termios" },
	{ 0x9b22a5d, "alloc_tty_driver" },
	{ 0x9785f810, "tty_hangup" },
	{ 0x2c2512ea, "get_zeroed_page" },
	{ 0x97cce049, "tty_get_baud_rate" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xd1913548, "tty_wakeup" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x9941ccb8, "free_pages" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xedc03953, "iounmap" },
	{ 0x81cfa94c, "put_tty_driver" },
	{ 0x1b7d4074, "printk" },
	{ 0x4171b957, "tty_unregister_driver" },
	{ 0x4827a016, "del_timer" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F5A77FB62A6DD0631CB6008");
