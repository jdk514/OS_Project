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
	{ 0x3d7c39ea, "_read_lock" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x81cbc788, "sock_release" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x4ebab107, "sock_i_ino" },
	{ 0x7d11c268, "jiffies" },
	{ 0x7e011933, "netlink_kernel_create" },
	{ 0x21968b7f, "_read_lock_bh" },
	{ 0x1b7d4074, "printk" },
	{ 0x5152e605, "memcmp" },
	{ 0xb689e344, "kmem_cache_free" },
	{ 0x769f4612, "sk_free" },
	{ 0x942aa696, "netlink_unicast" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x548de514, "__alloc_skb" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x8bf46c54, "_read_unlock_bh" },
	{ 0x409efeda, "inet6_lookup" },
	{ 0x31ab552f, "netlink_ack" },
	{ 0x59968f3c, "__wake_up" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xe788deb3, "netlink_dump_start" },
	{ 0x37a0cba, "kfree" },
	{ 0x3a233a33, "skb_dequeue" },
	{ 0xb5be7dd5, "__inet_lookup_listener" },
	{ 0x89eda67c, "sock_i_uid" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "570E779C79BE3A62988983E");
