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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x8397630e, "usb_buffer_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0x60ea5fe7, "__tasklet_hi_schedule" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xd509b8b4, "usb_buffer_free" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x30604317, "snd_rawmidi_set_ops" },
	{ 0x7d11c268, "jiffies" },
	{ 0x818cf303, "snd_rawmidi_new" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0x1b7d4074, "printk" },
	{ 0x178b9fcb, "usb_set_interface" },
	{ 0x2f378fc0, "snd_rawmidi_transmit_peek" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0xf3b39202, "mod_timer" },
	{ 0x79ad224b, "tasklet_kill" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0xed52da0d, "snd_rawmidi_transmit_ack" },
	{ 0xbb7ca41d, "usb_bulk_msg" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x25da070, "snprintf" },
	{ 0xbcc5d6f2, "snd_rawmidi_transmit" },
	{ 0x412cdcb4, "snd_rawmidi_transmit_empty" },
	{ 0x4c95ee4a, "usb_free_urb" },
	{ 0x843984d1, "snd_rawmidi_receive" },
	{ 0x1e62b30a, "usb_alloc_urb" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-rawmidi";


MODULE_INFO(srcversion, "8AC22378B2BCC7BC9C95F45");
