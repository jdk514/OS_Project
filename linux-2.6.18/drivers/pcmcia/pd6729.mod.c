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
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xf3b39202, "mod_timer" },
	{ 0xfec358a8, "pcmcia_parse_events" },
	{ 0xa8574c61, "pcmcia_register_socket" },
	{ 0xec7bc0d, "__mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x64187f14, "pccard_nonstatic_ops" },
	{ 0x26e96637, "request_irq" },
	{ 0x922f7a7, "pci_request_regions" },
	{ 0xfe7afd73, "pci_bus_write_config_byte" },
	{ 0x3498f47d, "pci_bus_read_config_byte" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xcf97f3bd, "dead_socket" },
	{ 0x2e60bace, "memcpy" },
	{ 0x1b7d4074, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x808286d5, "pci_disable_device" },
	{ 0x75b57c1b, "pci_release_regions" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x39851fbe, "pcmcia_unregister_socket" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0xa5befbf9, "pcmcia_socket_dev_suspend" },
	{ 0x5f74a202, "pcmcia_socket_dev_resume" },
	{ 0x66f7eb50, "pci_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001013d00001100sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6A5F896F04C80D54560AE5F");
