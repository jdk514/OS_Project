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
	{ 0x3da60680, "attach_capi_ctr" },
	{ 0x93a40274, "b1dmactl_read_proc" },
	{ 0x3a9b04a, "b1dma_reset_ctr" },
	{ 0x16e18872, "b1dma_load_firmware" },
	{ 0x37214cd0, "b1dma_send_message" },
	{ 0x5558fda0, "b1dma_release_appl" },
	{ 0x581648cf, "b1dma_register_appl" },
	{ 0x26e96637, "request_irq" },
	{ 0xb7858191, "b1dma_interrupt" },
	{ 0xb6cb7413, "t1pci_detect" },
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
	{ 0x8a91c3be, "b1dma_reset" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x4403fcf, "unregister_capi_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=kernelcapi,b1dma,b1";

MODULE_ALIAS("pci:v00001244d00001200sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C844B71D34D729083DB8FA8");
