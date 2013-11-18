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
	{ 0xa3baa26e, "i2o_driver_unregister" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x96befe4d, "no_llseek" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0x1e40d4fc, "i2o_driver_register" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x1ef3eb01, "misc_register" },
	{ 0x1af40e18, "__copy_from_user_ll" },
	{ 0xca72877, "i2o_iop_find_device" },
	{ 0x1b7d4074, "printk" },
	{ 0x5568be43, "lock_kernel" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x54ee23d3, "fasync_helper" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x773b1c14, "i2o_parm_issue" },
	{ 0x5dfe8f1a, "unlock_kernel" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xfce62e60, "i2o_msg_post_wait_mem" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xb4c00dcf, "i2o_controllers" },
	{ 0x37a9798f, "mempool_free" },
	{ 0x248b494a, "i2o_find_iop" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x25dd4bad, "misc_deregister" },
	{ 0xf584b61f, "i2o_msg_get_wait" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=i2o_core";


MODULE_INFO(srcversion, "72496F35822FB2B40AE489A");
