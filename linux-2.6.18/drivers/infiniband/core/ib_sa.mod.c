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
	{ 0xcff53400, "kref_put" },
	{ 0xbd8ea9c0, "ib_find_cached_gid" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x7fdf1a5, "ib_register_mad_agent" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xd6f8244e, "ib_free_recv_mad" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x520b2638, "ib_pack" },
	{ 0x1ff564ab, "ib_destroy_ah" },
	{ 0xcdf26d1f, "ib_free_send_mad" },
	{ 0x9dbf1158, "idr_destroy" },
	{ 0x1b7d4074, "printk" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0x93637a5a, "ib_get_client_data" },
	{ 0xf5119cd6, "ib_query_port" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x515ff74e, "ib_set_client_data" },
	{ 0x28330136, "ib_create_send_mad" },
	{ 0xbaea96c, "ib_post_send_mad" },
	{ 0xa7409aaf, "idr_remove" },
	{ 0xc3288ba8, "ib_unregister_mad_agent" },
	{ 0x52a7207f, "idr_pre_get" },
	{ 0xd7ef5825, "ib_register_client" },
	{ 0xc0c3f04d, "ib_create_ah" },
	{ 0xf027191, "ib_unregister_event_handler" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x22ac2c91, "ib_register_event_handler" },
	{ 0xade47054, "ib_cancel_mad" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x3ae831b6, "kref_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x8a1203a9, "kref_get" },
	{ 0xb1a312e1, "ib_unpack" },
	{ 0xf6a98ae7, "idr_find" },
	{ 0x2d29e50a, "idr_get_new" },
	{ 0x148e6ca, "ib_unregister_client" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ib_core,ib_mad";


MODULE_INFO(srcversion, "03A5344F56D1C2EE92B5A96");
