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
	{ 0x28209a37, "register_isdn" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x9b22a5d, "alloc_tty_driver" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0xb5ff2338, "tty_register_driver" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x441ce43c, "tty_buffer_request_room" },
	{ 0x81cfa94c, "put_tty_driver" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x7d11c268, "jiffies" },
	{ 0x70b3c64, "tty_set_operations" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x8d3894f2, "_ctype" },
	{ 0x4ff943ae, "mutex_lock_interruptible" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0xed5c73bf, "__tasklet_schedule" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x6180e3ac, "class_device_create_file" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x8841a6ea, "tty_register_device" },
	{ 0x79ad224b, "tasklet_kill" },
	{ 0x62b1541b, "tty_unregister_device" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x89ac5254, "tty_std_termios" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x2eb16cd2, "class_device_remove_file" },
	{ 0x4292364c, "schedule" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0xf60c8df5, "tty_insert_flip_string" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x4171b957, "tty_unregister_driver" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x3a233a33, "skb_dequeue" },
	{ 0x41d418f, "tty_flip_buffer_push" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x25da070, "snprintf" },
	{ 0xf2a644fb, "copy_from_user" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=isdn";


MODULE_INFO(srcversion, "B2411EAACFC66C6F37A3105");
