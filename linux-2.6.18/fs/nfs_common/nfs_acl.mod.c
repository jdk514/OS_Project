#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
};

static const struct modversion_info ____versions[]
__attribute_used__
__attribute__((section("__versions"))) = {
	{ 0xb499ef18, "struct_module" },
	{ 0x8acc3f66, "xdr_decode_word" },
	{ 0x7142159e, "xdr_encode_array2" },
	{ 0x8e1e85bf, "xdr_encode_word" },
	{ 0xf1ef871, "posix_acl_alloc" },
	{ 0x310917fe, "sort" },
	{ 0x37a0cba, "kfree" },
	{ 0x8235805b, "memmove" },
	{ 0x41493ca4, "xdr_decode_array2" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=sunrpc";


MODULE_INFO(srcversion, "775F195736DC789B4DA8A19");
