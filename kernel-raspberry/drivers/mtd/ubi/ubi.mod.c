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
	{ 0x7aac6f13, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xf7e79095, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x44fe75f2, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x26c06d6c, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x5746afa5, __VMLINUX_SYMBOL_STR(mtd_block_isbad) },
	{ 0x4718ae7b, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xb3e5be23, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0x713dfb50, __VMLINUX_SYMBOL_STR(mtd_get_device_size) },
	{ 0x6a8b0079, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x1fde765f, __VMLINUX_SYMBOL_STR(blocking_notifier_chain_unregister) },
	{ 0xc7e6b3d6, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xec89fa55, __VMLINUX_SYMBOL_STR(mtd_write) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xaf3a84ff, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xbff4f13f, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x9101360b, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x58ee31a3, __VMLINUX_SYMBOL_STR(down_write_trylock) },
	{ 0x50a82b6, __VMLINUX_SYMBOL_STR(mtd_erase) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x8d38fca, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x7bde4a0a, __VMLINUX_SYMBOL_STR(kern_path) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x352a4ebd, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0x62adbe86, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xcaba357f, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x27e8e161, __VMLINUX_SYMBOL_STR(mtd_read) },
	{ 0x5152e605, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xf3342c6e, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0x9d6d3ac, __VMLINUX_SYMBOL_STR(put_mtd_device) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0x5be2e9a6, __VMLINUX_SYMBOL_STR(fixed_size_llseek) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x53f1d5a6, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x1d7c24fa, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0x373db350, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0xe559c809, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0x6f3db115, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x5addeb10, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0xbc5c84b5, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x37ea8914, __VMLINUX_SYMBOL_STR(mtd_block_markbad) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x21eba563, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xdc58973f, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x79a2285f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0xbb4f295d, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x47e93a76, __VMLINUX_SYMBOL_STR(blocking_notifier_call_chain) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0xbc7b90de, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xfc9fd1b6, __VMLINUX_SYMBOL_STR(get_mtd_device) },
	{ 0x7e35586b, __VMLINUX_SYMBOL_STR(blocking_notifier_chain_register) },
	{ 0x9669cc52, __VMLINUX_SYMBOL_STR(path_put) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xde9cae66, __VMLINUX_SYMBOL_STR(get_mtd_device_nm) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0xe512b542, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x83a5b78b, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x28d6861d, __VMLINUX_SYMBOL_STR(__vmalloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9e61bb05, __VMLINUX_SYMBOL_STR(set_freezable) },
	{ 0x1db7dc40, __VMLINUX_SYMBOL_STR(pgprot_kernel) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xca9360b5, __VMLINUX_SYMBOL_STR(rb_next) },
	{ 0xcfe90fbb, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x957a145f, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xdf2c2742, __VMLINUX_SYMBOL_STR(rb_last) },
	{ 0x67720bd4, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x719e5acf, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0xd9d10196, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x760a0f4f, __VMLINUX_SYMBOL_STR(yield) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mtd";


MODULE_INFO(srcversion, "F377A573A2B4AEA0A7CED65");