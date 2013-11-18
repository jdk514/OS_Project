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
	{ 0x65e2aa95, "agp_backend_release" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x4827a016, "del_timer" },
	{ 0xddb12f67, "vmalloc_earlyreserve" },
	{ 0x7d4e29ae, "page_address" },
	{ 0xe365f787, "init_mm" },
	{ 0xd10fc04d, "class_device_create" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0xc4d65887, "boot_cpu_data" },
	{ 0x56179c5f, "mtrr_add" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x9aafc56, "agp_copy_info" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0x6fedff41, "pci_dev_get" },
	{ 0x5253a3a4, "class_device_unregister" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x2fd1d81c, "vfree" },
	{ 0xa2487e0, "unblock_all_signals" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x65239e29, "agp_unbind_memory" },
	{ 0x70f77954, "agp_allocate_memory" },
	{ 0x5a5032f3, "pci_get_subsys" },
	{ 0xc12e8a55, "proc_mkdir" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x859204af, "sscanf" },
	{ 0x95cc2139, "__PAGE_KERNEL" },
	{ 0x5568be43, "lock_kernel" },
	{ 0x1f825f04, "vmap" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x54ee23d3, "fasync_helper" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x6180e3ac, "class_device_create_file" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xc83decb4, "class_create" },
	{ 0x789ddd86, "class_remove_file" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x1322f1e6, "agp_free_memory" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x369b4451, "class_create_file" },
	{ 0xde0c05c3, "up_write" },
	{ 0xbca92367, "down_write" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x20645ff6, "pci_find_capability" },
	{ 0xbf0c0298, "do_mmap_pgoff" },
	{ 0x5dfe8f1a, "unlock_kernel" },
	{ 0x7dceceac, "capable" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x107d6ba3, "__get_free_pages" },
	{ 0x2eb16cd2, "class_device_remove_file" },
	{ 0x26e96637, "request_irq" },
	{ 0x4292364c, "schedule" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0x1e8e5fac, "register_chrdev" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x4b34fbf5, "block_all_signals" },
	{ 0x8fc05b26, "agp_backend_acquire" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x9941ccb8, "free_pages" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0xe7ead430, "vunmap" },
	{ 0x9a3411f9, "remap_pfn_range" },
	{ 0x2e60bace, "memcpy" },
	{ 0x105c22b9, "send_sig_info" },
	{ 0xedc03953, "iounmap" },
	{ 0x272d394e, "mtrr_del" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0x6e932174, "agp_find_bridge" },
	{ 0x1b2be8eb, "agp_enable" },
	{ 0x93538172, "class_destroy" },
	{ 0xdd334e07, "pci_dev_put" },
	{ 0x25da070, "snprintf" },
	{ 0x96f21b16, "vmalloc_to_page" },
	{ 0x19c9597c, "agp_bind_memory" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "110282867AD677D93B96F85");
