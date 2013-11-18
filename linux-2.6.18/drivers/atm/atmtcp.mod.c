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
	{ 0x807a89d4, "__net_timestamp" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x1b7d4074, "printk" },
	{ 0xaeb0e66f, "atm_alloc_charge" },
	{ 0x3d7c39ea, "_read_lock" },
	{ 0x2cc2d52d, "vcc_hash" },
	{ 0x1e0dfcf0, "vcc_sklist_lock" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0xd8252f4f, "register_atm_ioctl" },
	{ 0xa8bed6df, "class_device_put" },
	{ 0xdb5ea3f9, "module_refcount" },
	{ 0x279e836d, "atm_init_aal5" },
	{ 0xf2922f9, "vcc_insert_socket" },
	{ 0xfa98c20b, "atm_dev_lookup" },
	{ 0x7dceceac, "capable" },
	{ 0x8bb7c126, "atm_dev_register" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x4292364c, "schedule" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0x2e60bace, "memcpy" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x548de514, "__alloc_skb" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x13e0584f, "atm_dev_deregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x92898495, "deregister_atm_ioctl" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=atm";


MODULE_INFO(srcversion, "6E2084E96BF273B51A33D40");
