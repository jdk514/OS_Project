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
	{ 0x7e9ebb05, "kernel_thread" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xa1906d09, "i2c_attach_client" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xfd59d987, "complete_and_exit" },
	{ 0x35c2ba9e, "refrigerator" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x4292364c, "schedule" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0xd79b5a02, "allow_signal" },
	{ 0xdc43a9c8, "daemonize" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x37a0cba, "kfree" },
	{ 0xd1aaaaa5, "i2c_detach_client" },
	{ 0xa34eb072, "wait_for_completion" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x2e60bace, "memcpy" },
	{ 0x8e30cd1b, "i2c_register_driver" },
	{ 0x82f49e12, "i2c_probe" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x5cca4df3, "i2c_transfer" },
	{ 0xa97564d6, "i2c_master_recv" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0xa9a2b1a0, "i2c_master_send" },
	{ 0x1b7d4074, "printk" },
	{ 0xaa5c63a9, "i2c_del_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=i2c-core";


MODULE_INFO(srcversion, "C571C64D78738426039EEF4");
