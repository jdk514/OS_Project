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
	{ 0xd5ceab1e, "sk_stop_timer" },
	{ 0xb03b9b3b, "dccp_li_hist_purge" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0x72be9afe, "dccp_insert_option" },
	{ 0xa630e87, "dccp_tx_hist_new" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x7824d7b3, "dccp_tx_hist_find_entry" },
	{ 0x7d11c268, "jiffies" },
	{ 0xc14edbd1, "dccp_li_hist_delete" },
	{ 0xb616686, "dccp_rx_hist_new" },
	{ 0x245da296, "dccp_insert_option_elapsed_time" },
	{ 0x1b7d4074, "printk" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xb689e344, "kmem_cache_free" },
	{ 0x4a4b12ba, "dccp_send_ack" },
	{ 0x769f4612, "sk_free" },
	{ 0x33ad5e15, "dccp_rx_hist_delete" },
	{ 0x1078cfc, "dccp_rx_hist_add_packet" },
	{ 0x2b0cf39, "dccp_rx_hist_find_entry" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x86ac08f4, "sk_reset_timer" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x8b713ef7, "dccp_li_hist_interval_new" },
	{ 0x339b7c5, "dccp_timestamp" },
	{ 0xda635120, "dccp_insert_option_timestamp" },
	{ 0xffff1ec4, "dccp_li_hist_calc_i_mean" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x6c252d29, "tfrc_calc_x_reverse_lookup" },
	{ 0x7b75643a, "ccid_register" },
	{ 0xf53e8c19, "ccid_unregister" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x71ecc67f, "dccp_rx_hist_find_data_packet" },
	{ 0xea9b81e8, "dccp_tx_hist_purge" },
	{ 0xa487ea5, "tfrc_calc_x" },
	{ 0x90f3df52, "dccp_tx_hist_delete" },
	{ 0xded46fa7, "dccp_tx_hist_purge_older" },
	{ 0x9a1790d2, "dccp_rx_hist_purge" },
	{ 0xed82b007, "dccp_li_hist_new" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=dccp_tfrc_lib,dccp";


MODULE_INFO(srcversion, "DE41A26471C40EFD006231C");
