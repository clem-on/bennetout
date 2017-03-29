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
	{ 0xe7dbffbf, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x619047ec, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0xb86918d4, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0xa1d3e71e, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0x4be1bf5a, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0x1f010e89, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x49c0e364, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0xf5c45125, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0xfdd6f326, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0x47e63c8e, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x249e0d7, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0xfdee0b01, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0x5777f70d, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0xa996f95, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0x5183ea6b, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0xe4d9eb8, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0xf81a9f16, __VMLINUX_SYMBOL_STR(vb2_ioctl_reqbufs) },
	{ 0x7c2c3051, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x2762eaf9, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x118c0521, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x514ed918, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x402121bb, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_custom) },
	{ 0xe55ae61, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0xafc487cd, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
	{ 0xf30afd02, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x649dace1, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x84155de8, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xe6f92008, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0x70245ed7, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x6f22b514, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x39722d21, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x8cc1e73b, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x693be04, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x6a34a054, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x7e1266b9, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xdf6768f7, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xd25fda63, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x74ca77af, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xc0acaaa0, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x579facce, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x48df6c8f, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xdc2c4eb3, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2412bd74, __VMLINUX_SYMBOL_STR(__v4l2_ctrl_s_ctrl) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x34d7bdf4, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xe635d625, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x58c41a95, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xcea122c0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x1f9d0e3, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videodev,videobuf2-vmalloc,videobuf2-core,v4l2-common";

MODULE_ALIAS("usb:v1943p2255d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1943p2257d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "3672830A13380BCD60BD47E");
