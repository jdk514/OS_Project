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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc53457bc, "spi_dv_device" },
	{ 0xe2e90e7d, "mem_map" },
	{ 0xdec27e6e, "scsi_host_alloc" },
	{ 0xf523285, "blk_queue_free_tags" },
	{ 0xdc3eaf70, "iomem_resource" },
	{ 0x308e4c3f, "scsi_block_requests" },
	{ 0x3795802, "scsi_bios_ptable" },
	{ 0xcb366c2, "scsi_unblock_requests" },
	{ 0x6bc7760e, "pci_get_slot" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x85df9b6c, "strsep" },
	{ 0x1c1f571, "spi_attach_transport" },
	{ 0x12e93446, "pci_bus_write_config_word" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xa635ffaf, "scsi_adjust_queue_depth" },
	{ 0xaa136450, "param_get_charp" },
	{ 0xf5bdade7, "pci_set_master" },
	{ 0x2fad7ec2, "scsi_is_host_device" },
	{ 0x9070b3f2, "ioport_resource" },
	{ 0x1b7d4074, "printk" },
	{ 0x7f12bc25, "scsi_add_host" },
	{ 0x1075bf0, "panic" },
	{ 0x706e336c, "dma_free_coherent" },
	{ 0xd3597019, "scsi_scan_host" },
	{ 0xa09539e, "pci_bus_write_config_dword" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xef06974, "spi_populate_ppr_msg" },
	{ 0xf4bef259, "scsi_host_put" },
	{ 0xdede16c7, "dma_alloc_coherent" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x3762cb6e, "ioremap_nocache" },
	{ 0xfa5d588f, "pci_bus_read_config_word" },
	{ 0xcffa2aff, "spi_populate_width_msg" },
	{ 0x59981248, "pci_bus_read_config_dword" },
	{ 0x26e96637, "request_irq" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2b119258, "spi_release_transport" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0x8bb33e7d, "__release_region" },
	{ 0x66f7eb50, "pci_unregister_driver" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x7e9fcf24, "pci_set_power_state" },
	{ 0xfe7afd73, "pci_bus_write_config_byte" },
	{ 0x73a2a7c4, "blk_queue_init_tags" },
	{ 0x37a0cba, "kfree" },
	{ 0x4afe9a77, "scsi_partsize" },
	{ 0x553f824a, "spi_display_xfer_agreement" },
	{ 0xedc03953, "iounmap" },
	{ 0xf26cc984, "__pci_register_driver" },
	{ 0xa0c71dac, "spi_populate_sync_msg" },
	{ 0x67e9ff8f, "scsi_report_bus_reset" },
	{ 0xdd334e07, "pci_dev_put" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x89535602, "scsi_remove_host" },
	{ 0x7e0221e4, "complete" },
	{ 0xd7b0dddf, "pci_enable_device" },
	{ 0x736bb1ef, "wait_for_completion_timeout" },
	{ 0x782b0008, "vsprintf" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x91d944a4, "scsi_report_device_reset" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=scsi_transport_spi,scsi_mod";

MODULE_ALIAS("pci:v00009004d00005078sv00009004sd00007850bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00003860sv00009004sd00003869bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00006075sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00006178sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00002178sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00006038sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007178sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007278sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007378sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007478sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007578sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007678sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00008178sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00008278sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00008478sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00008578sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00008378sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00008678sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00008878sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00008778sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00000078sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000011sv00009005sd00000181bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000010sv00009005sd0000A100bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000010sv00009005sd00002180bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000010sv00009005sd0000A180bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000010sv00009005sd0000E100bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000010sv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000011sv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000012sv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000013sv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000014sv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000015sv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000016sv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000017sv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000018sv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000019sv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Asv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Bsv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Csv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Dsv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Esv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Fsv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000013sv00009005sd00000003bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000080sv00009005sd0000E2A0bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000080sv00000E11sd0000E2A0bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000080sv00009005sd000062A0bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000080sv00009005sd00006220bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000080sv00009005sd0000E220bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000081sv00009005sd000062A1bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000083sv00009005sd0000FFFFbc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007895sv00009004sd00007891bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007895sv00009004sd00007892bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007895sv00009004sd00007894bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007890sv00009004sd00007893bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000050sv00009005sd0000FFFFbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000050sv00009005sd0000F500bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000051sv00009005sd0000FFFFbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000051sv00009005sd0000B500bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000053sv00009005sd0000FFFFbc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C0sv00009005sd0000F620bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C0sv00000E11sd0000F620bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C3sv00009005sd0000FFFFbc01sc00i*");
MODULE_ALIAS("pci:v00009004d00005078sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00005578sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00003860sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00006078sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007078sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00008078sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000010sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000011sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000012sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000013sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000014sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000015sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000016sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000017sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000018sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000019sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Asv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Bsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Csv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Dsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Esv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Fsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000080sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000081sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000082sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000083sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000084sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000085sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000086sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000087sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000088sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000089sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000008Asv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000008Bsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000008Csv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000008Dsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000008Esv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000008Fsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007895sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000050sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000051sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000052sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000053sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000054sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000055sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000056sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000057sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000058sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000059sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000005Asv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000005Bsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000005Csv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000005Dsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000005Esv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000005Fsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C0sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C1sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C2sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C3sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C4sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C5sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C6sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C7sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C8sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C9sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000CAsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000CBsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000CCsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000CDsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000CEsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000CFsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00001078sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007815sv*sd*bc01sc00i*");

MODULE_INFO(srcversion, "199CA987A679620E43483A1");
