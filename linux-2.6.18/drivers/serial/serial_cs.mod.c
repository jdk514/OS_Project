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
	{ 0xa143539c, "pcmcia_register_driver" },
	{ 0xe91eae94, "pcmcia_access_configuration_register" },
	{ 0x2e60bace, "memcpy" },
	{ 0x838abde1, "pcmcia_get_configuration_info" },
	{ 0x94c5aaac, "pcmcia_request_configuration" },
	{ 0xb4fb5977, "cs_error" },
	{ 0xd9273e5a, "pcmcia_request_irq" },
	{ 0x8a8d6f30, "pcmcia_request_io" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x1b7d4074, "printk" },
	{ 0x9fa32a6d, "serial8250_register_port" },
	{ 0xd12ca23c, "pccard_get_next_tuple" },
	{ 0xcd2ac1c1, "pccard_parse_tuple" },
	{ 0xa2d20b5c, "pccard_get_tuple_data" },
	{ 0xbc08d5a8, "pccard_get_first_tuple" },
	{ 0x37a0cba, "kfree" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x13d45792, "pcmcia_disable_device" },
	{ 0xcefcd99a, "serial8250_unregister_port" },
	{ 0xcc248d26, "serial8250_suspend_port" },
	{ 0xc7208c3a, "serial8250_resume_port" },
	{ 0x66d603cb, "pcmcia_dev_present" },
	{ 0xf9a482f9, "msleep" },
	{ 0x30910043, "pcmcia_unregister_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pcmcia:m0057c0021f*fn*pfn01pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0089c110Af*fn*pfn01pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0104c000Af*fn*pfn01pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0105cEA15f*fn*pfn01pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0109c0501f*fn*pfn01pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0138c110Af*fn*pfn01pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0140c000Af*fn*pfn01pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0143c3341f*fn*pfn01pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0143cC0ABf*fn*pfn01pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m016Cc0081f*fn*pfn01pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m021Bc0101f*fn*pfn01pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m08A1cC0ABf*fn*pfn01pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0105c0D0Af*fn*pfn01pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0105c0E0Af*fn*pfn01pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn01paF510DB04pb04CD2988pc46A52D63pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn01paF510DB04pb0143B773pc46A52D63pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn01paF510DB04pb856D66C8pcBD6C43EFpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn01paF510DB04pb52D21E1EpcBD6C43EFpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn01pa2E3EE845pb*pc0EA978EApd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn01pa2E3EE845pb*pc80609023pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn01pa2E3EE845pb*pcA650C32Apd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn01pa2E3EE845pb*pc76DF1D29pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn01pa2E3EE845pb*pcF1403719pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn01pa578BA6E7pbB0AC62C4pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn01pa1A424A1CpbB23897FFpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn01paDD9989BEpb662C394Cpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn01pa2A151FACpb48B932AEpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn01pa0733CC81pbB3765033pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn01paF7CB0B07pb7A821B58pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn01paF510DB04pb52D21E1Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn01pa0C2F80CDpb656947B9pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn01pa0C2F80CDpbDC9BA5EDpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn01paDCFE12D3pbCD8906CCpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn01paDCFE12D3pbC67C648Fpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn01pa1EAE9475pbD9A93BEDpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn01pa2E3EE845pbECA401BFpc*pd*");
MODULE_ALIAS("pcmcia:m0104c0070f*fn00pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0101c0562f*fn01pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0104c0070f*fn01pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m016Cc0020f*fn01pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn01pfn*pa11C2DA09pb7289DC5DpcAAD95E1Fpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn01pfn*paB569A6E5pb5BD4FF2Cpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn01pfn*paB569A6E5pb4BDF15C3pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn01pfn*paB569A6E5pbAE911C15pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn01pfn*paF03E4E77pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn01pfn*pa*pb1ED59302pc*pd*");
MODULE_ALIAS("pcmcia:m0089c0301f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m00A4c0276f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0101c0039f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0104c0006f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0105c410Af*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m010Bc0D50f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m010Bc0D51f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m010Bc0D52f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m010Bc0D53f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m010BcD180f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0137c000Ef*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0137c001Bf*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0137c0025f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0137c0045f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0137c0052f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa67459937pb*pc916D02BApd8FBE92AE*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa506BCCAEpbCB3685F1pc*pdBD6C43EF*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paF510DB04pb*pc*pdBD6C43EF*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB4585A1Apb7271409Cpc*pdBD6C43EF*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa6EE5A3D8pb30EAD12BpcB00F05A0pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa32607776pbD9E73B13pc0E87332Epd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paF510DB04pb*pcBB2CCE4Apd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paEE138382pbD4CE9B02pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paE625F451pbCECD6DFApc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paA3A3062Cpb8CBD7C76pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paA3A3062Cpb5A00CE95pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paD0B78F51pb7E2D49EDpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa76942813pb8B96CE65pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB496E65EpbF31602A6pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa816CC815pb412729FBpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa3BD2D898pb92ABC92Fpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa668388B3pb3F9BDF2Fpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5F73BE51pb0B3E2383pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5F73BE51pb4CD7C09Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB572D360pbD2385B7Apc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa99BCAFE9pbAA25BCABpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paC4420B35pb92ABC92Fpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn01pa281F1C5Dpb570F348Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn01pa281F1C5Dpb6FDCACEEpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn01paF5F025C2pb338E8155pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn01paF5F025C2pb4AE85D35pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn01paF7CB0B07pb66881874pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn01pfn*pa8FDF8F89pbDD5ED9E8pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn01pfn*pa*pb*pc*pd58FC6056*");
MODULE_ALIAS("pcmcia:m0101c0556f*fn01pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0175c0000f*fn01pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0101c0035f*fn01pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0101c003Df*fn01pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0192c0710f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0192cA555f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m013FcA555f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa842047EEpbC2EFCF03pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa96913A85pbCEC8F102pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa96913A85pb8FBE92AEpc0877B627pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa*pbAD20B156pc*pd*");
MODULE_ALIAS("pcmcia:m0013c0000f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f02fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "93630C8960D5B764023F2C8");
