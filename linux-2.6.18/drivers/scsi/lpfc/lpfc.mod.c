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
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0xf9a482f9, "msleep" },
	{ 0x373e2705, "sysfs_remove_bin_file" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0xdec27e6e, "scsi_host_alloc" },
	{ 0xf523285, "blk_queue_free_tags" },
	{ 0xea333b63, "scsi_track_queue_full" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x4827a016, "del_timer" },
	{ 0xd0ee38b8, "schedule_timeout_uninterruptible" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x3adc4c7c, "remove_wait_queue" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0xf1e222e8, "scsi_is_fc_rport" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xe5077a8f, "mempool_destroy" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x8a24f99e, "dma_pool_destroy" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xa635ffaf, "scsi_adjust_queue_depth" },
	{ 0x7d11c268, "jiffies" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xa34eb072, "wait_for_completion" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0x2fad7ec2, "scsi_is_host_device" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0xb56717cf, "xtime" },
	{ 0xf875c5f1, "pci_set_dma_mask" },
	{ 0x8d3894f2, "_ctype" },
	{ 0x1b7d4074, "printk" },
	{ 0x7f12bc25, "scsi_add_host" },
	{ 0x859204af, "sscanf" },
	{ 0xb346304, "kthread_stop" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0x5152e605, "memcmp" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x28264729, "fc_remote_port_rolechg" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x3db28e6f, "dma_pool_free" },
	{ 0x9eac042a, "__ioremap" },
	{ 0xf4bef259, "scsi_host_put" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0xa7409aaf, "idr_remove" },
	{ 0xfe0df06f, "pci_set_mwi" },
	{ 0x52a7207f, "idr_pre_get" },
	{ 0x9541a10f, "fc_release_transport" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xcfaf79ba, "mempool_alloc" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0xb12cdfe7, "system_utsname" },
	{ 0x59981248, "pci_bus_read_config_dword" },
	{ 0xf124ca1f, "fc_remote_port_delete" },
	{ 0x26e96637, "request_irq" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0x4292364c, "schedule" },
	{ 0xbe8a1485, "mempool_create" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x5e552f71, "dma_pool_alloc" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x37a9798f, "mempool_free" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x56930927, "__scsi_iterate_devices" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xd2965f6f, "kthread_should_stop" },
	{ 0xa05c03df, "mempool_kmalloc" },
	{ 0xa3d44f8c, "add_wait_queue" },
	{ 0xea10212a, "int_to_scsilun" },
	{ 0x73a2a7c4, "blk_queue_init_tags" },
	{ 0x37a0cba, "kfree" },
	{ 0x97e89e2c, "kthread_create" },
	{ 0x2e60bace, "memcpy" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xedc03953, "iounmap" },
	{ 0x34d6a5a7, "sysfs_create_bin_file" },
	{ 0x29c2fef5, "set_user_nice" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x4c185a54, "fc_remove_host" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x89535602, "scsi_remove_host" },
	{ 0x7e0221e4, "complete" },
	{ 0x25da070, "snprintf" },
	{ 0xf9322ff4, "fc_remote_port_add" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x4c09c5f1, "dma_pool_create" },
	{ 0x2d29e50a, "idr_get_new" },
	{ 0x8475ea75, "fc_attach_transport" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=scsi_mod,scsi_transport_fc";

MODULE_ALIAS("pci:v000010DFd0000FB00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd00001AE5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FA00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F980sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F900sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F800sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F700sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F095sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F098sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0F5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0F6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0F7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FD00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FD11sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FD12sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0D5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0D1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FE00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FE11sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FE12sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0A5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FC00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FC10sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FC20sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3EC9E9CA4711A4BF776A0ED");
