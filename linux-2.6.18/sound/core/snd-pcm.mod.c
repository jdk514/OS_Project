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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x7e3f931f, "_spin_trylock" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0x61bed476, "up_read" },
	{ 0x5511347d, "snd_register_device" },
	{ 0x86eafb2b, "snd_device_register" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0xafcfd397, "snd_info_unregister" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x3b91f3af, "snd_free_pages" },
	{ 0x4827a016, "del_timer" },
	{ 0x70b15139, "snd_card_file_remove" },
	{ 0x4d142c5f, "snd_dma_alloc_pages" },
	{ 0x2a30b913, "snd_device_free" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0xc4d65887, "boot_cpu_data" },
	{ 0xa7c35c6b, "getnstimeofday" },
	{ 0xf4efde41, "snd_power_wait" },
	{ 0xbb0376d1, "snd_info_create_card_entry" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0x1985af2a, "down_read" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x7a9bb45, "snd_ctl_unregister_ioctl" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xca58335e, "snd_dma_get_reserved_buf" },
	{ 0x6cec7683, "snd_device_new" },
	{ 0xae489b1d, "snd_timer_new" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x5152e605, "memcmp" },
	{ 0x92f5c687, "snd_unregister_device" },
	{ 0xade88e76, "snd_malloc_pages" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x54ee23d3, "fasync_helper" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x8f595b11, "snd_major" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x553d0022, "_read_unlock_irqrestore" },
	{ 0xde0c05c3, "up_write" },
	{ 0xbca92367, "down_write" },
	{ 0xf51976d4, "fput" },
	{ 0x496a442, "_read_lock_irqsave" },
	{ 0x33196303, "snd_iprintf" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x924538af, "snd_card_file_add" },
	{ 0x8ed4e98c, "snd_ctl_register_ioctl" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0x4292364c, "schedule" },
	{ 0x5a0e1e92, "_read_lock_irq" },
	{ 0x3fa6262e, "snd_dma_free_pages" },
	{ 0x50bc9c7c, "_write_lock_irq" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x5ce470d2, "snd_dma_reserve_buf" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0xb213fe8b, "snd_info_get_str" },
	{ 0x37a0cba, "kfree" },
	{ 0x9a3411f9, "remap_pfn_range" },
	{ 0x2e60bace, "memcpy" },
	{ 0x3f4fa3b8, "snd_info_free_entry" },
	{ 0x7744a796, "snd_timer_interrupt" },
	{ 0x61dc8e70, "fget" },
	{ 0x14126ae8, "kill_fasync" },
	{ 0xea581ae4, "snd_timer_notify" },
	{ 0x9258a2d7, "snd_info_create_module_entry" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x7143fb76, "snd_info_register" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd,snd-page-alloc,snd-timer";


MODULE_INFO(srcversion, "3CAAC8E1C79438F50D5FD57");
