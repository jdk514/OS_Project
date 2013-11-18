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
	{ 0x96befe4d, "no_llseek" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xa3e9fd5e, "interruptible_sleep_on" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0x1e62b30a, "usb_alloc_urb" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x8cdbcccf, "usb_register_dev" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5635c457, "usb_reset_configuration" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x4292364c, "schedule" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0x3226577c, "usb_deregister_dev" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xaf5f9c5f, "nonseekable_open" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xe43d1a87, "usb_clear_halt" },
	{ 0xbb7ca41d, "usb_bulk_msg" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x1b7d4074, "printk" },
	{ 0x178b9fcb, "usb_set_interface" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x8500dcf9, "usb_unlink_urb" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x5eea5f42, "usb_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0547p9999d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "728CA4B0395063822CF7ADC");
