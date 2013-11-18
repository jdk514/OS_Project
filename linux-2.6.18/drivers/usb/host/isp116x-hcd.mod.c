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
	{ 0x3dccf731, "single_release" },
	{ 0xe6eee95b, "seq_read" },
	{ 0xf9b907c1, "seq_lseek" },
	{ 0xd5b19fa3, "debugfs_create_file" },
	{ 0xfa51617a, "usb_add_hcd" },
	{ 0xfc310b9c, "usb_create_hcd" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x4c3af445, "__request_region" },
	{ 0xc137a082, "platform_get_irq" },
	{ 0x7e64181d, "usb_calc_bus_time" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x8520e5a2, "usb_put_hcd" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0xdc3eaf70, "iomem_resource" },
	{ 0x91cc90f9, "platform_get_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0xc279672c, "usb_remove_hcd" },
	{ 0xaab4112d, "debugfs_remove" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xf855182, "usb_hcd_resume_root_hub" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x37a0cba, "kfree" },
	{ 0x76e04e0, "platform_driver_register" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x669e2d2f, "seq_printf" },
	{ 0xdb01fdc3, "single_open" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x4b1cfaef, "usb_hcd_giveback_urb" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7d11c268, "jiffies" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x1b7d4074, "printk" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x11f83bd2, "platform_driver_unregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "2DC84B6F5A742FB0B3E9083");
