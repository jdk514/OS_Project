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
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xa143539c, "pcmcia_register_driver" },
	{ 0xed5c73bf, "__tasklet_schedule" },
	{ 0x807a89d4, "__net_timestamp" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x13c12a56, "skb_queue_tail" },
	{ 0xe3038592, "skb_under_panic" },
	{ 0xacd81448, "skb_queue_head" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x865edc9b, "finish_wait" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0xc8f02aeb, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x3a233a33, "skb_dequeue" },
	{ 0x66d603cb, "pcmcia_dev_present" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd87fe4c2, "hci_register_dev" },
	{ 0xf9a482f9, "msleep" },
	{ 0x911fb10d, "hci_alloc_dev" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x94c5aaac, "pcmcia_request_configuration" },
	{ 0xb4fb5977, "cs_error" },
	{ 0xd9273e5a, "pcmcia_request_irq" },
	{ 0x8a8d6f30, "pcmcia_request_io" },
	{ 0xcd2ac1c1, "pccard_parse_tuple" },
	{ 0xa2d20b5c, "pccard_get_tuple_data" },
	{ 0xbc08d5a8, "pccard_get_first_tuple" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x37a0cba, "kfree" },
	{ 0x13d45792, "pcmcia_disable_device" },
	{ 0x4827a016, "del_timer" },
	{ 0x21a1d9de, "hci_free_dev" },
	{ 0x1b7d4074, "printk" },
	{ 0x168b4917, "hci_unregister_dev" },
	{ 0xf21a8115, "skb_queue_purge" },
	{ 0x30910043, "pcmcia_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=bluetooth";

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paBAF16FBFpb657CC15Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paE3987764pb2524B59Cpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0A0736ECpb24E6DFABpc*pd*");

MODULE_INFO(srcversion, "A389D9516EE5C1A1574113B");
