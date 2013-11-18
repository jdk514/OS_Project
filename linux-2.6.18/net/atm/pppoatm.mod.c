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
	{ 0xe3038592, "skb_under_panic" },
	{ 0xddabf283, "skb_realloc_headroom" },
	{ 0x9f5b325c, "ppp_input_error" },
	{ 0x70354e72, "ppp_input" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x5152e605, "memcmp" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0xf7b108c4, "ppp_unregister_channel" },
	{ 0x79ad224b, "tasklet_kill" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0x211f01b3, "ppp_unit_number" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xff21308, "ppp_channel_index" },
	{ 0xdb5ea3f9, "module_refcount" },
	{ 0x37a0cba, "kfree" },
	{ 0x92f50af9, "ppp_register_channel" },
	{ 0x2e60bace, "memcpy" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x7dceceac, "capable" },
	{ 0x4888a014, "__get_user_2" },
	{ 0xed5c73bf, "__tasklet_schedule" },
	{ 0xd8252f4f, "register_atm_ioctl" },
	{ 0x590c7473, "ppp_output_wakeup" },
	{ 0x92898495, "deregister_atm_ioctl" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ppp_generic,atm";


MODULE_INFO(srcversion, "AA975B224634407751A089C");
