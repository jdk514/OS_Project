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
	{ 0x52c0a61d, "_write_unlock_irqrestore" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x61bed476, "up_read" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x7ae00a87, "proc_symlink" },
	{ 0x3d7c39ea, "_read_lock" },
	{ 0xe00fb238, "release_resource" },
	{ 0x4beb0ae0, "sound_class" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x27514859, "class_device_destroy" },
	{ 0xd10fc04d, "class_device_create" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x3093180f, "_write_lock_irqsave" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x1985af2a, "down_read" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xf82abc1d, "isa_dma_bridge_buggy" },
	{ 0x8d3894f2, "_ctype" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0x5152e605, "memcmp" },
	{ 0x5568be43, "lock_kernel" },
	{ 0x1075bf0, "panic" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x54ee23d3, "fasync_helper" },
	{ 0x28d62f7, "dma_spin_lock" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xde0c05c3, "up_write" },
	{ 0xbca92367, "down_write" },
	{ 0x5dfe8f1a, "unlock_kernel" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xff1340e, "register_sound_special_device" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xb12cdfe7, "system_utsname" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0x4292364c, "schedule" },
	{ 0x1e8e5fac, "register_chrdev" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0xd3460f31, "proc_root" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x6989a769, "vsnprintf" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x98adfde2, "request_module" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0x99c95fa5, "unregister_sound_special" },
	{ 0x14126ae8, "kill_fasync" },
	{ 0x865edc9b, "finish_wait" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0xf1f0ab07, "__init_rwsem" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=soundcore";


MODULE_INFO(srcversion, "AAC50AA823F5712194D6860");
