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
	{ 0xdb5ea3f9, "module_refcount" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbe38cd62, "mtd_erase_callback" },
	{ 0x6610c0bc, "cfi_read_pri" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7d11c268, "jiffies" },
	{ 0xda4008e6, "cond_resched" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x1b7d4074, "printk" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x4292364c, "schedule" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0x9e7d6bd0, "__udelay" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=mtdpart,cfi_util";


MODULE_INFO(srcversion, "9B416E93E2FF83CC207F069");
