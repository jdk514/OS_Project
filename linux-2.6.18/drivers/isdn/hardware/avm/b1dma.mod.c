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
	{ 0x8f699913, "capilib_release" },
	{ 0x65af09a1, "b1_load_t4file" },
	{ 0x2baa6586, "capilib_new_ncci" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xaa165d27, "capilib_release_appl" },
	{ 0x2b8eab1f, "capilib_free_ncci" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd42dd828, "capi_ctr_handle_message" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xedd50a58, "b1_parse_version" },
	{ 0x7d11c268, "jiffies" },
	{ 0xdbdc8544, "capi_ctr_resume_output" },
	{ 0x1b7d4074, "printk" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x65e4602a, "capi_ctr_ready" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x71e8d5ba, "capilib_data_b3_req" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x3d85a728, "capi_ctr_suspend_output" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0x2ac6138c, "capi_ctr_reseted" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x13c12a56, "skb_queue_tail" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x204006d3, "b1_load_config" },
	{ 0x3a233a33, "skb_dequeue" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0x62e32d43, "capilib_data_b3_conf" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=kernelcapi,b1";


MODULE_INFO(srcversion, "64A09AE859638DA4A9B91D3");
