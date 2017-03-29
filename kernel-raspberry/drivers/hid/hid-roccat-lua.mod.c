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
	{ 0xef50169, __VMLINUX_SYMBOL_STR(hid_unregister_driver) },
	{ 0xc3b31543, __VMLINUX_SYMBOL_STR(__hid_register_driver) },
	{ 0xd1d35726, __VMLINUX_SYMBOL_STR(roccat_common2_receive) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x64abe82d, __VMLINUX_SYMBOL_STR(roccat_common2_send) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xda58d6c8, __VMLINUX_SYMBOL_STR(sysfs_create_bin_file) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xa4faf623, __VMLINUX_SYMBOL_STR(hid_connect) },
	{ 0xcea122c0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x64b90202, __VMLINUX_SYMBOL_STR(hid_open_report) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x2e0e7092, __VMLINUX_SYMBOL_STR(hid_disconnect) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5495d564, __VMLINUX_SYMBOL_STR(sysfs_remove_bin_file) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hid-roccat-common";

MODULE_ALIAS("hid:b0003g*v00001E7Dp00002C2E");

MODULE_INFO(srcversion, "B71DE19A923E9171A6891B5");
