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
	{ 0x28209a37, "register_isdn" },
	{ 0xacd81448, "skb_queue_head" },
	{ 0x4c3af445, "__request_region" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0xf9a482f9, "msleep" },
	{ 0xca09a9af, "per_cpu__kstat" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x4827a016, "del_timer" },
	{ 0x332eb002, "__next_cpu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xf93cb7da, "skb_clone" },
	{ 0xa3e9fd5e, "interruptible_sleep_on" },
	{ 0xf6a5a6c8, "schedule_work" },
	{ 0x806d5133, "param_array_get" },
	{ 0x75811312, "crc_ccitt_table" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd8c152cd, "raise_softirq_irqoff" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x7d11c268, "jiffies" },
	{ 0xaa136450, "param_get_charp" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0xf21a8115, "skb_queue_purge" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0x8d3894f2, "_ctype" },
	{ 0x1b7d4074, "printk" },
	{ 0x72808e8d, "pci_find_device" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xa09539e, "pci_bus_write_config_dword" },
	{ 0xf4a91d48, "__first_cpu" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x9eac042a, "__ioremap" },
	{ 0xc41ae269, "dev_kfree_skb_any" },
	{ 0x5dfd3f0d, "cpu_possible_map" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x13c12a56, "skb_queue_tail" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x59981248, "pci_bus_read_config_dword" },
	{ 0x26e96637, "request_irq" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xe3038592, "skb_under_panic" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0x19cacd0, "init_waitqueue_head" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x59968f3c, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0x3a233a33, "skb_dequeue" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x782b0008, "vsprintf" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xe8e53e56, "per_cpu__softnet_data" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=isdn,crc-ccitt";

MODULE_ALIAS("pci:v00001244d00000A00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001133d0000E002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001133d0000E004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001133d0000E005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001133d0000E00Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001048d00001000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001048d00003000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00001030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00001152sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00001151sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00001187sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001267d00001016sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000E159d00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000E159d00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011DEd00006120sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000675d00001702sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001050d00006692sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d00002BD0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B00Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B00Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B00Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B700sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B701sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013D1d00002BD1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001043d00000675sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000871d0000FFA2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000871d0000FFA1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001051d00000100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B0d00002BD0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd00000070sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd00000071sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd00000072sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd00000073sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "29F70B76ED5F16157B45106");
