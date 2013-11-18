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
	{ 0xcff53400, "kref_put" },
	{ 0xfd59d987, "complete_and_exit" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xde537c9d, "atm_charge" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xb5ec9803, "vcc_release_async" },
	{ 0x7d11c268, "jiffies" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0xa13798f8, "printk_ratelimit" },
	{ 0xa34eb072, "wait_for_completion" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x11075db7, "usb_string" },
	{ 0x86cb9d9f, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x45c077f2, "_spin_lock_irq" },
	{ 0xed5c73bf, "__tasklet_schedule" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x8bb7c126, "atm_dev_register" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0xd79b5a02, "allow_signal" },
	{ 0x79ad224b, "tasklet_kill" },
	{ 0x13c12a56, "skb_queue_tail" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x548de514, "__alloc_skb" },
	{ 0xfa3601a2, "usb_get_dev" },
	{ 0x72216fa9, "param_get_uint" },
	{ 0xf692f74f, "usb_put_dev" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x13e0584f, "atm_dev_deregister" },
	{ 0x3ae831b6, "kref_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x932da67e, "kill_proc" },
	{ 0xb7b61546, "crc32_be" },
	{ 0x8abac70a, "param_set_uint" },
	{ 0x8a1203a9, "kref_get" },
	{ 0x28f35813, "scnprintf" },
	{ 0x7e9ebb05, "kernel_thread" },
	{ 0x3a233a33, "skb_dequeue" },
	{ 0x7e0221e4, "complete" },
	{ 0x25da070, "snprintf" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0xdc43a9c8, "daemonize" },
	{ 0x1e62b30a, "usb_alloc_urb" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=atm";


MODULE_INFO(srcversion, "CEC296CFDBD094AB2FA30E8");
