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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x9d489c00, "bus_register" },
	{ 0x4d101f5f, "driver_register" },
	{ 0xaa6d7a1e, "device_release_driver" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xc767785d, "netif_carrier_on" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0xa99d5102, "netif_carrier_off" },
	{ 0x7d11c268, "jiffies" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x598092c, "device_bind_driver" },
	{ 0xcdfb7700, "device_register" },
	{ 0x1b7d4074, "printk" },
	{ 0x3e158c0e, "driver_unregister" },
	{ 0x7f9e86c1, "put_driver" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x6fc38fcd, "bus_find_device" },
	{ 0xde0c05c3, "up_write" },
	{ 0xbca92367, "down_write" },
	{ 0x6e3baace, "bus_unregister" },
	{ 0x7dceceac, "capable" },
	{ 0x26e96637, "request_irq" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x930bcc28, "get_driver" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x761ca99d, "device_unregister" },
	{ 0x25da070, "snprintf" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "39E480E1DDEC2E371109EBE");
