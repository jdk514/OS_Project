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
	{ 0x254f230c, "nand_calculate_ecc" },
	{ 0xbe38cd62, "mtd_erase_callback" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x99ecf7c9, "led_trigger_event" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x87406d9d, "nand_correct_data" },
	{ 0x7d11c268, "jiffies" },
	{ 0xda4008e6, "cond_resched" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x6fcb87a1, "touch_softlockup_watchdog" },
	{ 0x1b7d4074, "printk" },
	{ 0x4292364c, "schedule" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xaa589ac5, "led_trigger_unregister_simple" },
	{ 0xb9203fc0, "del_mtd_device" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x1285109e, "led_trigger_register_simple" },
	{ 0x836bdb72, "nand_flash_ids" },
	{ 0xa336feb7, "nand_manuf_ids" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x5df825c4, "del_mtd_partitions" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=nand_ecc,mtdpart,mtdcore,nand_ids";


MODULE_INFO(srcversion, "C7FB24A0129A05014AF47FF");
