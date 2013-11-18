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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x5331e1b5, "acpi_get_firmware_table" },
	{ 0x4d101f5f, "driver_register" },
	{ 0x7c9a8ca, "ipmi_register_smi" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xdc3eaf70, "iomem_resource" },
	{ 0xd0ee38b8, "schedule_timeout_uninterruptible" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x45cc481, "ipmi_smi_msg_received" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x1992a2ba, "param_set_long" },
	{ 0x447543a, "ipmi_smi_watchdog_pretimeout" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x806d5133, "param_array_get" },
	{ 0xebd6dc3d, "platform_bus_type" },
	{ 0xb07dfb3d, "acpi_remove_gpe_handler" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x40f2b10c, "ipmi_alloc_smi_msg" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x7d11c268, "jiffies" },
	{ 0xafe7d6f9, "ipmi_smi_add_proc_entry" },
	{ 0xdc07f8fe, "atomic_notifier_call_chain" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x7e34e59, "ipmi_unregister_smi" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0x1b7d4074, "printk" },
	{ 0xb346304, "kthread_stop" },
	{ 0xfe7bde5e, "dmi_find_device" },
	{ 0x1e43d962, "platform_device_alloc" },
	{ 0x3e158c0e, "driver_unregister" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x2c077a33, "platform_device_unregister" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xbed4bf59, "platform_device_register" },
	{ 0x53a21daf, "param_get_long" },
	{ 0xede74815, "atomic_notifier_chain_register" },
	{ 0x26e96637, "request_irq" },
	{ 0x4292364c, "schedule" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x683a3221, "param_set_copystring" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xd2965f6f, "kthread_should_stop" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x97e89e2c, "kthread_create" },
	{ 0xedc03953, "iounmap" },
	{ 0x29c2fef5, "set_user_nice" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0x93304684, "param_get_string" },
	{ 0x2aff2f4, "acpi_install_gpe_handler" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ipmi_msghandler";

MODULE_ALIAS("pci:v0000103Cd0000121Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E1B41982AD83E0CC8A51E4B");
