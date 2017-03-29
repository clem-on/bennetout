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
	{ 0xf7c7dc3f, __VMLINUX_SYMBOL_STR(ip_set_type_unregister) },
	{ 0x124f12d7, __VMLINUX_SYMBOL_STR(__wait_rcu_gp) },
	{ 0x4b15b2a6, __VMLINUX_SYMBOL_STR(ip_set_type_register) },
	{ 0x7924b6de, __VMLINUX_SYMBOL_STR(ip_set_hostmask_map) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x6344eaf6, __VMLINUX_SYMBOL_STR(ip_set_alloc) },
	{ 0x5d401737, __VMLINUX_SYMBOL_STR(ip_set_elem_len) },
	{ 0x7d331ddc, __VMLINUX_SYMBOL_STR(ip_set_get_extensions) },
	{ 0xa293f8a6, __VMLINUX_SYMBOL_STR(ip_set_get_ipaddr4) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xb233762c, __VMLINUX_SYMBOL_STR(atomic64_set) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x8ab4079e, __VMLINUX_SYMBOL_STR(atomic64_add) },
	{ 0x6ca1d1a4, __VMLINUX_SYMBOL_STR(atomic64_read) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x397f6231, __VMLINUX_SYMBOL_STR(ip_set_free) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xc4189182, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x41ba6b2a, __VMLINUX_SYMBOL_STR(ip_set_put_extensions) },
	{ 0x66940955, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0xcc001bd9, __VMLINUX_SYMBOL_STR(ip_set_extensions) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_set";


MODULE_INFO(srcversion, "CEC37FAD117BDBD9DC4877F");
