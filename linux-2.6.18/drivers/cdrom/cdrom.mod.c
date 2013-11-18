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
	{ 0x4f71ea18, "register_sysctl_table" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x77a4c2ed, "blk_queue_bounce" },
	{ 0xb0cd0edd, "proc_dointvec" },
	{ 0x4078c44f, "blk_put_request" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xcde72ce, "blk_rq_unmap_user" },
	{ 0xd7474566, "__copy_to_user_ll" },
	{ 0xda4008e6, "cond_resched" },
	{ 0xca396630, "invalidate_bdev" },
	{ 0x3851a0b9, "check_disk_change" },
	{ 0x1b7d4074, "printk" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x8b7bc03a, "blk_rq_map_user" },
	{ 0xae10e435, "proc_dostring" },
	{ 0x7dceceac, "capable" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x4f8cddbf, "unregister_sysctl_table" },
	{ 0x2ac8a05b, "blk_execute_rq" },
	{ 0x37a0cba, "kfree" },
	{ 0x32b02a04, "scsi_cmd_ioctl" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0x7f64488b, "blk_get_request" },
	{ 0xf2a644fb, "copy_from_user" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "9AC4134BEE8BA898609A557");
