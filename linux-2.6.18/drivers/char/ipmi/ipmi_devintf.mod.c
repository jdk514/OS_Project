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
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x355f3678, "ipmi_create_user" },
	{ 0x14126ae8, "kill_fasync" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x2dfa1470, "ipmi_set_my_LUN" },
	{ 0x754486c4, "ipmi_set_my_address" },
	{ 0x7f532287, "ipmi_get_my_LUN" },
	{ 0x2505204a, "ipmi_get_my_address" },
	{ 0xaace15bf, "ipmi_set_gets_events" },
	{ 0xf89a1243, "ipmi_unregister_for_cmd" },
	{ 0x5c250966, "ipmi_register_for_cmd" },
	{ 0xe0e482de, "ipmi_free_recv_msg" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x804f922a, "ipmi_addr_length" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1fcebdd8, "ipmi_smi_watcher_register" },
	{ 0x1e8e5fac, "register_chrdev" },
	{ 0xc83decb4, "class_create" },
	{ 0xe470e75a, "ipmi_request_settime" },
	{ 0xe4f4665b, "ipmi_validate_addr" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0xb27719c5, "ipmi_destroy_user" },
	{ 0x54ee23d3, "fasync_helper" },
	{ 0xd10fc04d, "class_device_create" },
	{ 0x1b7d4074, "printk" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0xde08287b, "ipmi_smi_watcher_unregister" },
	{ 0x93538172, "class_destroy" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x27514859, "class_device_destroy" },
	{ 0xd9f7b1a3, "mutex_lock" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ipmi_msghandler";


MODULE_INFO(srcversion, "04AFE7E40AF7DEB69026631");
