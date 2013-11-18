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
	{ 0x96befe4d, "no_llseek" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x1ef3eb01, "misc_register" },
	{ 0x1cc6719a, "register_reboot_notifier" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x1e62b30a, "usb_alloc_urb" },
	{ 0x8397630e, "usb_buffer_alloc" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0xd509b8b4, "usb_buffer_free" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x3980aac1, "unregister_reboot_notifier" },
	{ 0x25dd4bad, "misc_deregister" },
	{ 0x96b27088, "__down_failed" },
	{ 0xda4008e6, "cond_resched" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xd16ac615, "__get_user_1" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0x1b7d4074, "printk" },
	{ 0xaf5f9c5f, "nonseekable_open" },
	{ 0x5eea5f42, "usb_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0C98p1140d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "FB1877A8FB895CE419DA1F1");
