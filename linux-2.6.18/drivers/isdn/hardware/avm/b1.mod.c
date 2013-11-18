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
	{ 0x8f699913, "capilib_release" },
	{ 0x2baa6586, "capilib_new_ncci" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xaa165d27, "capilib_release_appl" },
	{ 0x2b8eab1f, "capilib_free_ncci" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd42dd828, "capi_ctr_handle_message" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xf21a8115, "skb_queue_purge" },
	{ 0xdbdc8544, "capi_ctr_resume_output" },
	{ 0x1b7d4074, "printk" },
	{ 0x65e4602a, "capi_ctr_ready" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x71e8d5ba, "capilib_data_b3_req" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x3d85a728, "capi_ctr_suspend_output" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x2ac6138c, "capi_ctr_reseted" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0x62e32d43, "capilib_data_b3_conf" },
	{ 0xf2a644fb, "copy_from_user" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=kernelcapi";


MODULE_INFO(srcversion, "77E629F0DF6555B4FF4A378");
