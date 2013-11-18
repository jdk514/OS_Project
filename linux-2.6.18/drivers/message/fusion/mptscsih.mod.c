#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
};

static const struct modversion_info ____versions[]
__attribute_used__
__attribute__((section("__versions"))) = {
	{ 0xb499ef18, "struct_module" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0x4827a016, "del_timer" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x7175dba, "mpt_HardResetHandler" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x12d90ef9, "mpt_get_msg_frame" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xa635ffaf, "scsi_adjust_queue_depth" },
	{ 0x26601e7d, "scsi_print_command" },
	{ 0x7d11c268, "jiffies" },
	{ 0x1b7d4074, "printk" },
	{ 0x7987287b, "mpt_send_handshake_request" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xf4bef259, "scsi_host_put" },
	{ 0x375d8126, "mpt_add_sge" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x5528b7ca, "mpt_put_msg_frame" },
	{ 0x632aa0e8, "mpt_resume" },
	{ 0x4292364c, "schedule" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xe14d4a92, "mpt_GetIocState" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xd9298a13, "mpt_print_ioc_summary" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x89535602, "scsi_remove_host" },
	{ 0x1c733de3, "mpt_free_msg_frame" },
	{ 0x782b0008, "vsprintf" },
	{ 0x83ead4bf, "mpt_suspend" },
	{ 0x84a27945, "mpt_detach" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=mptbase,scsi_mod";


MODULE_INFO(srcversion, "56429EC0CFEF959BE8CCCE5");
