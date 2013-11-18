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
	{ 0xd9273e5a, "pcmcia_request_irq" },
	{ 0x4c3af445, "__request_region" },
	{ 0xd12ca23c, "pccard_get_next_tuple" },
	{ 0xcd2ac1c1, "pccard_parse_tuple" },
	{ 0x7d4e29ae, "page_address" },
	{ 0x3795802, "scsi_bios_ptable" },
	{ 0xa143539c, "pcmcia_register_driver" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x868acba5, "get_options" },
	{ 0xa2d20b5c, "pccard_get_tuple_data" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x94c5aaac, "pcmcia_request_configuration" },
	{ 0x8a8d6f30, "pcmcia_request_io" },
	{ 0xaa136450, "param_get_charp" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0x1b7d4074, "printk" },
	{ 0x7f12bc25, "scsi_add_host" },
	{ 0x1075bf0, "panic" },
	{ 0x72808e8d, "pci_find_device" },
	{ 0xd3597019, "scsi_scan_host" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xbc08d5a8, "pccard_get_first_tuple" },
	{ 0x26e96637, "request_irq" },
	{ 0xafd234a5, "scsi_register" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xaee32001, "scsi_unregister" },
	{ 0x30910043, "pcmcia_unregister_driver" },
	{ 0x89535602, "scsi_remove_host" },
	{ 0x13d45792, "pcmcia_disable_device" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xb4fb5977, "cs_error" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paE3736C88pb859CAD20pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa8DACB57Epb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa182BDAFEpbC80D106Fpc*pd*");

MODULE_INFO(srcversion, "057BC4BF0FFC1870C0F0802");
