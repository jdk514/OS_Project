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
	{ 0x7e3f931f, "_spin_trylock" },
	{ 0x3d7c39ea, "_read_lock" },
	{ 0x730aae58, "__neigh_event_send" },
	{ 0x7d11c268, "jiffies" },
	{ 0xf5cd0a25, "neigh_create" },
	{ 0xfc23d160, "neigh_lookup" },
	{ 0x5152e605, "memcmp" },
	{ 0xd592aca8, "neigh_destroy" },
	{ 0xf21a8115, "skb_queue_purge" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x28b9d1e0, "qdisc_reset" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0xf0f58d8d, "register_qdisc" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x5598dc19, "register_netdev" },
	{ 0xcf81566a, "alloc_netdev" },
	{ 0xaaab5c7a, "free_netdev" },
	{ 0x16a75813, "unregister_netdev" },
	{ 0x19202db3, "unregister_qdisc" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "536F0F0328E93D6E5FD656C");
