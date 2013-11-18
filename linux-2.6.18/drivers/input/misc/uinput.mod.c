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
	{ 0xbcc308bb, "strnlen_user" },
	{ 0x380db0a0, "input_register_device" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x1ef3eb01, "misc_register" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x1b7d4074, "printk" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xe7c21ffd, "input_event" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x4ff943ae, "mutex_lock_interruptible" },
	{ 0x7e0221e4, "complete" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x4292364c, "schedule" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xa34eb072, "wait_for_completion" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xc59d2532, "input_allocate_device" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x37a0cba, "kfree" },
	{ 0x4330f0ef, "input_free_device" },
	{ 0x963f24f1, "input_unregister_device" },
	{ 0x25dd4bad, "misc_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C7E114CF2DD0788EC20C023");
