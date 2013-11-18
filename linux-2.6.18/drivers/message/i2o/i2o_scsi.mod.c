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
	{ 0x2e60bace, "memcpy" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x37a9798f, "mempool_free" },
	{ 0xcfaf79ba, "mempool_alloc" },
	{ 0x7f12bc25, "scsi_add_host" },
	{ 0xdec27e6e, "scsi_host_alloc" },
	{ 0x1e40d4fc, "i2o_driver_register" },
	{ 0x2ef69a16, "sysfs_create_link" },
	{ 0x51135e3a, "__scsi_add_device" },
	{ 0xca72877, "i2o_iop_find_device" },
	{ 0x27f6bc71, "i2o_parm_field_get" },
	{ 0x6ce1aae, "scsi_device_put" },
	{ 0x74166cad, "scsi_remove_device" },
	{ 0x4149cb93, "sysfs_remove_link" },
	{ 0x56930927, "__scsi_iterate_devices" },
	{ 0xfce62e60, "i2o_msg_post_wait_mem" },
	{ 0xf584b61f, "i2o_msg_get_wait" },
	{ 0x1b7d4074, "printk" },
	{ 0xf4bef259, "scsi_host_put" },
	{ 0x89535602, "scsi_remove_host" },
	{ 0xa3baa26e, "i2o_driver_unregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=scsi_mod,i2o_core";


MODULE_INFO(srcversion, "9BF34161DF042435A00EFAA");
