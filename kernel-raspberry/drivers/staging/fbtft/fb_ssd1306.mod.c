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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5a7ba343, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xb38ae9ce, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x619f08d2, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x17c50734, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x320b53a8, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0x48df6c8f, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xcea122c0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xde910664, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0x788c2bf1, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8d163020, __VMLINUX_SYMBOL_STR(fbtft_probe_common) },
	{ 0x9d392d4d, __VMLINUX_SYMBOL_STR(fbtft_remove_common) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fbtft";

MODULE_ALIAS("of:N*T*Csolomon,ssd1306*");

MODULE_INFO(srcversion, "31641403FD3137BC6675F23");
