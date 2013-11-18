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
	{ 0x8aceb563, "cdev_alloc" },
	{ 0xdc3debb9, "cdev_del" },
	{ 0xcff53400, "kref_put" },
	{ 0x61bed476, "up_read" },
	{ 0xd8e484f0, "register_chrdev_region" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x27514859, "class_device_destroy" },
	{ 0x7fdf1a5, "ib_register_mad_agent" },
	{ 0xd10fc04d, "class_device_create" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xd6f8244e, "ib_free_recv_mad" },
	{ 0x432c6e9f, "downgrade_write" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x7d4a1f83, "kobject_set_name" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x2d90c65e, "ib_get_rmpp_segment" },
	{ 0x1ff564ab, "ib_destroy_ah" },
	{ 0x1985af2a, "down_read" },
	{ 0xcdf26d1f, "ib_free_send_mad" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x7b5d4b7a, "ib_is_mad_class_rmpp" },
	{ 0x1b7d4074, "printk" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0x5152e605, "memcmp" },
	{ 0x93637a5a, "ib_get_client_data" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x2cd3086, "__down_failed_trylock" },
	{ 0x6180e3ac, "class_device_create_file" },
	{ 0x625acc81, "__down_failed_interruptible" },
	{ 0xc83decb4, "class_create" },
	{ 0x369b4451, "class_create_file" },
	{ 0xde0c05c3, "up_write" },
	{ 0xbca92367, "down_write" },
	{ 0x515ff74e, "ib_set_client_data" },
	{ 0x28330136, "ib_create_send_mad" },
	{ 0xbaea96c, "ib_post_send_mad" },
	{ 0xbbcb9267, "ib_response_mad" },
	{ 0x229fb2ef, "cdev_add" },
	{ 0xc3288ba8, "ib_unregister_mad_agent" },
	{ 0xd7ef5825, "ib_register_client" },
	{ 0xc0c3f04d, "ib_create_ah" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x4292364c, "schedule" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xd573f787, "ib_modify_port" },
	{ 0x3ae831b6, "kref_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0x8a1203a9, "kref_get" },
	{ 0x93538172, "class_destroy" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x6f077fcf, "ib_get_mad_data_offset" },
	{ 0x148e6ca, "ib_unregister_client" },
	{ 0xf1f0ab07, "__init_rwsem" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ib_mad,ib_core";


MODULE_INFO(srcversion, "B0E124543F556D6E4DB4FB2");
