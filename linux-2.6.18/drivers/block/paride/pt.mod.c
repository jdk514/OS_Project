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
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xaa136450, "param_get_charp" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xd10fc04d, "class_device_create" },
	{ 0xc83decb4, "class_create" },
	{ 0x1e8e5fac, "register_chrdev" },
	{ 0x920cf8bf, "pi_init" },
	{ 0x25da070, "snprintf" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0xb6dac75f, "pi_read_block" },
	{ 0x2f761826, "pi_write_block" },
	{ 0x84fd2f81, "pi_disconnect" },
	{ 0xc3c6cd4e, "pi_write_regr" },
	{ 0x67643491, "pi_connect" },
	{ 0x1b7d4074, "printk" },
	{ 0xc854290e, "pi_read_regr" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xef7aa777, "pi_release" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0x93538172, "class_destroy" },
	{ 0x27514859, "class_device_destroy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=paride";


MODULE_INFO(srcversion, "C2F5E877B00558BAAB2BD90");
