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
	{ 0xf0a16657, "FsmNew" },
	{ 0xd8c152cd, "raise_softirq_irqoff" },
	{ 0xd79051bc, "FsmInitTimer" },
	{ 0x148f0c99, "FsmFree" },
	{ 0x1b7d4074, "printk" },
	{ 0x93a64734, "FsmChangeState" },
	{ 0xfc108d60, "skb_over_panic" },
	{ 0x548de514, "__alloc_skb" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0xe3038592, "skb_under_panic" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0x50679ae0, "FsmRestartTimer" },
	{ 0x9df0cd27, "FsmEvent" },
	{ 0x782b0008, "vsprintf" },
	{ 0xfbb4b63, "FsmDelTimer" },
	{ 0xe8e53e56, "per_cpu__softnet_data" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=hisax";


MODULE_INFO(srcversion, "63BCE8F0B774C4664031F4B");
