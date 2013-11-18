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
	{ 0xcc4c11a9, "_write_unlock_bh" },
	{ 0x332eb002, "__next_cpu" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x21968b7f, "_read_lock_bh" },
	{ 0x93ba42f1, "_write_lock_bh" },
	{ 0x4ff943ae, "mutex_lock_interruptible" },
	{ 0x1b7d4074, "printk" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xf4a91d48, "__first_cpu" },
	{ 0x5dfd3f0d, "cpu_possible_map" },
	{ 0x3e9dc8f6, "nf_unregister_sockopt" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x8bf46c54, "_read_unlock_bh" },
	{ 0x98adfde2, "request_module" },
	{ 0x363c388d, "highest_possible_processor_id" },
	{ 0xca6132eb, "nf_register_sockopt" },
	{ 0xf2a644fb, "copy_from_user" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F5B097B4D2B30CE863336E9");
