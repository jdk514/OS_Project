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
	{ 0x1ef3eb01, "misc_register" },
	{ 0xa0a04ad6, "serio_open" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x25da070, "snprintf" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x1b7d4074, "printk" },
	{ 0x14126ae8, "kill_fasync" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x4292364c, "schedule" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xf91d6ba1, "__serio_register_driver" },
	{ 0xd16ac615, "__get_user_1" },
	{ 0x4ff943ae, "mutex_lock_interruptible" },
	{ 0x54ee23d3, "fasync_helper" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xbf025a91, "serio_close" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x25dd4bad, "misc_deregister" },
	{ 0x716d5284, "serio_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("serio:ty01pr*id*ex*");

MODULE_INFO(srcversion, "BC13B1456E9291296EECAF9");
