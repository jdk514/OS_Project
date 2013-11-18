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
	{ 0x7ded8240, "param_get_ulong" },
	{ 0x66eaa8a9, "param_set_ulong" },
	{ 0x14dfb94e, "decode_rs16" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x7d11c268, "jiffies" },
	{ 0xbea51acc, "add_mtd_partitions" },
	{ 0x6d2bcfdd, "add_mtd_device" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xe8afc2db, "nand_scan_bbt" },
	{ 0x5152e605, "memcmp" },
	{ 0xf3ed347c, "init_rs" },
	{ 0x4b30b6e3, "nand_scan" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x9eac042a, "__ioremap" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1b7d4074, "printk" },
	{ 0xe15ff31, "free_rs" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x8c15dae1, "nand_release" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=reed_solomon,mtdpart,mtdcore,nand";


MODULE_INFO(srcversion, "35262A93112BB45254E76B9");
