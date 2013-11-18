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
	{ 0xf4c29e1f, "cfb_fillrect" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4c643652, "cfb_copyarea" },
	{ 0xd8f153c, "platform_device_put" },
	{ 0xfe839378, "platform_device_add" },
	{ 0x1e43d962, "platform_device_alloc" },
	{ 0x76e04e0, "platform_driver_register" },
	{ 0xe7a2620e, "save_vga" },
	{ 0x686de290, "restore_vga" },
	{ 0x16e4d5c0, "cfb_imageblit" },
	{ 0xfa277127, "register_framebuffer" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x2e60bace, "memcpy" },
	{ 0xe7bf7d05, "screen_info" },
	{ 0x3fb701e1, "framebuffer_alloc" },
	{ 0x1b7d4074, "printk" },
	{ 0xf50616d3, "framebuffer_release" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0xedc03953, "iounmap" },
	{ 0x6a843e55, "unregister_framebuffer" },
	{ 0x11f83bd2, "platform_driver_unregister" },
	{ 0x2c077a33, "platform_device_unregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=cfbfillrect,cfbcopyarea,vgastate,cfbimgblt";


MODULE_INFO(srcversion, "18727948EDEA00A6EF63D3E");
