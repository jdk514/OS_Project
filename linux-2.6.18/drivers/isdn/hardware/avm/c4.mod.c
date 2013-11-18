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
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0xaa165d27, "capilib_release_appl" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x9f823278, "register_capi_driver" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x65e4602a, "capi_ctr_ready" },
	{ 0xedd50a58, "b1_parse_version" },
	{ 0x3d85a728, "capi_ctr_suspend_output" },
	{ 0xdbdc8544, "capi_ctr_resume_output" },
	{ 0x2b8eab1f, "capilib_free_ncci" },
	{ 0x2baa6586, "capilib_new_ncci" },
	{ 0xd42dd828, "capi_ctr_handle_message" },
	{ 0x62e32d43, "capilib_data_b3_conf" },
	{ 0x8f699913, "capilib_release" },
	{ 0x71e8d5ba, "capilib_data_b3_req" },
	{ 0x13c12a56, "skb_queue_tail" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x548de514, "__alloc_skb" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0x3a233a33, "skb_dequeue" },
	{ 0x2ac6138c, "capi_ctr_reseted" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x26e96637, "request_irq" },
	{ 0x3da60680, "attach_capi_ctr" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x4c3af445, "__request_region" },
	{ 0x58df3c16, "avmcard_dma_alloc" },
	{ 0x3e90144d, "b1_alloc_card" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0x1b7d4074, "printk" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xb1582a8b, "b1_free_card" },
	{ 0x211ca348, "avmcard_dma_free" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x41b3d0a1, "detach_capi_ctr" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x4403fcf, "unregister_capi_driver" },
	{ 0x7d11c268, "jiffies" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=kernelcapi,b1";

MODULE_ALIAS("pci:v00001011d00001065sv00001244sd00000800bc*sc*i*");
MODULE_ALIAS("pci:v00001011d00001065sv00001244sd00001100bc*sc*i*");

MODULE_INFO(srcversion, "FDAB88FFA23A7AB0D0C015C");
