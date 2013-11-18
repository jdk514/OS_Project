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
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x61bed476, "up_read" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x4827a016, "del_timer" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xf90f4b10, "drm_mmap" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x7d11c268, "jiffies" },
	{ 0x1985af2a, "down_read" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xc7204aeb, "drm_vbl_send_signals" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0x1b7d4074, "printk" },
	{ 0x418764b9, "drm_ioremap" },
	{ 0xb600270, "drm_ioremapfree" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xf8a446bc, "drm_init" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x64df683, "drm_core_get_map_ofs" },
	{ 0x20645642, "drm_debug" },
	{ 0x60d49245, "drm_exit" },
	{ 0x7dceceac, "capable" },
	{ 0xf0394f75, "drm_ioctl" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x107d6ba3, "__get_free_pages" },
	{ 0xddbcef4b, "get_user_pages" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0xda022ebd, "drm_irq_uninstall" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x9941ccb8, "free_pages" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x946be58e, "put_page" },
	{ 0x25da070, "snprintf" },
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


MODULE_INFO(srcversion, "5B45F59A7FB29A70737A06B");
