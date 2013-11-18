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
	{ 0x72216fa9, "param_get_uint" },
	{ 0x8abac70a, "param_set_uint" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x60ea5fe7, "__tasklet_hi_schedule" },
	{ 0xdbd5f6ea, "mmc_detect_change" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0xd8f153c, "platform_device_put" },
	{ 0xfe839378, "platform_device_add" },
	{ 0x1e43d962, "platform_device_alloc" },
	{ 0x76e04e0, "platform_driver_register" },
	{ 0x34e485cf, "pnp_register_driver" },
	{ 0x88c9b5d0, "mmc_add_host" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x7054a3e4, "request_dma" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0x26e96637, "request_irq" },
	{ 0x4c3af445, "__request_region" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x61eefb7e, "mmc_alloc_host" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xb3b8bf9c, "mmc_request_done" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x28d62f7, "dma_spin_lock" },
	{ 0xed5c73bf, "__tasklet_schedule" },
	{ 0x16b86be, "kunmap_atomic" },
	{ 0xa6367e45, "kmap_atomic" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1b7d4074, "printk" },
	{ 0xaf51232f, "mmc_remove_host" },
	{ 0x564bf8bc, "mmc_free_host" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0x79ad224b, "tasklet_kill" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x72b243d4, "free_dma" },
	{ 0x37a0cba, "kfree" },
	{ 0x93f41ea5, "mmc_suspend_host" },
	{ 0xa626c85e, "mmc_resume_host" },
	{ 0x11f83bd2, "platform_driver_unregister" },
	{ 0x2c077a33, "platform_device_unregister" },
	{ 0x53d27a87, "pnp_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=mmc_core";

MODULE_ALIAS("pnp:dWEC0517*");
MODULE_ALIAS("pnp:dWEC0518*");

MODULE_INFO(srcversion, "DB8EA67A0E297C6B14F37BB");
