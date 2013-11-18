#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
};

static const struct modversion_info ____versions[]
__attribute_used__
__attribute__((section("__versions"))) = {
	{ 0xb499ef18, "struct_module" },
	{ 0x476f0d58, "blk_init_queue" },
	{ 0xa4935a88, "alloc_disk" },
	{ 0xfd59d987, "complete_and_exit" },
	{ 0x81db09d7, "blk_cleanup_queue" },
	{ 0x3721210a, "mtd_table_mutex" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xc6183807, "mutex_trylock" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xa34eb072, "wait_for_completion" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0x700d5f9, "del_gendisk" },
	{ 0x86725e89, "register_mtd_user" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x2c16675a, "mtd_table" },
	{ 0x50671762, "unregister_mtd_user" },
	{ 0xeac1c4af, "unregister_blkdev" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x2c715df5, "elv_next_request" },
	{ 0x4292364c, "schedule" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0x5fe7f92a, "put_disk" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0xe10dc728, "add_disk" },
	{ 0x698c6ab3, "end_request" },
	{ 0x7e9ebb05, "kernel_thread" },
	{ 0x25da070, "snprintf" },
	{ 0xdc43a9c8, "daemonize" },
	{ 0x3a65725a, "set_disk_ro" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=mtdcore";


MODULE_INFO(srcversion, "292297AE3C611D8036FB5BD");
