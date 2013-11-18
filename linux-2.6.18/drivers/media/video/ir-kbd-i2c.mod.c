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
	{ 0xa1906d09, "i2c_attach_client" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x47d7415c, "ir_input_keydown" },
	{ 0x4827a016, "del_timer" },
	{ 0xd1aaaaa5, "i2c_detach_client" },
	{ 0xaa5c63a9, "i2c_del_driver" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0x902a3cd2, "ir_codes_hauppauge_new" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x7d11c268, "jiffies" },
	{ 0x7ec8aa2e, "ir_input_nokey" },
	{ 0x1b7d4074, "printk" },
	{ 0xc1fea0c1, "ir_codes_pv951" },
	{ 0x7697b670, "ir_input_init" },
	{ 0xd9c7f010, "ir_codes_rc5_tv" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x8e30cd1b, "i2c_register_driver" },
	{ 0x4740e7a3, "ir_codes_empty" },
	{ 0x380db0a0, "input_register_device" },
	{ 0x4330f0ef, "input_free_device" },
	{ 0xa97564d6, "i2c_master_recv" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x963f24f1, "input_unregister_device" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x25da070, "snprintf" },
	{ 0xc59d2532, "input_allocate_device" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=i2c-core,ir-common";


MODULE_INFO(srcversion, "594BD85467050F2685BD7E4");
