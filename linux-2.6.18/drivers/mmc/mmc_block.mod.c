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
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xfcf3ea47, "end_that_request_last" },
	{ 0x9973d1c9, "elv_dequeue_request" },
	{ 0xbbc30a60, "add_disk_randomness" },
	{ 0x9465c3fa, "end_that_request_chunk" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0xf6b7fed1, "mmc_wait_for_req" },
	{ 0xf43a3f1b, "blk_rq_map_sg" },
	{ 0xf8f8898f, "mmc_set_data_timeout" },
	{ 0xe10dc728, "add_disk" },
	{ 0xdf704809, "blk_queue_hardsect_size" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xcdda46de, "mmc_init_queue" },
	{ 0xa4935a88, "alloc_disk" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x176759bf, "mmc_queue_suspend" },
	{ 0x700d5f9, "del_gendisk" },
	{ 0x4b212125, "mmc_register_driver" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x3851a0b9, "check_disk_change" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x9b0f3aad, "mmc_cleanup_queue" },
	{ 0x5fe7f92a, "put_disk" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x9ffd2585, "mmc_queue_resume" },
	{ 0x258ddf49, "mmc_release_host" },
	{ 0xc4ab7909, "mmc_wait_for_cmd" },
	{ 0x4112bc9a, "__mmc_claim_host" },
	{ 0x1b7d4074, "printk" },
	{ 0xeac1c4af, "unregister_blkdev" },
	{ 0xab22ec63, "mmc_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=mmc_core";


MODULE_INFO(srcversion, "3FFE65C85EF4A67F3A9560A");
