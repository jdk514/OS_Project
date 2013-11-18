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
	{ 0x1d676acf, "boot_tvec_bases" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0xaa136450, "param_get_charp" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x2983cbc8, "pi_do_claimed" },
	{ 0x698c6ab3, "end_request" },
	{ 0x2c715df5, "elv_next_request" },
	{ 0xd3dad18a, "schedule_delayed_work" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x7d11c268, "jiffies" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xe10dc728, "add_disk" },
	{ 0xa92f10d2, "register_cdrom" },
	{ 0x476f0d58, "blk_init_queue" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x920cf8bf, "pi_init" },
	{ 0x25da070, "snprintf" },
	{ 0xa4935a88, "alloc_disk" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0x2e60bace, "memcpy" },
	{ 0xb6dac75f, "pi_read_block" },
	{ 0x2f761826, "pi_write_block" },
	{ 0x84fd2f81, "pi_disconnect" },
	{ 0xc3c6cd4e, "pi_write_regr" },
	{ 0x67643491, "pi_connect" },
	{ 0x1b7d4074, "printk" },
	{ 0xc854290e, "pi_read_regr" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbe3b478b, "cdrom_open" },
	{ 0x8098329b, "cdrom_release" },
	{ 0x331d6f0d, "cdrom_ioctl" },
	{ 0xb6dd947d, "cdrom_media_changed" },
	{ 0xeac1c4af, "unregister_blkdev" },
	{ 0x81db09d7, "blk_cleanup_queue" },
	{ 0x5fe7f92a, "put_disk" },
	{ 0x4cb5cca8, "unregister_cdrom" },
	{ 0xef7aa777, "pi_release" },
	{ 0x700d5f9, "del_gendisk" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=paride,cdrom";


MODULE_INFO(srcversion, "82ED36F96A6C61557528776");
