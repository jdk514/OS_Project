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
	{ 0x5cca4df3, "i2c_transfer" },
	{ 0xe56c331e, "i2c_control" },
	{ 0x9c93fe90, "i2c_smbus_xfer" },
	{ 0x648fef1d, "i2c_check_addr" },
	{ 0xa9a2b1a0, "i2c_master_send" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xa97564d6, "i2c_master_recv" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x6180e3ac, "class_device_create_file" },
	{ 0xd10fc04d, "class_device_create" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x8e30cd1b, "i2c_register_driver" },
	{ 0xc83decb4, "class_create" },
	{ 0x1e8e5fac, "register_chrdev" },
	{ 0x1b7d4074, "printk" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xe1ed5c8d, "i2c_get_adapter" },
	{ 0x2b838cf3, "i2c_put_adapter" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x27514859, "class_device_destroy" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0x93538172, "class_destroy" },
	{ 0xaa5c63a9, "i2c_del_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=i2c-core";


MODULE_INFO(srcversion, "B07CA8997BF00A5588693B6");
