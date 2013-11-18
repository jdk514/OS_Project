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
	{ 0x4c3af445, "__request_region" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x7819fee4, "debugfs_create_dir" },
	{ 0x4827a016, "del_timer" },
	{ 0xdc3eaf70, "iomem_resource" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0xd5b19fa3, "debugfs_create_file" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0x23d283e, "pci_hp_deregister" },
	{ 0x3da7382a, "pci_find_slot" },
	{ 0xda4008e6, "cond_resched" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x3c418330, "pcibios_set_irq_routing" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x5568be43, "lock_kernel" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0xaab4112d, "debugfs_remove" },
	{ 0xa09539e, "pci_bus_write_config_dword" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x3025fb04, "pci_bus_add_devices" },
	{ 0x625acc81, "__down_failed_interruptible" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x2ce48be6, "pci_scan_slot" },
	{ 0x5dfe8f1a, "unlock_kernel" },
	{ 0x4b4fb743, "pci_hp_register" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0x59981248, "pci_bus_read_config_dword" },
	{ 0x26e96637, "request_irq" },
	{ 0xbf7e58f6, "pci_hp_change_slot_info" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x3be27b38, "pci_do_scan_bus" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xfe7afd73, "pci_bus_write_config_byte" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0xda08c0d7, "pcibios_get_irq_routing_table" },
	{ 0xedc03953, "iounmap" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x7e9ebb05, "kernel_thread" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0x25da070, "snprintf" },
	{ 0x96b27088, "__down_failed" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x49662ec6, "pci_add_new_bus" },
	{ 0xaeb96d3c, "pci_remove_bus_device" },
	{ 0xdc43a9c8, "daemonize" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v*d*sv*sd*bc08sc04i00*");

MODULE_INFO(srcversion, "C9326AB02EDBF6EA61F2A27");
