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
	{ 0x85898a89, "class_register" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x96befe4d, "no_llseek" },
	{ 0x5253a3a4, "class_device_unregister" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x93618160, "class_unregister" },
	{ 0x1075bf0, "panic" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x6180e3ac, "class_device_create_file" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x5ebefe4b, "v4l_printk_ioctl" },
	{ 0x33b3b664, "v4l2_video_std_construct" },
	{ 0x1e8e5fac, "register_chrdev" },
	{ 0x3c2b8737, "class_device_register" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xab265243, "v4l_compat_translate_ioctl" },
	{ 0x98adfde2, "request_module" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0xf2a644fb, "copy_from_user" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=v4l2-common,v4l1-compat";


MODULE_INFO(srcversion, "D535614F255E3346828F649");
