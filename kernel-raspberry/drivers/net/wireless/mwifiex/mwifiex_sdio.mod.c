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
	{ 0x2b3d523c, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0x9be4e862, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x422316be, __VMLINUX_SYMBOL_STR(mwifiex_cancel_hs) },
	{ 0x469d8f59, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0xb0cbce0c, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0xa20b8a74, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x73400a82, __VMLINUX_SYMBOL_STR(mmc_hw_reset) },
	{ 0x4fe38dbd, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x24f2b6a1, __VMLINUX_SYMBOL_STR(mwifiex_disable_auto_ds) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x21fde7a3, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xb409bce9, __VMLINUX_SYMBOL_STR(mwifiex_process_sleep_confirm_resp) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xf97139a7, __VMLINUX_SYMBOL_STR(mwifiex_main_process) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0xce1b0ac9, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0xc4189182, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x15ded068, __VMLINUX_SYMBOL_STR(_mwifiex_dbg) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x873f09c, __VMLINUX_SYMBOL_STR(mwifiex_add_card) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x253a7089, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x31bd9748, __VMLINUX_SYMBOL_STR(mwifiex_alloc_dma_align_buf) },
	{ 0x9a6476a2, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0xe5400e27, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0xa9ff838b, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0x5b06a048, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x70562dcb, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xf829b85a, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x364b3fff, __VMLINUX_SYMBOL_STR(up) },
	{ 0xa1636dc, __VMLINUX_SYMBOL_STR(mwifiex_handle_rx_packet) },
	{ 0x9466d20c, __VMLINUX_SYMBOL_STR(mwifiex_deauthenticate_all) },
	{ 0xb4581127, __VMLINUX_SYMBOL_STR(mwifiex_remove_card) },
	{ 0x52617e51, __VMLINUX_SYMBOL_STR(mwifiex_enable_hs) },
	{ 0x7259aa20, __VMLINUX_SYMBOL_STR(mwifiex_upload_device_dump) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x8095a189, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x887f20a8, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x18fb1341, __VMLINUX_SYMBOL_STR(mwifiex_drv_info_dump) },
	{ 0x4f37afda, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0xa2418315, __VMLINUX_SYMBOL_STR(mwifiex_init_shutdown_fw) },
	{ 0x187a2cc7, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0x5ad4901, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x7c1f7a91, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mwifiex";

MODULE_ALIAS("sdio:c*v02DFd9116*");
MODULE_ALIAS("sdio:c*v02DFd9119*");
MODULE_ALIAS("sdio:c*v02DFd9129*");
MODULE_ALIAS("sdio:c*v02DFd912D*");
MODULE_ALIAS("sdio:c*v02DFd9135*");
MODULE_ALIAS("sdio:c*v02DFd9139*");
MODULE_ALIAS("sdio:c*v02DFd9141*");

MODULE_INFO(srcversion, "9A22339DEBDD9B867F6763D");
