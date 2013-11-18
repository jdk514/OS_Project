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
	{ 0x96befe4d, "no_llseek" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x14126ae8, "kill_fasync" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0xfa955d96, "mpt_event_register" },
	{ 0xf5b78a84, "mpt_reset_register" },
	{ 0x44dbcac8, "mpt_register" },
	{ 0x1ef3eb01, "misc_register" },
	{ 0x306cdcb1, "mpt_device_driver_register" },
	{ 0x5dfe8f1a, "unlock_kernel" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x4ff943ae, "mutex_lock_interruptible" },
	{ 0xc6183807, "mutex_trylock" },
	{ 0x982ebbc9, "mpt_alloc_fw_memory" },
	{ 0x54bd8f50, "mpt_free_fw_memory" },
	{ 0xe88da0b7, "mpt_findImVolumes" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x5568be43, "lock_kernel" },
	{ 0xe14d4a92, "mpt_GetIocState" },
	{ 0x7e72ae57, "mpt_config" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x5528b7ca, "mpt_put_msg_frame" },
	{ 0x375d8126, "mpt_add_sge" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x23dbdc, "mpt_verify_adapter" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x7175dba, "mpt_HardResetHandler" },
	{ 0x1c733de3, "mpt_free_msg_frame" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x7987287b, "mpt_send_handshake_request" },
	{ 0x12d90ef9, "mpt_get_msg_frame" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0xdd805159, "ioc_list" },
	{ 0x54ee23d3, "fasync_helper" },
	{ 0x17c3bdf6, "mpt_device_driver_deregister" },
	{ 0x6fb5ab71, "mpt_deregister" },
	{ 0xae4fb61e, "mpt_reset_deregister" },
	{ 0x1b7d4074, "printk" },
	{ 0x25dd4bad, "misc_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=mptbase";


MODULE_INFO(srcversion, "6C96F0480BC17547F6AC49C");
