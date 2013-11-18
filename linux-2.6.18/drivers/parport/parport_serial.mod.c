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
	{ 0xddf06436, "pciserial_init_ports" },
	{ 0x29160ebc, "parport_pc_probe_port" },
	{ 0x2e60bace, "memcpy" },
	{ 0x1b7d4074, "printk" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xff271466, "pci_choose_state" },
	{ 0xb8435063, "pci_save_state" },
	{ 0xb282c4ec, "pciserial_suspend_ports" },
	{ 0x37a0cba, "kfree" },
	{ 0x9c795188, "parport_pc_unregister_port" },
	{ 0x708ca308, "pciserial_remove_ports" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xd00d14a9, "pciserial_resume_ports" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x49653ec1, "pci_restore_state" },
	{ 0x7e9fcf24, "pci_set_power_state" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=parport_pc";

MODULE_ALIAS("pci:v000014D2d00008011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014D2d00008021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009735sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009745sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009835sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009845sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009855sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DBd00002110sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DBd00002111sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DBd00002112sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DBd00002140sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DBd00002141sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DBd00002142sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DBd00002160sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DBd00002161sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DBd00002162sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00001010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00001011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00001012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00001034sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00001035sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00001036sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00002040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00002041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00002042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00002010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00002011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00002012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00002060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00002061sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00002062sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "24E2E99EDB4109DCE4BBBE2");
