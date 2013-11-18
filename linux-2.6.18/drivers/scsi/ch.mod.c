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
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0xa5bb0128, "scsi_ioctl" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0xd10fc04d, "class_device_create" },
	{ 0xf24305c3, "scsi_device_lookup" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x37ac91a4, "scsi_device_get" },
	{ 0x6ce1aae, "scsi_device_put" },
	{ 0x7ae7cd7e, "scsi_register_driver" },
	{ 0x1e8e5fac, "register_chrdev" },
	{ 0xc83decb4, "class_create" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xca5dbc50, "scsi_print_sense_hdr" },
	{ 0x577785bd, "scsi_execute_req" },
	{ 0xfef96e23, "__scsi_print_command" },
	{ 0x1b7d4074, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x27514859, "class_device_destroy" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x93538172, "class_destroy" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0x3e158c0e, "driver_unregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";


MODULE_INFO(srcversion, "95029DB22AB8AE3C52E042D");
