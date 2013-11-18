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
	{ 0xe8097be1, "kobject_put" },
	{ 0x6572d100, "kobject_get" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x9fa32a6d, "serial8250_register_port" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x74cc238d, "current_kernel_time" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x9271012a, "generic_delete_inode" },
	{ 0xa17ecfe, "dput" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0xd1d8adad, "atomic_notifier_chain_unregister" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xe7c21ffd, "input_event" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xd4a51edf, "get_sb_single" },
	{ 0x656a4576, "kill_litter_super" },
	{ 0x1b7d4074, "printk" },
	{ 0x9ac7d267, "d_rehash" },
	{ 0xc0b9dad, "d_alloc_root" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xafcd88eb, "simple_dir_operations" },
	{ 0x107d6ba3, "__get_free_pages" },
	{ 0xede74815, "atomic_notifier_chain_register" },
	{ 0x380db0a0, "input_register_device" },
	{ 0x26e96637, "request_irq" },
	{ 0x4292364c, "schedule" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0x4a8702be, "panic_notifier_list" },
	{ 0x4330f0ef, "input_free_device" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x118bc8c2, "register_filesystem" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0x9941ccb8, "free_pages" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0xcefcd99a, "serial8250_unregister_port" },
	{ 0xc317c43f, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x963f24f1, "input_unregister_device" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xedc03953, "iounmap" },
	{ 0xb0ee3a11, "kobject_init" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x3b056490, "simple_statfs" },
	{ 0x5e136a9f, "d_alloc_name" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x933eb75d, "unregister_filesystem" },
	{ 0x25da070, "snprintf" },
	{ 0x3105bd2e, "new_inode" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x421039ba, "simple_dir_inode_operations" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x7406bbc, "d_instantiate" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xc59d2532, "input_allocate_device" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001014d0000010Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "55106B7DCA936A7F31CBB5C");
