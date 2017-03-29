#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5a7ba343, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x5e4862ee, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0xbfe8e560, __VMLINUX_SYMBOL_STR(cfg80211_rx_unprot_mlme_mgmt) },
	{ 0x5bc202cd, __VMLINUX_SYMBOL_STR(cfg80211_auth_timeout) },
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x7aac6f13, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xe14f6076, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf7588b4a, __VMLINUX_SYMBOL_STR(cfg80211_cqm_rssi_notify) },
	{ 0xffc65e5c, __VMLINUX_SYMBOL_STR(perf_tp_event) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xa46a9743, __VMLINUX_SYMBOL_STR(wiphy_free) },
	{ 0xe69bdbb1, __VMLINUX_SYMBOL_STR(cfg80211_unlink_bss) },
	{ 0x843521a, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0x966ff54d, __VMLINUX_SYMBOL_STR(ieee80211_ie_split_ric) },
	{ 0xb3e5be23, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xe7dbffbf, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x91eb9b4, __VMLINUX_SYMBOL_STR(round_jiffies) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x1879fcbd, __VMLINUX_SYMBOL_STR(bridge_tunnel_header) },
	{ 0xeb6d7c6c, __VMLINUX_SYMBOL_STR(ieee80211_ie_split) },
	{ 0xc646e771, __VMLINUX_SYMBOL_STR(cfg80211_radar_event) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x56052041, __VMLINUX_SYMBOL_STR(cfg80211_shutdown_all_interfaces) },
	{ 0x7a13c81e, __VMLINUX_SYMBOL_STR(led_trigger_event) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x9c64fbd, __VMLINUX_SYMBOL_STR(ieee80211_frequency_to_channel) },
	{ 0xa9320d27, __VMLINUX_SYMBOL_STR(ktime_get_seconds) },
	{ 0xf68285c0, __VMLINUX_SYMBOL_STR(register_inetaddr_notifier) },
	{ 0x19e03378, __VMLINUX_SYMBOL_STR(cfg80211_get_p2p_attr) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xda95db63, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xa197b1ff, __VMLINUX_SYMBOL_STR(ieee80211_get_mesh_hdrlen) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xf2fdfbd4, __VMLINUX_SYMBOL_STR(cfg80211_report_wowlan_wakeup) },
	{ 0x5c7294c, __VMLINUX_SYMBOL_STR(led_set_brightness) },
	{ 0xefc56354, __VMLINUX_SYMBOL_STR(cfg80211_chandef_create) },
	{ 0xc894a799, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x5e866d85, __VMLINUX_SYMBOL_STR(prandom_bytes) },
	{ 0x214d717d, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x4a722b88, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0xe4c47734, __VMLINUX_SYMBOL_STR(led_trigger_register) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x2459616f, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x1e65ab48, __VMLINUX_SYMBOL_STR(led_blink_set) },
	{ 0x60352082, __VMLINUX_SYMBOL_STR(register_inet6addr_notifier) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x7e748150, __VMLINUX_SYMBOL_STR(cfg80211_rx_mgmt) },
	{ 0xa1425906, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x21fde7a3, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x906d2e4a, __VMLINUX_SYMBOL_STR(cfg80211_abandon_assoc) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc63f1b81, __VMLINUX_SYMBOL_STR(ieee80211_radiotap_iterator_next) },
	{ 0x58bf2a46, __VMLINUX_SYMBOL_STR(cfg80211_stop_iface) },
	{ 0xa4eade19, __VMLINUX_SYMBOL_STR(ieee80211_data_to_8023) },
	{ 0x4772b8d9, __VMLINUX_SYMBOL_STR(trace_event_buffer_reserve) },
	{ 0xc18a7bc9, __VMLINUX_SYMBOL_STR(cfg80211_probe_status) },
	{ 0x7843e792, __VMLINUX_SYMBOL_STR(cfg80211_unregister_wdev) },
	{ 0x7fe1a403, __VMLINUX_SYMBOL_STR(cfg80211_find_ie) },
	{ 0x8e087afb, __VMLINUX_SYMBOL_STR(idr_for_each) },
	{ 0xcea0e908, __VMLINUX_SYMBOL_STR(rhashtable_insert_slow) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0xcab6d040, __VMLINUX_SYMBOL_STR(cfg80211_reg_can_beacon) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x7f8de7ec, __VMLINUX_SYMBOL_STR(cfg80211_check_station_change) },
	{ 0x40bdb4a6, __VMLINUX_SYMBOL_STR(cfg80211_ch_switch_started_notify) },
	{ 0xc4189182, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xa9dd3551, __VMLINUX_SYMBOL_STR(cfg80211_mgmt_tx_status) },
	{ 0x733c3b54, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0x5fc4b749, __VMLINUX_SYMBOL_STR(rhashtable_destroy) },
	{ 0x8f8e633a, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x7915d94f, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xf6a07197, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x865029ac, __VMLINUX_SYMBOL_STR(__hw_addr_sync) },
	{ 0x2fe252cc, __VMLINUX_SYMBOL_STR(unregister_inet6addr_notifier) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x3df37a55, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x60fd9ff6, __VMLINUX_SYMBOL_STR(cfg80211_cqm_beacon_loss_notify) },
	{ 0x69b18f43, __VMLINUX_SYMBOL_STR(rfc1042_header) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x487ca03d, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x73f38510, __VMLINUX_SYMBOL_STR(cfg80211_chandef_usable) },
	{ 0xd793a0cb, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x65712c9b, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0xb4b0eca3, __VMLINUX_SYMBOL_STR(kernel_param_unlock) },
	{ 0x98e68eca, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0xc618d526, __VMLINUX_SYMBOL_STR(__ieee80211_get_channel) },
	{ 0x6756906f, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0xd8a64c11, __VMLINUX_SYMBOL_STR(netif_tx_stop_all_queues) },
	{ 0xf5e4607a, __VMLINUX_SYMBOL_STR(cfg80211_get_bss) },
	{ 0x1801ff94, __VMLINUX_SYMBOL_STR(rhashtable_insert_rehash) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x92bb117b, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x5152e605, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xefad05a8, __VMLINUX_SYMBOL_STR(cfg80211_sched_scan_stopped_rtnl) },
	{ 0x7f8e98fb, __VMLINUX_SYMBOL_STR(cfg80211_notify_new_peer_candidate) },
	{ 0x982e6b6d, __VMLINUX_SYMBOL_STR(ieee80211_radiotap_iterator_init) },
	{ 0x39b83bd3, __VMLINUX_SYMBOL_STR(led_trigger_unregister) },
	{ 0x3f8dcf47, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x71780997, __VMLINUX_SYMBOL_STR(wiphy_unregister) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x9a191433, __VMLINUX_SYMBOL_STR(trace_event_reg) },
	{ 0x2dcd2464, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0x5434112, __VMLINUX_SYMBOL_STR(cfg80211_del_sta_sinfo) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x1d7c24fa, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x6d6cb9ad, __VMLINUX_SYMBOL_STR(ieee80211_operating_class_to_band) },
	{ 0x85c3987f, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xbac7420, __VMLINUX_SYMBOL_STR(dev_close) },
	{ 0x8d6ed834, __VMLINUX_SYMBOL_STR(cfg80211_cqm_pktloss_notify) },
	{ 0x2141089d, __VMLINUX_SYMBOL_STR(cfg80211_reg_can_beacon_relax) },
	{ 0x26641498, __VMLINUX_SYMBOL_STR(cfg80211_michael_mic_failure) },
	{ 0xf1969a8e, __VMLINUX_SYMBOL_STR(__usecs_to_jiffies) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xa836a7b3, __VMLINUX_SYMBOL_STR(cfg80211_report_obss_beacon) },
	{ 0xdc3fcbc9, __VMLINUX_SYMBOL_STR(__sw_hweight8) },
	{ 0xd4034828, __VMLINUX_SYMBOL_STR(system_freezable_wq) },
	{ 0x8bfd8946, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0xd4c76a76, __VMLINUX_SYMBOL_STR(cfg80211_iter_combinations) },
	{ 0x253a7089, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x3d470c4d, __VMLINUX_SYMBOL_STR(cfg80211_chandef_compatible) },
	{ 0xf3ff406d, __VMLINUX_SYMBOL_STR(cfg80211_ibss_joined) },
	{ 0xceacaee5, __VMLINUX_SYMBOL_STR(cfg80211_rx_spurious_frame) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x8b9018f8, __VMLINUX_SYMBOL_STR(kernel_param_lock) },
	{ 0xd0cb25e0, __VMLINUX_SYMBOL_STR(cfg80211_assoc_timeout) },
	{ 0x52e9aee3, __VMLINUX_SYMBOL_STR(crypto_aead_setkey) },
	{ 0x9f46ced8, __VMLINUX_SYMBOL_STR(__sw_hweight64) },
	{ 0x74b94edf, __VMLINUX_SYMBOL_STR(cfg80211_get_drvinfo) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x4c0745bf, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x6c209eab, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0x50214c28, __VMLINUX_SYMBOL_STR(ieee80211_bss_get_ie) },
	{ 0xc841ab60, __VMLINUX_SYMBOL_STR(cfg80211_tdls_oper_request) },
	{ 0x849c5892, __VMLINUX_SYMBOL_STR(cfg80211_check_combinations) },
	{ 0x5b06a048, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xf66ea036, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0x111af510, __VMLINUX_SYMBOL_STR(cfg80211_gtk_rekey_notify) },
	{ 0x5407b247, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0x48df6c8f, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x79a2285f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xa45a5570, __VMLINUX_SYMBOL_STR(cfg80211_tx_mlme_mgmt) },
	{ 0x8fc796ea, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0x4675a907, __VMLINUX_SYMBOL_STR(cfg80211_ch_switch_notify) },
	{ 0x8bc7c962, __VMLINUX_SYMBOL_STR(cfg80211_put_bss) },
	{ 0x2799a19f, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xfe029963, __VMLINUX_SYMBOL_STR(unregister_inetaddr_notifier) },
	{ 0x5fb8cf7d, __VMLINUX_SYMBOL_STR(wiphy_register) },
	{ 0x9b913cba, __VMLINUX_SYMBOL_STR(trace_event_ignore_this_pid) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x94da4e19, __VMLINUX_SYMBOL_STR(cfg80211_rx_mlme_mgmt) },
	{ 0xff3878e9, __VMLINUX_SYMBOL_STR(cfg80211_classify8021d) },
	{ 0x410f53b0, __VMLINUX_SYMBOL_STR(skb_checksum_help) },
	{ 0x4269ffd8, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x711d59f6, __VMLINUX_SYMBOL_STR(cfg80211_ready_on_channel) },
	{ 0xabfcb4c3, __VMLINUX_SYMBOL_STR(flush_delayed_work) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x4a0d159b, __VMLINUX_SYMBOL_STR(wiphy_new_nm) },
	{ 0x70b6dfa3, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0xf71521ba, __VMLINUX_SYMBOL_STR(atomic64_add_return) },
	{ 0x89f6f72d, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x5e5ea2cb, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xb678366f, __VMLINUX_SYMBOL_STR(int_sqrt) },
	{ 0x50fad434, __VMLINUX_SYMBOL_STR(round_jiffies_up) },
	{ 0x495457ff, __VMLINUX_SYMBOL_STR(cfg80211_calculate_bitrate) },
	{ 0x39d64870, __VMLINUX_SYMBOL_STR(trace_event_buffer_commit) },
	{ 0x262d4fca, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xb14fc203, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x82fa4cd3, __VMLINUX_SYMBOL_STR(netdev_set_default_ethtool_ops) },
	{ 0x83a5b78b, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x95738e40, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x1d44fa14, __VMLINUX_SYMBOL_STR(cfg80211_new_sta) },
	{ 0x3e285fec, __VMLINUX_SYMBOL_STR(cfg80211_chandef_valid) },
	{ 0xca07ac4b, __VMLINUX_SYMBOL_STR(event_triggers_call) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x60813f95, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0x53d474bf, __VMLINUX_SYMBOL_STR(crypto_alloc_aead) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0x35744920, __VMLINUX_SYMBOL_STR(rhashtable_init) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x1eb9516e, __VMLINUX_SYMBOL_STR(round_jiffies_relative) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x5f8517b9, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x7e30aea0, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x387b1832, __VMLINUX_SYMBOL_STR(dev_alloc_name) },
	{ 0x76d9bf11, __VMLINUX_SYMBOL_STR(crc32_be) },
	{ 0xc90fde22, __VMLINUX_SYMBOL_STR(ieee80211_chandef_to_operating_class) },
	{ 0x8a7062a5, __VMLINUX_SYMBOL_STR(ieee80211_mandatory_rates) },
	{ 0x47cb50eb, __VMLINUX_SYMBOL_STR(cfg80211_ref_bss) },
	{ 0x6128b5fc, __VMLINUX_SYMBOL_STR(__printk_ratelimit) },
	{ 0x1ff6c8b8, __VMLINUX_SYMBOL_STR(perf_trace_buf_prepare) },
	{ 0x3e9110fa, __VMLINUX_SYMBOL_STR(__hw_addr_unsync) },
	{ 0x944f8bbc, __VMLINUX_SYMBOL_STR(ieee80211_amsdu_to_8023s) },
	{ 0x12299fec, __VMLINUX_SYMBOL_STR(led_trigger_blink_oneshot) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0x46ce479b, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x70b2ac36, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x62afffb1, __VMLINUX_SYMBOL_STR(cfg80211_cac_event) },
	{ 0x84cb75d, __VMLINUX_SYMBOL_STR(cfg80211_remain_on_channel_expired) },
	{ 0x68ef5a8b, __VMLINUX_SYMBOL_STR(netif_wake_subqueue) },
	{ 0x7b3ea846, __VMLINUX_SYMBOL_STR(trace_raw_output_prep) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x3f4a0b2, __VMLINUX_SYMBOL_STR(skb_clone_sk) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x3c93ea25, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x569e9120, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xe281cb37, __VMLINUX_SYMBOL_STR(cfg80211_sched_scan_stopped) },
	{ 0xb233762c, __VMLINUX_SYMBOL_STR(atomic64_set) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x57674fd7, __VMLINUX_SYMBOL_STR(__sw_hweight16) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x102002fb, __VMLINUX_SYMBOL_STR(cfg80211_scan_done) },
	{ 0x26029b16, __VMLINUX_SYMBOL_STR(cfg80211_chandef_dfs_required) },
	{ 0xcdb41bcf, __VMLINUX_SYMBOL_STR(idr_init) },
	{ 0x90a37525, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x124f12d7, __VMLINUX_SYMBOL_STR(__wait_rcu_gp) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x4f37afda, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x20fee7c0, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x1cc5568d, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0xab38707b, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x6ca1d1a4, __VMLINUX_SYMBOL_STR(atomic64_read) },
	{ 0x88dde7dd, __VMLINUX_SYMBOL_STR(cfg80211_rx_unexpected_4addr_frame) },
	{ 0x1b5bbfdc, __VMLINUX_SYMBOL_STR(cfg80211_rx_assoc_resp) },
	{ 0xf389fe60, __VMLINUX_SYMBOL_STR(__hw_addr_init) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x214b231c, __VMLINUX_SYMBOL_STR(skb_complete_wifi_ack) },
	{ 0xb442f6b3, __VMLINUX_SYMBOL_STR(cfg80211_sched_scan_results) },
	{ 0x2e6df2d6, __VMLINUX_SYMBOL_STR(cfg80211_inform_bss_frame_data) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cfg80211";


MODULE_INFO(srcversion, "CC38A52B174B9A8D98E69D0");