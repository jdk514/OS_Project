#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
};

static const struct modversion_info ____versions[]
__attribute_used__
__attribute__((section("__versions"))) = {
	{ 0xb499ef18, "struct_module" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x33101736, "parport_put_port" },
	{ 0xd78d0583, "parport_find_base" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1b7d4074, "printk" },
	{ 0xea1ea44c, "parport_unregister_device" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xef276433, "parport_claim" },
	{ 0x20ca67eb, "parport_release" },
	{ 0xa7d6af18, "parport_register_device" },
	{ 0x4292364c, "schedule" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x2e60bace, "memcpy" },
	{ 0x98adfde2, "request_module" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0x865edc9b, "finish_wait" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=parport";


MODULE_INFO(srcversion, "2DA854FEAF254B976D732B9");
