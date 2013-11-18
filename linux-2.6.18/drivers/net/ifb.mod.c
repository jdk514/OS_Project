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
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xc5e58afb, "__netif_schedule" },
	{ 0x96f7398e, "netif_rx" },
	{ 0x7fce77eb, "dev_queue_xmit" },
	{ 0x3a233a33, "skb_dequeue" },
	{ 0x7e3f931f, "_spin_trylock" },
	{ 0xed5c73bf, "__tasklet_schedule" },
	{ 0x13c12a56, "skb_queue_tail" },
	{ 0x7d11c268, "jiffies" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xf21a8115, "skb_queue_purge" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0x79ad224b, "tasklet_kill" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xed6d6a06, "ether_setup" },
	{ 0x5598dc19, "register_netdev" },
	{ 0xcf81566a, "alloc_netdev" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x16a75813, "unregister_netdev" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "2D6571A2A210AB75C63EDEF");
