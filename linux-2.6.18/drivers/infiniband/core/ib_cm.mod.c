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
	{ 0xbd8ea9c0, "ib_find_cached_gid" },
	{ 0x1704dc89, "ib_create_ah_from_wc" },
	{ 0x9b004c9f, "ib_modify_mad" },
	{ 0x7fdf1a5, "ib_register_mad_agent" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xd6f8244e, "ib_free_recv_mad" },
	{ 0x3093180f, "_write_lock_irqsave" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xc72635a1, "ib_init_ah_from_path" },
	{ 0x8c0be9b4, "queue_work" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1ff564ab, "ib_destroy_ah" },
	{ 0xcdf26d1f, "ib_free_send_mad" },
	{ 0xf2766228, "__create_workqueue" },
	{ 0xa34eb072, "wait_for_completion" },
	{ 0x9dbf1158, "idr_destroy" },
	{ 0x5152e605, "memcmp" },
	{ 0x93637a5a, "ib_get_client_data" },
	{ 0xc0580937, "rb_erase" },
	{ 0x31153eb8, "destroy_workqueue" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x91d5383, "ib_init_ah_from_wc" },
	{ 0x553d0022, "_read_unlock_irqrestore" },
	{ 0x515ff74e, "ib_set_client_data" },
	{ 0x496a442, "_read_lock_irqsave" },
	{ 0x28330136, "ib_create_send_mad" },
	{ 0xbaea96c, "ib_post_send_mad" },
	{ 0xa7409aaf, "idr_remove" },
	{ 0xc3288ba8, "ib_unregister_mad_agent" },
	{ 0x52a7207f, "idr_pre_get" },
	{ 0xd7ef5825, "ib_register_client" },
	{ 0xc0c3f04d, "ib_create_ah" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x5d638531, "ib_find_cached_pkey" },
	{ 0xade47054, "ib_cancel_mad" },
	{ 0xa6dcc773, "rb_insert_color" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x1421a04c, "idr_get_new_above" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xd573f787, "ib_modify_port" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x7e0221e4, "complete" },
	{ 0xb6ff27a7, "idr_init" },
	{ 0xf6a98ae7, "idr_find" },
	{ 0x148e6ca, "ib_unregister_client" },
	{ 0x622ab174, "queue_delayed_work" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ib_core,ib_mad,ib_sa";


MODULE_INFO(srcversion, "FD2623037EB0282B8B7C6A9");
