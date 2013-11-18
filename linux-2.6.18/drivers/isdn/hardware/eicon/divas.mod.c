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
	{ 0x4c3af445, "__request_region" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x96befe4d, "no_llseek" },
	{ 0xa7ce993b, "remove_proc_entry" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2fd1d81c, "vfree" },
	{ 0xd16ac615, "__get_user_1" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xaf5f9c5f, "nonseekable_open" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0xc12e8a55, "proc_mkdir" },
	{ 0x1b7d4074, "printk" },
	{ 0x5152e605, "memcmp" },
	{ 0xed5c73bf, "__tasklet_schedule" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xa09539e, "pci_bus_write_config_dword" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0x9eac042a, "__ioremap" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x79ad224b, "tasklet_kill" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0x59981248, "pci_bus_read_config_dword" },
	{ 0x26e96637, "request_irq" },
	{ 0x1e8e5fac, "register_chrdev" },
	{ 0x932e68d6, "create_proc_entry" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0xfe7afd73, "pci_bus_write_config_byte" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x2e60bace, "memcpy" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0xedc03953, "iounmap" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0x2974ead1, "DIVA_DIDD_Read" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x782b0008, "vsprintf" },
	{ 0x58f19b36, "proc_net_eicon" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=divadidd";

MODULE_ALIAS("pci:v00001133d0000E010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001133d0000E012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001133d0000E013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001133d0000E014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001133d0000E015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001133d0000E016sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001133d0000E017sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001133d0000E018sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001133d0000E019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001133d0000E01Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001133d0000E01Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5D3BA6FE5CEB2100D40AEE3");
