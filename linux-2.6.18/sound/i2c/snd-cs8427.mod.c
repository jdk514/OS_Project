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
	{ 0xd0ee38b8, "schedule_timeout_uninterruptible" },
	{ 0xbd4c3a02, "snd_i2c_device_create" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xf5539e89, "snd_i2c_sendbytes" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdf2126f8, "mutex_unlock" },
	{ 0x7d11c268, "jiffies" },
	{ 0x1b7d4074, "printk" },
	{ 0x5152e605, "memcmp" },
	{ 0xf67eee79, "snd_ctl_notify" },
	{ 0xa4194d, "snd_i2c_device_free" },
	{ 0xd9f7b1a3, "mutex_lock" },
	{ 0x6633ec91, "snd_i2c_readbytes" },
	{ 0xca7afd33, "snd_ctl_new1" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xb94561ae, "snd_ctl_add" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-i2c,snd";


MODULE_INFO(srcversion, "6C3626E1797AA41C79F7AB1");
