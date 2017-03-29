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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9ce65b56, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x17c50734, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xcea122c0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x40c5ed00, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_list) },
	{ 0x7c2f217, __VMLINUX_SYMBOL_STR(snd_soc_unregister_card) },
	{ 0xd9d73e8d, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_bclk_ratio) },
	{ 0x4b2ffc1b, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_sysclk) },
	{ 0xb38ae9ce, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x4b92324d, __VMLINUX_SYMBOL_STR(snd_soc_register_card) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";

MODULE_ALIAS("of:N*T*Crpi,rpi-proto*");

MODULE_INFO(srcversion, "DD5969D7AE052AAA62AFDCF");
