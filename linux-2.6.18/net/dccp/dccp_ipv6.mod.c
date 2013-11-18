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
	{ 0xbd6f981f, "ip6_dst_lookup" },
	{ 0x3cc0dd6c, "security_ops" },
	{ 0x8b7d8caf, "dccp_statistics" },
	{ 0x286337eb, "dccp_init_sock" },
	{ 0x1291465e, "__kfree_skb" },
	{ 0x8e4edd66, "dccp_v4_do_rcv" },
	{ 0xcde174cc, "dccp_set_state" },
	{ 0x8fa41a1, "inet6_csk_bind_conflict" },
	{ 0xe3ae93c7, "ipv6_getsockopt" },
	{ 0x8fb40600, "dccp_hashinfo" },
	{ 0x22b77110, "inet_csk_ctl_sock_create" },
	{ 0x307f2317, "inet6_add_protocol" },
	{ 0x41b09f98, "inet6_lookup_listener" },
	{ 0x94b67083, "dccp_sendmsg" },
	{ 0x72b7406a, "ipv6_opt_accepted" },
	{ 0x906fc018, "dccp_destroy_sock" },
	{ 0x946a6b65, "dccp_make_response" },
	{ 0xf93cb7da, "skb_clone" },
	{ 0x93eaee67, "dccp_rcv_established" },
	{ 0x1bcd461f, "_spin_lock" },
	{ 0xedc9e9b9, "inet6_csk_search_req" },
	{ 0x15afb86d, "dccp_v4_conn_request" },
	{ 0x4dc670d, "dccp_create_openreq_child" },
	{ 0x33095766, "ipv6_dup_options" },
	{ 0x26019d79, "dccp_check_req" },
	{ 0xbe826b08, "inet_sendmsg" },
	{ 0xe88bafa9, "inet6_release" },
	{ 0xb96dc645, "dccp_hash" },
	{ 0xb905ad82, "icmpv6_err_convert" },
	{ 0x163c1412, "inet6_register_protosw" },
	{ 0x196919d0, "dccp_recvmsg" },
	{ 0xfb0561d, "ip6_xmit" },
	{ 0x9155c375, "inet_sk_rebuild_header" },
	{ 0x4c2f072e, "inet6_getname" },
	{ 0xb007fea4, "sock_rfree" },
	{ 0x1992cecd, "inet6_csk_xmit" },
	{ 0x681c5fdc, "__inet6_hash" },
	{ 0x76c1d2ae, "dccp_ioctl" },
	{ 0x8a5755b2, "dccp_setsockopt" },
	{ 0x16b0cf75, "sock_common_recvmsg" },
	{ 0x27dc8ba7, "sock_no_sendpage" },
	{ 0xded1ee1, "net_statistics" },
	{ 0xa132fcfe, "dccp_child_process" },
	{ 0x29c9c48, "sock_no_mmap" },
	{ 0x7900058d, "sock_no_socketpair" },
	{ 0x83b5121c, "__inet6_lookup_established" },
	{ 0xe8e73667, "dccp_v4_request_recv_sock" },
	{ 0xf5629d74, "dccp_getsockopt" },
	{ 0x54a210f7, "inet6_csk_reqsk_queue_hash_add" },
	{ 0xb4019d77, "inet6_ioctl" },
	{ 0x1b7d4074, "printk" },
	{ 0xad3ce0db, "inet_csk_delete_keepalive_timer" },
	{ 0x900347aa, "fl6_sock_lookup" },
	{ 0x30123eb5, "icmpv6_statistics" },
	{ 0xb689e344, "kmem_cache_free" },
	{ 0x12d35b8c, "dccp_close" },
	{ 0x769f4612, "sk_free" },
	{ 0x1506a81b, "inet_shutdown" },
	{ 0x8cb3498f, "dccp_orphan_count" },
	{ 0x8f2f4b8f, "dccp_sync_mss" },
	{ 0x5d7b4ed2, "inet6_hash_connect" },
	{ 0x3a2f3de4, "inet_accept" },
	{ 0xe591efea, "xfrm_policy_list" },
	{ 0xcca637d8, "dccp_feat_default_sequence_window" },
	{ 0x88745348, "secure_dccp_sequence_number" },
	{ 0x78986d72, "sock_kfree_s" },
	{ 0x52818790, "inet_csk_get_port" },
	{ 0x65779a84, "dccp_death_row" },
	{ 0x325f8813, "dccp_poll" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x189f12c0, "proto_register" },
	{ 0x4b05104f, "_write_lock" },
	{ 0x13a3f36c, "dccp_disconnect" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x5c615022, "__sk_dst_check" },
	{ 0x52f757ea, "dccp_done" },
	{ 0x548de514, "__alloc_skb" },
	{ 0x7c2ca2de, "secure_tcpv6_sequence_number" },
	{ 0x64e59ce7, "dccp_v4_send_check" },
	{ 0xc06e26f7, "kfree_skb" },
	{ 0x6495dd71, "proto_unregister" },
	{ 0x5e02c1ef, "inet_stream_connect" },
	{ 0x62203fb2, "dccp_invalid_packet" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0x9278bfec, "inet6_del_protocol" },
	{ 0xe3038592, "skb_under_panic" },
	{ 0xdcef6636, "wake_up_process" },
	{ 0x409efeda, "inet6_lookup" },
	{ 0x1f6d6e11, "sk_receive_skb" },
	{ 0xd687392c, "ipv6_setsockopt" },
	{ 0xf3501da1, "sock_common_setsockopt" },
	{ 0xcef43e59, "inet6_sk_rebuild_header" },
	{ 0xb0d416e7, "__xfrm_policy_check" },
	{ 0xda8af372, "sk_run_filter" },
	{ 0xa6df1370, "ipv6_invert_rthdr" },
	{ 0xc73109d0, "___pskb_trim" },
	{ 0x7c9b8eb6, "dccp_unhash" },
	{ 0x47ded729, "inet_dccp_listen" },
	{ 0x533e27a, "sock_common_getsockopt" },
	{ 0xd55a0688, "inet6_unregister_protosw" },
	{ 0x498be2ee, "inet_csk_accept" },
	{ 0xe89766a5, "inet6_bind" },
	{ 0x151ea5e3, "dccp_rcv_state_process" },
	{ 0x9a3de8f8, "csum_partial" },
	{ 0x3b56c02e, "dccp_connect" },
	{ 0x6715ef5f, "dccp_shutdown" },
	{ 0x38456cd3, "ip_queue_xmit" },
	{ 0xa74b8bf8, "xfrm_lookup" },
	{ 0xbc91f242, "dccp_v4_connect" },
	{ 0x15792c26, "__ipv6_addr_type" },
	{ 0x6b72486a, "inet6_csk_addr2sockaddr" },
	{ 0x3b7ee9ff, "inet6_destroy_sock" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ipv6,dccp,dccp_ipv4";


MODULE_INFO(srcversion, "A5EB04164D3CA0D0B5197CB");
