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
	{ 0x3aad8346, "usb_serial_disconnect" },
	{ 0x6c9c6435, "usb_serial_probe" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x5418d52a, "param_get_ushort" },
	{ 0xc4c5509d, "param_set_ushort" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x6fbda80c, "usb_control_msg" },
	{ 0xf9a482f9, "msleep" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xf2db5ecc, "usb_serial_port_softint" },
	{ 0xf08a9ea, "usb_kill_urb" },
	{ 0xb4a4679e, "usb_register_driver" },
	{ 0x66eb93e, "usb_serial_register" },
	{ 0x5635c457, "usb_reset_configuration" },
	{ 0x37a0cba, "kfree" },
	{ 0x41d418f, "tty_flip_buffer_push" },
	{ 0xf60c8df5, "tty_insert_flip_string" },
	{ 0x441ce43c, "tty_buffer_request_room" },
	{ 0x49963342, "usb_submit_urb" },
	{ 0x505ec883, "dev_driver_string" },
	{ 0xa20fdde, "_spin_unlock_irqrestore" },
	{ 0x87cddf59, "_spin_lock_irqsave" },
	{ 0x1b7d4074, "printk" },
	{ 0x4e7ddbed, "usb_serial_deregister" },
	{ 0x5eea5f42, "usb_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v049Fp0003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0104p00BEd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v03F0p1016d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v03F0p1116d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v03F0p1216d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v03F0p2016d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v03F0p2116d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v03F0p2216d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v03F0p3016d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v03F0p3116d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v03F0p3216d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v03F0p4016d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v03F0p4116d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v03F0p4216d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v03F0p5016d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v03F0p5116d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v03F0p5216d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0409p00D5d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0409p00D6d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0409p00D7d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0409p8024d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0409p8025d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v043Ep9C01d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep00CEd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0400d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0401d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0402d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0403d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0404d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0405d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0406d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0407d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0408d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0409d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep040Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep040Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep040Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep040Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep040Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep040Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0410d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0411d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0412d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0413d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0414d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0415d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0416d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0417d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0432d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0433d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0434d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0435d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0436d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0437d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0438d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0439d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep043Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep043Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep043Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep043Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep043Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep043Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0440d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0441d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0442d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0443d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0444d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0445d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0446d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0447d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0448d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0449d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep044Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep044Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep044Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep044Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep044Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep044Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0450d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0451d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0452d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0453d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0454d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0455d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0456d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0457d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0458d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0459d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep045Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep045Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep045Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep045Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep045Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep045Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0460d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0461d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0462d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0463d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0464d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0465d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0466d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0467d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0468d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0469d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep046Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep046Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep046Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep046Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep046Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep046Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0470d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0471d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0472d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0473d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0474d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0475d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0476d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0477d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0478d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep0479d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep047Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep047Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep04C8d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep04C9d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep04CAd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep04CBd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep04CCd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep04CDd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep04CEd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep04D7d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep04D8d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep04D9d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep04DAd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep04DBd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep04DCd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep04DDd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep04DEd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep04DFd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep04E0d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep04E1d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep04E2d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep04E3d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep04E4d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep04E5d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep04E6d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep04E7d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep04E8d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep04E9d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep04EAd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v049Fp0003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v049Fp0032d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04A4p0014d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04ADp0301d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04ADp0302d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04ADp0303d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04C5p1058d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04C5p1079d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04DAp2500d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04DDp9102d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04DDp9121d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04DDp9123d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04E8p5F00d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04E8p5F01d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04E8p5F02d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04E8p5F03d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04E8p5F04d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04E8p6611d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04E8p6613d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04E8p6615d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04E8p6617d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04E8p6619d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04E8p661Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04E8p662Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04E8p6630d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04E8p6632d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04F1p3011d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04F1p3012d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0502p1631d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0502p1632d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0502p16E1d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0502p16E2d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0502p16E3d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0536p01A0d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0543p0ED9d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0543p1527d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0543p1529d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0543p152Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0543p152Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0543p1921d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0543p1922d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0543p1923d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05E0p2000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05E0p2001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05E0p2002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05E0p2003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05E0p2004d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05E0p2005d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05E0p2006d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05E0p2007d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05E0p2008d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05E0p2009d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05E0p200Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v067Ep1001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07CFp2001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07CFp2002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07CFp2003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0930p0700d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0930p0705d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0930p0706d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0930p0707d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0930p0708d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0930p0709d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0930p070Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0930p070Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v094Bp0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0960p0065d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0960p0066d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0960p0067d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0961p0010d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v099Ep0052d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v099Ep4000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B05p4200d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B05p4201d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B05p4202d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B05p420Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B05p9200d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B05p9202d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p00CEd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A01d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A02d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A03d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A04d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A05d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A06d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A07d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A08d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A09d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A0Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A0Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A0Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A0Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A0Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A0Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A10d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A11d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A12d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A13d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A14d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A15d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A16d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A17d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A18d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A19d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A1Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A1Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A1Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A1Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A1Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A1Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A20d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A21d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A22d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A23d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A24d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A25d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A26d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A27d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A28d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A29d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A2Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A2Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A2Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A2Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A2Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A2Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A30d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A31d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A32d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A33d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A34d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A35d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A36d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A37d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A38d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A39d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A3Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A3Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A3Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A3Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A3Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A3Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A40d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A41d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A42d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A43d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A44d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A45d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A46d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A47d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A48d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A49d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A4Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A4Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A4Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A4Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A4Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A4Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A50d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A51d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A52d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A53d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A54d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A55d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A56d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A57d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A58d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A59d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A5Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A5Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A5Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A5Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A5Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A5Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A60d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A61d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A62d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A63d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A64d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A65d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A66d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A67d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A68d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A69d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A6Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A6Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A6Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A6Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A6Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A6Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A70d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A71d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A72d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A73d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A74d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A75d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A76d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A77d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A78d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A79d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A7Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A7Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A7Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A7Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A7Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A7Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A80d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A81d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A82d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A83d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A84d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A85d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A86d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A87d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A88d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A89d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A8Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A8Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A8Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A8Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A8Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A8Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A90d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A91d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A92d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A93d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A94d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A95d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A96d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A97d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A98d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A99d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A9Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A9Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A9Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A9Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A9Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BB4p0A9Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BF8p1001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C44p03A2d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C8Ep6000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0CADp9001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0F4Ep0200d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0F98p0201d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0FB8p3001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0FB8p3002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0FB8p3003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0FB8p4001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1066p00CEd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1066p0300d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1066p0500d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1066p0600d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1066p0700d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1114p0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1114p0004d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1114p0006d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1182p1388d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v11D9p1002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v11D9p1003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1231pCE01d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1231pCE02d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1690p0601d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v22B8p4204d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v22B8p4214d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v22B8p4224d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v22B8p4234d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v22B8p4244d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v3340p011Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v3340p0326d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v3340p0426d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v3340p043Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v3340p051Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v3340p053Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v3340p071Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v3340p0B1Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v3340p0E3Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v3340p0F1Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v3340p0F3Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v3340p1326d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v3340p191Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v3340p2326d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v3340p3326d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v3708p20CEd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v3708p21CEd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v4113p0210d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v4113p0211d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v4113p0400d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v4113p0410d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v413Cp4001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v413Cp4002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v413Cp4003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v413Cp4004d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v413Cp4005d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v413Cp4006d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v413Cp4007d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v413Cp4008d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v413Cp4009d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v4505p0010d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5E04pCE00d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "84E74E6AEBD1F1CC128C154");
