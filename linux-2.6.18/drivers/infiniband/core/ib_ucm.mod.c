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
	{ 0xdc3debb9, "cdev_del" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x9f40dc61, "ib_send_cm_rej" },
	{ 0xc171912, "cdev_init" },
	{ 0x85898a89, "class_register" },
	{ 0x2ebe243d, "ib_cm_establish" },
	{ 0xd8e484f0, "register_chrdev_region" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x5666cf2b, "ib_send_cm_req" },
	{ 0xc1783464, "ib_send_cm_dreq" },
	{ 0x3ffd6d3, "ib_send_cm_rtu" },
	{ 0x7d4a1f83, "kobject_set_name" },
	{ 0xe75fb0d4, "ib_copy_path_rec_to_user" },
	{ 0xff855922, "ib_copy_path_rec_from_user" },
	{ 0x5253a3a4, "class_device_unregister" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x888621, "ib_send_cm_mra" },
	{ 0xa34eb072, "wait_for_completion" },
	{ 0x50535649, "ib_send_cm_drep" },
	{ 0x85478027, "ib_cm_init_qp_attr" },
	{ 0x9dbf1158, "idr_destroy" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x93618160, "class_unregister" },
	{ 0x93637a5a, "ib_get_client_data" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xed93c0d6, "ib_copy_qp_attr_to_user" },
	{ 0xb43434dd, "ib_send_cm_rep" },
	{ 0x6180e3ac, "class_device_create_file" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x369b4451, "class_create_file" },
	{ 0x515ff74e, "ib_set_client_data" },
	{ 0xc06d03a0, "ib_create_cm_id" },
	{ 0xa7409aaf, "idr_remove" },
	{ 0x229fb2ef, "cdev_add" },
	{ 0x52a7207f, "idr_pre_get" },
	{ 0xd7ef5825, "ib_register_client" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x4292364c, "schedule" },
	{ 0x3c2b8737, "class_device_register" },
	{ 0x7eb46464, "ib_destroy_cm_id" },
	{ 0xade307c3, "ib_send_cm_apr" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x933f6490, "ib_cm_listen" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x7e0221e4, "complete" },
	{ 0x25da070, "snprintf" },
	{ 0x73764cbb, "ib_send_cm_lap" },
	{ 0xf6a98ae7, "idr_find" },
	{ 0x2d29e50a, "idr_get_new" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0xfe9e6117, "ib_send_cm_sidr_rep" },
	{ 0x148e6ca, "ib_unregister_client" },
	{ 0x8da71903, "ib_send_cm_sidr_req" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ib_cm,ib_uverbs,ib_core";


MODULE_INFO(srcversion, "A3396C8E9C79D166F9B4D2F");
