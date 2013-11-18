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
	{ 0xbb7ca41d, "usb_bulk_msg" },
	{ 0x8cdbcccf, "usb_register_dev" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xfa3601a2, "usb_get_dev" },
	{ 0x3ae831b6, "kref_init" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x8a1203a9, "kref_get" },
	{ 0x4987fb1b, "usb_find_interface" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0xf692f74f, "usb_put_dev" },
	{ 0xd509b8b4, "usb_buffer_free" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x8397630e, "usb_buffer_alloc" },
	{ 0x1e62b30a, "usb_alloc_urb" },
	{ 0x1b7d4074, "printk" },
	{ 0x5dfe8f1a, "unlock_kernel" },
	{ 0x3226577c, "usb_deregister_dev" },
	{ 0x5568be43, "lock_kernel" },
	{ 0xcff53400, "kref_put" },
	{ 0x5eea5f42, "usb_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v10D2p*d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "3D4C9B26B1DEC9C279855AF");
