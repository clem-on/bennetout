#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5a7ba343, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xb3e5be23, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc5303fb3, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xd3e9a619, __VMLINUX_SYMBOL_STR(dmaengine_unmap_put) },
	{ 0xe9f7455f, __VMLINUX_SYMBOL_STR(async_tx_submit) },
	{ 0xeb46e23f, __VMLINUX_SYMBOL_STR(dmaengine_get_unmap_data) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9d7dcc82, __VMLINUX_SYMBOL_STR(__async_tx_find_channel) },
	{ 0x437bcafb, __VMLINUX_SYMBOL_STR(async_tx_quiesce) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=async_tx";


MODULE_INFO(srcversion, "F7286476E79DC641DB3DC4A");
