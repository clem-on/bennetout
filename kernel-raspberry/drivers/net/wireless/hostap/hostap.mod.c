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
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xfd49bdae, __VMLINUX_SYMBOL_STR(iw_handler_set_thrspy) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x927f4283, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xeaba5254, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xe7dbffbf, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x8a151930, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x729c4c85, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xb4b6d63, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xa8cde9a7, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xc894a799, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x214d717d, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x4a722b88, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0xd976afbf, __VMLINUX_SYMBOL_STR(lib80211_crypt_delayed_deinit) },
	{ 0x59fd151c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x2459616f, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xbe99a567, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x21fde7a3, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xf1cf45c4, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x2eab272c, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xc4189182, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xe73f9b94, __VMLINUX_SYMBOL_STR(proc_remove) },
	{ 0x8f8e633a, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x7915d94f, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xe809e6c3, __VMLINUX_SYMBOL_STR(wireless_spy_update) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xac992d45, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x487ca03d, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xcff5532, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x5152e605, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x5cf6f203, __VMLINUX_SYMBOL_STR(iw_handler_get_spy) },
	{ 0x3f8dcf47, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x4de96e2a, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x3502c648, __VMLINUX_SYMBOL_STR(wireless_send_event) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x85c3987f, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xbac7420, __VMLINUX_SYMBOL_STR(dev_close) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x253a7089, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x433fb974, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xd29f8e62, __VMLINUX_SYMBOL_STR(dev_open) },
	{ 0xdc58973f, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x4b120d3, __VMLINUX_SYMBOL_STR(lib80211_get_crypto_ops) },
	{ 0x5b06a048, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x53a887db, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0xcb7c63fa, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0xde5ecf8a, __VMLINUX_SYMBOL_STR(eth_header_cache_update) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x3388b912, __VMLINUX_SYMBOL_STR(iw_handler_get_thrspy) },
	{ 0x4269ffd8, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x89f6f72d, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x262d4fca, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xb14fc203, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x95738e40, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xff1e9dd8, __VMLINUX_SYMBOL_STR(seq_list_start) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0x99699c8b, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x16a5e4e4, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xfe634f58, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x48be2b87, __VMLINUX_SYMBOL_STR(iw_handler_set_spy) },
	{ 0xc6ac0247, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x38fc8c7b, __VMLINUX_SYMBOL_STR(eth_header_cache) },
	{ 0x40000904, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x46ce479b, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xf346231f, __VMLINUX_SYMBOL_STR(seq_list_start_head) },
	{ 0x60800d16, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x3acf34d3, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0xe7d4daac, __VMLINUX_SYMBOL_STR(seq_list_next) },
	{ 0x569e9120, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x90a37525, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x4f37afda, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0x592c37ec, __VMLINUX_SYMBOL_STR(eth_header) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xd9d10196, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xd07c6f5b, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=lib80211";


MODULE_INFO(srcversion, "76993E3A61EDBAF21D5F50A");