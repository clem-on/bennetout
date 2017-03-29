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
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8e5d5440, __VMLINUX_SYMBOL_STR(usb_add_config) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf2c3a46c, __VMLINUX_SYMBOL_STR(__platform_driver_probe) },
	{ 0x3df37a55, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x5edf0b91, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0xcea122c0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x275b871a, __VMLINUX_SYMBOL_STR(usb_composite_overwrite_options) },
	{ 0x48df6c8f, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x69be44fe, __VMLINUX_SYMBOL_STR(usb_composite_probe) },
	{ 0xc73c40f7, __VMLINUX_SYMBOL_STR(usb_add_function) },
	{ 0x84c13478, __VMLINUX_SYMBOL_STR(usb_put_function) },
	{ 0xd9357b65, __VMLINUX_SYMBOL_STR(usb_composite_unregister) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x84ad3523, __VMLINUX_SYMBOL_STR(usb_get_function) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe8cb0775, __VMLINUX_SYMBOL_STR(usb_string_ids_tab) },
	{ 0x4dae31a, __VMLINUX_SYMBOL_STR(usb_get_function_instance) },
	{ 0xed7f63e5, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0xb38ae9ce, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x8ba27e52, __VMLINUX_SYMBOL_STR(usb_remove_function) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite";


MODULE_INFO(srcversion, "B0A1DDD3434741313D3AFE6");
