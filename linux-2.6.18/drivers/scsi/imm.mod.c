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
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xd3dad18a, "schedule_delayed_work" },
	{ 0x7d4e29ae, "page_address" },
	{ 0x7d11c268, "jiffies" },
	{ 0xe676d461, "parport_register_driver" },
	{ 0xd3597019, "scsi_scan_host" },
	{ 0x7f12bc25, "scsi_add_host" },
	{ 0xdec27e6e, "scsi_host_alloc" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xa7d6af18, "parport_register_device" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x20ca67eb, "parport_release" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xef276433, "parport_claim" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x1b7d4074, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x96b12278, "blk_queue_bounce_limit" },
	{ 0x1163f0a7, "blk_max_low_pfn" },
	{ 0x37a0cba, "kfree" },
	{ 0xea1ea44c, "parport_unregister_device" },
	{ 0xf4bef259, "scsi_host_put" },
	{ 0x89535602, "scsi_remove_host" },
	{ 0x6da9db6f, "parport_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=parport,scsi_mod";


MODULE_INFO(srcversion, "BC68D51A83703E556BDC6E2");
