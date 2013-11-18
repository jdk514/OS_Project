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
	{ 0x9f823278, "register_capi_driver" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x11d3a9e4, "b1ctl_read_proc" },
	{ 0x1447f7a9, "b1_reset_ctr" },
	{ 0xe29e576e, "b1_load_firmware" },
	{ 0x5eab4877, "b1_send_message" },
	{ 0x38f76413, "b1_release_appl" },
	{ 0x6d7d8e8d, "b1_register_appl" },
	{ 0x7c376ed0, "b1_interrupt" },
	{ 0xdfd28376, "b1_detect" },
	{ 0x3da60680, "attach_capi_ctr" },
	{ 0x93a40274, "b1dmactl_read_proc" },
	{ 0x3a9b04a, "b1dma_reset_ctr" },
	{ 0x16e18872, "b1dma_load_firmware" },
	{ 0x37214cd0, "b1dma_send_message" },
	{ 0x5558fda0, "b1dma_release_appl" },
	{ 0x581648cf, "b1dma_register_appl" },
	{ 0x26e96637, "request_irq" },
	{ 0xb7858191, "b1dma_interrupt" },
	{ 0xc7524ec8, "b1_getrevision" },
	{ 0xa293d07, "b1pciv4_detect" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x4c3af445, "__request_region" },
	{ 0x58df3c16, "avmcard_dma_alloc" },
	{ 0x3e90144d, "b1_alloc_card" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0x1b7d4074, "printk" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xb1582a8b, "b1_free_card" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x211ca348, "avmcard_dma_free" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x41b3d0a1, "detach_capi_ctr" },
	{ 0x8a91c3be, "b1dma_reset" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x4403fcf, "unregister_capi_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=kernelcapi,b1,b1dma";

MODULE_ALIAS("pci:v00001244d00000700sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0B05D367E98E2D177F90DF3");
