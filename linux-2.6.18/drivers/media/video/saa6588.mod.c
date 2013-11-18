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
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xa9a2b1a0, "i2c_master_send" },
	{ 0xa1906d09, "i2c_attach_client" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x2e60bace, "memcpy" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x37a0cba, "kfree" },
	{ 0xd1aaaaa5, "i2c_detach_client" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x8e30cd1b, "i2c_register_driver" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0xa97564d6, "i2c_master_recv" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0x82f49e12, "i2c_probe" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x1b7d4074, "printk" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x4292364c, "schedule" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xaa5c63a9, "i2c_del_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=i2c-core";


MODULE_INFO(srcversion, "6ADE5C86A7A19D051FB4DC6");
