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
	{ 0x1148c08e, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xa9280a1e, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x8d58af6c, __VMLINUX_SYMBOL_STR(devm_rtc_device_register) },
	{ 0x652fbf24, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x70b2ac36, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x5838f6c9, __VMLINUX_SYMBOL_STR(rtc_valid_tm) },
	{ 0xb6936ffe, __VMLINUX_SYMBOL_STR(_bcd2bin) },
	{ 0x48df6c8f, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x80ca5026, __VMLINUX_SYMBOL_STR(_bin2bcd) },
	{ 0x8ab6b2c6, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xcea122c0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb68c9d19, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:isl12022");
MODULE_ALIAS("of:N*T*Cisl,isl12022*");
MODULE_ALIAS("of:N*T*Cisil,isl12022*");

MODULE_INFO(srcversion, "DADD3CE67F18BC4BDAEAF8D");
