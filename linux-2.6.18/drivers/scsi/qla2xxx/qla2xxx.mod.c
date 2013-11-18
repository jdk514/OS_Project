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
	{ 0x1c5b2327, "kmem_cache_destroy" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0xf9a482f9, "msleep" },
	{ 0x373e2705, "sysfs_remove_bin_file" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xdec27e6e, "scsi_host_alloc" },
	{ 0xf523285, "blk_queue_free_tags" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x4827a016, "del_timer" },
	{ 0x308e4c3f, "scsi_block_requests" },
	{ 0xcb366c2, "scsi_unblock_requests" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0xf1e222e8, "scsi_is_fc_rport" },
	{ 0xe5077a8f, "mempool_destroy" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x8a24f99e, "dma_pool_destroy" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xa635ffaf, "scsi_adjust_queue_depth" },
	{ 0x7d11c268, "jiffies" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x2e72bba4, "dma_get_required_mask" },
	{ 0x183fa88b, "mempool_alloc_slab" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0x2fad7ec2, "scsi_is_host_device" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x1b7d4074, "printk" },
	{ 0x7f12bc25, "scsi_add_host" },
	{ 0x859204af, "sscanf" },
	{ 0xb346304, "kthread_stop" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0x5152e605, "memcmp" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x2cd3086, "__down_failed_trylock" },
	{ 0xa09539e, "pci_bus_write_config_dword" },
	{ 0x28264729, "fc_remote_port_rolechg" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x3db28e6f, "dma_pool_free" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x9eac042a, "__ioremap" },
	{ 0xf4bef259, "scsi_host_put" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x20645ff6, "pci_find_capability" },
	{ 0xfe0df06f, "pci_set_mwi" },
	{ 0x9541a10f, "fc_release_transport" },
	{ 0x7dceceac, "capable" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xcfaf79ba, "mempool_alloc" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0x59981248, "pci_bus_read_config_dword" },
	{ 0xf124ca1f, "fc_remote_port_delete" },
	{ 0x26e96637, "request_irq" },
	{ 0x4292364c, "schedule" },
	{ 0xbe8a1485, "mempool_create" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x5e552f71, "dma_pool_alloc" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x37a9798f, "mempool_free" },
	{ 0xfc76e10b, "kmem_cache_create" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xd2965f6f, "kthread_should_stop" },
	{ 0xfe7afd73, "pci_bus_write_config_byte" },
	{ 0xea10212a, "int_to_scsilun" },
	{ 0x73a2a7c4, "blk_queue_init_tags" },
	{ 0x37a0cba, "kfree" },
	{ 0x97e89e2c, "kthread_create" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x34d6a5a7, "sysfs_create_bin_file" },
	{ 0x29c2fef5, "set_user_nice" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x4c185a54, "fc_remove_host" },
	{ 0x70dc0e3, "request_firmware" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x89535602, "scsi_remove_host" },
	{ 0x25da070, "snprintf" },
	{ 0xf9322ff4, "fc_remote_port_add" },
	{ 0x96b27088, "__down_failed" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x9728b2f9, "pci_set_consistent_dma_mask" },
	{ 0x4c09c5f1, "dma_pool_create" },
	{ 0x8475ea75, "fc_attach_transport" },
	{ 0x33934162, "release_firmware" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=scsi_mod,scsi_transport_fc";

MODULE_ALIAS("pci:v00001077d00002100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00002200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00002300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00002312sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00002322sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00006312sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00006322sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00002422sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00002432sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00005422sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00005432sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B8E1608E257391DCAFD9224");
