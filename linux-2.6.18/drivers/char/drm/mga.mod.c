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
	{ 0xd8750267, "drm_agp_release" },
	{ 0x65d87429, "drm_agp_acquire" },
	{ 0x97ab45ea, "drm_release" },
	{ 0xc614027f, "drm_core_reclaim_buffers" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0xf90f4b10, "drm_mmap" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x92fcbf01, "drm_addbufs_pci" },
	{ 0x7d11c268, "jiffies" },
	{ 0xee169661, "drm_agp_free" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xc7204aeb, "drm_vbl_send_signals" },
	{ 0x8898b968, "drm_get_resource_start" },
	{ 0x1b7d4074, "printk" },
	{ 0x418764b9, "drm_ioremap" },
	{ 0xb600270, "drm_ioremapfree" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x190540a8, "drm_addmap" },
	{ 0xf8a446bc, "drm_init" },
	{ 0x64df683, "drm_core_get_map_ofs" },
	{ 0x78e3620, "drm_agp_bind" },
	{ 0x20645ff6, "pci_find_capability" },
	{ 0x20645642, "drm_debug" },
	{ 0x60d49245, "drm_exit" },
	{ 0xf0394f75, "drm_ioctl" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xfefe62ec, "drm_agp_unbind" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0xda022ebd, "drm_irq_uninstall" },
	{ 0x4c643d56, "drm_agp_alloc" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x8d1a84ab, "drm_agp_enable" },
	{ 0x35b4e5e5, "drm_agp_info" },
	{ 0xadc9516b, "drm_core_get_reg_ofs" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x8d5b71a4, "drm_get_resource_len" },
	{ 0x91b068bb, "drm_poll" },
	{ 0x172b6c67, "drm_addbufs_agp" },
	{ 0x704337f8, "drm_fasync" },
	{ 0x6e02296f, "drm_open" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=drm";


MODULE_INFO(srcversion, "E2B360758DEE7204E956BEF");
