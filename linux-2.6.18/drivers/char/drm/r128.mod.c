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
	{ 0x97ab45ea, "drm_release" },
	{ 0xc614027f, "drm_core_reclaim_buffers" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x6944725e, "drm_ati_pcigart_cleanup" },
	{ 0x3074f033, "drm_order" },
	{ 0xf90f4b10, "drm_mmap" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2a35f501, "drm_ati_pcigart_init" },
	{ 0x7d11c268, "jiffies" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xc7204aeb, "drm_vbl_send_signals" },
	{ 0x1b7d4074, "printk" },
	{ 0x418764b9, "drm_ioremap" },
	{ 0xb600270, "drm_ioremapfree" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xf8a446bc, "drm_init" },
	{ 0x64df683, "drm_core_get_map_ofs" },
	{ 0x20645642, "drm_debug" },
	{ 0x60d49245, "drm_exit" },
	{ 0xf0394f75, "drm_ioctl" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0xda022ebd, "drm_irq_uninstall" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0xadc9516b, "drm_core_get_reg_ofs" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x91b068bb, "drm_poll" },
	{ 0x704337f8, "drm_fasync" },
	{ 0x6e02296f, "drm_open" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=drm";


MODULE_INFO(srcversion, "61D498B0E06E7F89CD51AA0");
