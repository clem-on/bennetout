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
	{ 0x231627c7, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0xf79573b4, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x27f90a9d, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x1709e434, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0xacbb583d, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0x38164a42, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0xc63940e8, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x8419b14d, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0xb4f1ed01, __VMLINUX_SYMBOL_STR(usbnet_set_settings) },
	{ 0xff6b4de0, __VMLINUX_SYMBOL_STR(usbnet_get_settings) },
	{ 0x4157215c, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x2b0d2fbe, __VMLINUX_SYMBOL_STR(usbnet_change_mtu) },
	{ 0x16a5e4e4, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x2c25d129, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x99c60112, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0xbf384ad7, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x7c2c3051, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x2762eaf9, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xd749b730, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0x89f38d77, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc9a6e301, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x339ecc8a, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0x4c759827, __VMLINUX_SYMBOL_STR(byte_rev_table) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xb08763f1, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0x2d18534c, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x5b111723, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0xe3791cfa, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0x32c551b0, __VMLINUX_SYMBOL_STR(mii_check_media) },
	{ 0xbfbd0cc6, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x214d717d, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x253a7089, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x57b581ca, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x21fde7a3, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xf66ea036, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0FE6p9700d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "FC7BD07740E01F718979223");
