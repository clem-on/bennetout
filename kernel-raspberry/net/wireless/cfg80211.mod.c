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
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xffc65e5c, __VMLINUX_SYMBOL_STR(perf_tp_event) },
	{ 0x8a490c90, __VMLINUX_SYMBOL_STR(rfkill_set_sw_state) },
	{ 0x414382a, __VMLINUX_SYMBOL_STR(get_net_ns_by_fd) },
	{ 0x23f9af32, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x47884890, __VMLINUX_SYMBOL_STR(system_power_efficient_wq) },
	{ 0x4718ae7b, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xe7dbffbf, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x9ea0a346, __VMLINUX_SYMBOL_STR(genl_unregister_family) },
	{ 0xfa599bb2, __VMLINUX_SYMBOL_STR(netlink_register_notifier) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xc6d434f0, __VMLINUX_SYMBOL_STR(dev_change_net_namespace) },
	{ 0xce5acd6d, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xdf54a8f7, __VMLINUX_SYMBOL_STR(netlink_unregister_notifier) },
	{ 0x3186a04b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x5841a584, __VMLINUX_SYMBOL_STR(__genl_register_family) },
	{ 0x4cabed9, __VMLINUX_SYMBOL_STR(rfkill_register) },
	{ 0x4772b8d9, __VMLINUX_SYMBOL_STR(trace_event_buffer_reserve) },
	{ 0xd6b2f75, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0x2fd42850, __VMLINUX_SYMBOL_STR(debugfs_rename) },
	{ 0x78ab1f54, __VMLINUX_SYMBOL_STR(get_net_ns_by_pid) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xaf3a84ff, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x1bccdd6e, __VMLINUX_SYMBOL_STR(__put_net) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xc4189182, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x8f8e633a, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xf6a07197, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x3df37a55, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd793a0cb, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x98e68eca, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x8fe3a411, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x3ba21e42, __VMLINUX_SYMBOL_STR(rfkill_alloc) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x5152e605, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xffffad3e, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xf3342c6e, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0x1a1c4082, __VMLINUX_SYMBOL_STR(mod_delayed_work_on) },
	{ 0x97999817, __VMLINUX_SYMBOL_STR(rfkill_set_hw_state) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0x9a191433, __VMLINUX_SYMBOL_STR(trace_event_reg) },
	{ 0x66940955, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x3502c648, __VMLINUX_SYMBOL_STR(wireless_send_event) },
	{ 0x53f1d5a6, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x85c3987f, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xbac7420, __VMLINUX_SYMBOL_STR(dev_close) },
	{ 0xf04e2d5a, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0xfeafd0c, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x710dfdf, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x40f4335a, __VMLINUX_SYMBOL_STR(init_uts_ns) },
	{ 0x3939f8f0, __VMLINUX_SYMBOL_STR(rfkill_pause_polling) },
	{ 0x99fb99d1, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x7073c5fa, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x253a7089, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x433fb974, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x5addeb10, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0x10eba855, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xd6261c9f, __VMLINUX_SYMBOL_STR(kobject_uevent_env) },
	{ 0xb9df4c50, __VMLINUX_SYMBOL_STR(inet_csk_get_port) },
	{ 0xc781bd9f, __VMLINUX_SYMBOL_STR(rfkill_resume_polling) },
	{ 0xd1bd8673, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x2799a19f, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xfc5db200, __VMLINUX_SYMBOL_STR(net_ns_type_operations) },
	{ 0xf59adb0c, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0x9b913cba, __VMLINUX_SYMBOL_STR(trace_event_ignore_this_pid) },
	{ 0xbb4f295d, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x4269ffd8, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x1e8fac8e, __VMLINUX_SYMBOL_STR(wireless_nlevent_flush) },
	{ 0x39d64870, __VMLINUX_SYMBOL_STR(trace_event_buffer_commit) },
	{ 0x262d4fca, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x3d64ee17, __VMLINUX_SYMBOL_STR(device_rename) },
	{ 0xbfbd0cc6, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xca07ac4b, __VMLINUX_SYMBOL_STR(event_triggers_call) },
	{ 0x14f9eb99, __VMLINUX_SYMBOL_STR(genlmsg_multicast_allns) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdb68bbad, __VMLINUX_SYMBOL_STR(rfkill_destroy) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x5f8517b9, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0xf87bbe9c, __VMLINUX_SYMBOL_STR(genlmsg_put) },
	{ 0x1465333c, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0x1ff6c8b8, __VMLINUX_SYMBOL_STR(perf_trace_buf_prepare) },
	{ 0xc0763484, __VMLINUX_SYMBOL_STR(rfkill_blocked) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x7b3ea846, __VMLINUX_SYMBOL_STR(trace_raw_output_prep) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x3c93ea25, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0x569e9120, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x957a145f, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x4f37afda, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x83eb21c, __VMLINUX_SYMBOL_STR(rfkill_unregister) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0xab38707b, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x91a34e6f, __VMLINUX_SYMBOL_STR(__sock_create) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rfkill";


MODULE_INFO(srcversion, "C7228D083F68646F25C7A9B");
