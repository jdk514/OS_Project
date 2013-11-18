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
	{ 0x2da418b5, "copy_to_user" },
	{ 0xa3e9fd5e, "interruptible_sleep_on" },
	{ 0x876edfe8, "tty_hung_up_p" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x4292364c, "schedule" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x14126ae8, "kill_fasync" },
	{ 0x37a0cba, "kfree" },
	{ 0x3246810d, "n_tty_ioctl" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xba3d372c, "tty_register_ldisc" },
	{ 0x1b7d4074, "printk" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "18304FB6DCCD99B64FBA57A");
