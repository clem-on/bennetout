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
	{ 0x7c2c3051, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x2762eaf9, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x48df6c8f, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xcea122c0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xa6b0f817, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x6f22b514, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x7c1e504d, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x96be1a85, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0x4aa684dc, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x644f09b3, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x6a68fdd, __VMLINUX_SYMBOL_STR(ir_raw_event_store_with_filter) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x60f71cfa, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3bd0ccb0, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xc0acaaa0, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x3069c7d7, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0x579facce, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x70b2ac36, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xcf9fdbd4, __VMLINUX_SYMBOL_STR(ir_raw_event_handle) },
	{ 0xfd987f5a, __VMLINUX_SYMBOL_STR(ir_raw_event_store) },
	{ 0x80d817ab, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x1f9d0e3, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rc-core";

MODULE_ALIAS("usb:v1781p0938d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "EEB6D46232BA53FADEF87B3");