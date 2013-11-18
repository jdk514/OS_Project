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
	{ 0x2da418b5, "copy_to_user" },
	{ 0xaf5f9c5f, "nonseekable_open" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x66d603cb, "pcmcia_dev_present" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0xa143539c, "pcmcia_register_driver" },
	{ 0x1e8e5fac, "register_chrdev" },
	{ 0xc83decb4, "class_create" },
	{ 0xb4fb5977, "cs_error" },
	{ 0xd10fc04d, "class_device_create" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x94c5aaac, "pcmcia_request_configuration" },
	{ 0xd12ca23c, "pccard_get_next_tuple" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x8a8d6f30, "pcmcia_request_io" },
	{ 0xcd2ac1c1, "pccard_parse_tuple" },
	{ 0xa2d20b5c, "pccard_get_tuple_data" },
	{ 0xbc08d5a8, "pccard_get_first_tuple" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x27514859, "class_device_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x13d45792, "pcmcia_disable_device" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x4292364c, "schedule" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x93538172, "class_destroy" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0x30910043, "pcmcia_unregister_driver" },
	{ 0x1b7d4074, "printk" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pcmcia:m0223c0200f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paE32CDD8Cpb8F23318Bpc*pd*");

MODULE_INFO(srcversion, "0D78DDD45D65C184BC15045");
