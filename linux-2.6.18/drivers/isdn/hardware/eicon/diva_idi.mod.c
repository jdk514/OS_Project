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
	{ 0xd6ee688f, "vmalloc" },
	{ 0x4827a016, "del_timer" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x96befe4d, "no_llseek" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x1b7d4074, "printk" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x4292364c, "schedule" },
	{ 0x1e8e5fac, "register_chrdev" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0x2974ead1, "DIVA_DIDD_Read" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x58f19b36, "proc_net_eicon" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=divadidd";


MODULE_INFO(srcversion, "2179D827BC7E4FF970B0032");
