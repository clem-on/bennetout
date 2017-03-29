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
	{ 0x8c0f009d, __VMLINUX_SYMBOL_STR(blkdev_issue_discard) },
	{ 0x7aac6f13, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x77c78409, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0x8ac9682f, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x96728834, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x9b388444, __VMLINUX_SYMBOL_STR(get_zeroed_page) },
	{ 0x410c0553, __VMLINUX_SYMBOL_STR(generic_getxattr) },
	{ 0x26c06d6c, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x5c96d915, __VMLINUX_SYMBOL_STR(unload_nls) },
	{ 0x5928e0b3, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x4c97450b, __VMLINUX_SYMBOL_STR(make_bad_inode) },
	{ 0x927f4283, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x463dfef7, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0xb3e5be23, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x1abf3496, __VMLINUX_SYMBOL_STR(dquot_writeback_dquots) },
	{ 0xa02d4fdf, __VMLINUX_SYMBOL_STR(__set_page_dirty_nobuffers) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xeaba5254, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xe7dbffbf, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x7381c50e, __VMLINUX_SYMBOL_STR(filemap_fdatawait) },
	{ 0x1b17e06c, __VMLINUX_SYMBOL_STR(kstrtoll) },
	{ 0x26f6ebc7, __VMLINUX_SYMBOL_STR(filemap_write_and_wait_range) },
	{ 0x879ef316, __VMLINUX_SYMBOL_STR(dquot_quotactl_ops) },
	{ 0xa8cabb9e, __VMLINUX_SYMBOL_STR(posix_acl_to_xattr) },
	{ 0xdcf34a28, __VMLINUX_SYMBOL_STR(generic_fh_to_parent) },
	{ 0xe0d808, __VMLINUX_SYMBOL_STR(dquot_file_open) },
	{ 0x729c4c85, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xb4b6d63, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xa8cde9a7, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xd93836c1, __VMLINUX_SYMBOL_STR(is_bad_inode) },
	{ 0x954947f5, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0xe6e8f0a2, __VMLINUX_SYMBOL_STR(posix_acl_access_xattr_handler) },
	{ 0xd904bca9, __VMLINUX_SYMBOL_STR(posix_acl_update_mode) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0x6b3dc155, __VMLINUX_SYMBOL_STR(__lock_page) },
	{ 0xe1b61b31, __VMLINUX_SYMBOL_STR(filemap_write_and_wait) },
	{ 0xdffdbd17, __VMLINUX_SYMBOL_STR(__lock_buffer) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x59fd151c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xe18deda5, __VMLINUX_SYMBOL_STR(nobh_write_begin) },
	{ 0xbe99a567, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x815131ba, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0xb97c1202, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xc479b32a, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x8b0e91c9, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x770e714a, __VMLINUX_SYMBOL_STR(__dquot_free_space) },
	{ 0x85c4d86d, __VMLINUX_SYMBOL_STR(page_symlink_inode_operations) },
	{ 0xd27de18d, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x18cc985f, __VMLINUX_SYMBOL_STR(__getblk_gfp) },
	{ 0x7f6e18e3, __VMLINUX_SYMBOL_STR(igrab) },
	{ 0x2a555034, __VMLINUX_SYMBOL_STR(unlock_buffer) },
	{ 0xb88b8d73, __VMLINUX_SYMBOL_STR(generic_setxattr) },
	{ 0x84dd6c89, __VMLINUX_SYMBOL_STR(__dquot_alloc_space) },
	{ 0x9d412a1e, __VMLINUX_SYMBOL_STR(redirty_page_for_writepage) },
	{ 0x2eab272c, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0x40c7247c, __VMLINUX_SYMBOL_STR(si_meminfo) },
	{ 0xfdc67dd9, __VMLINUX_SYMBOL_STR(set_page_dirty) },
	{ 0xbff4f13f, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xa5a51f4d, __VMLINUX_SYMBOL_STR(truncate_setsize) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xbf1faebe, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x9101360b, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x68e1cc93, __VMLINUX_SYMBOL_STR(end_page_writeback) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x183fa88b, __VMLINUX_SYMBOL_STR(mempool_alloc_slab) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x7a2add7d, __VMLINUX_SYMBOL_STR(current_kernel_time64) },
	{ 0xcdedb867, __VMLINUX_SYMBOL_STR(inode_owner_or_capable) },
	{ 0x2e036367, __VMLINUX_SYMBOL_STR(mpage_readpages) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xcff5532, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0xc8563724, __VMLINUX_SYMBOL_STR(mpage_readpage) },
	{ 0xf480174d, __VMLINUX_SYMBOL_STR(inode_add_bytes) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xadca789f, __VMLINUX_SYMBOL_STR(dquot_alloc_inode) },
	{ 0x62adbe86, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0x5bf0c304, __VMLINUX_SYMBOL_STR(__bread_gfp) },
	{ 0x44a83f81, __VMLINUX_SYMBOL_STR(current_fs_time) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xcaba357f, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xefa33f60, __VMLINUX_SYMBOL_STR(posix_acl_chmod) },
	{ 0x8c135b4c, __VMLINUX_SYMBOL_STR(d_obtain_alias) },
	{ 0x5152e605, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xa55fcd47, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0x7c1372e8, __VMLINUX_SYMBOL_STR(panic) },
	{ 0xac9952b, __VMLINUX_SYMBOL_STR(mpage_writepages) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x1d7c24fa, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa0d22bf8, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x43fa3d65, __VMLINUX_SYMBOL_STR(get_cached_acl) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xc3b1e27, __VMLINUX_SYMBOL_STR(setattr_copy) },
	{ 0x284f1a7e, __VMLINUX_SYMBOL_STR(dquot_resume) },
	{ 0x8a4912fb, __VMLINUX_SYMBOL_STR(insert_inode_locked) },
	{ 0xf757f8df, __VMLINUX_SYMBOL_STR(sync_dirty_buffer) },
	{ 0xbd5049a, __VMLINUX_SYMBOL_STR(truncate_pagecache) },
	{ 0x2def175c, __VMLINUX_SYMBOL_STR(blkdev_get_by_dev) },
	{ 0x113884d8, __VMLINUX_SYMBOL_STR(set_cached_acl) },
	{ 0x8a99a016, __VMLINUX_SYMBOL_STR(mempool_free_slab) },
	{ 0x42d5bed5, __VMLINUX_SYMBOL_STR(wait_on_page_bit) },
	{ 0xdbc19005, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x8e7b1605, __VMLINUX_SYMBOL_STR(generic_file_read_iter) },
	{ 0x6f3db115, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xbc5c84b5, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x1edec889, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x26a21543, __VMLINUX_SYMBOL_STR(posix_acl_create) },
	{ 0xbe8c9526, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x98430240, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x885f862a, __VMLINUX_SYMBOL_STR(generic_removexattr) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x9d0ec1e1, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x724bc35c, __VMLINUX_SYMBOL_STR(page_follow_link_light) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x9a4e1ec6, __VMLINUX_SYMBOL_STR(mnt_drop_write_file) },
	{ 0xd4772ace, __VMLINUX_SYMBOL_STR(submit_bio) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x79a2285f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xf725ea8f, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x84d96091, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0x1cd0f6c0, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xe76f6ab2, __VMLINUX_SYMBOL_STR(dquot_operations) },
	{ 0x7fe96388, __VMLINUX_SYMBOL_STR(dquot_initialize) },
	{ 0x39c344ab, __VMLINUX_SYMBOL_STR(generic_file_mmap) },
	{ 0x364676a6, __VMLINUX_SYMBOL_STR(block_write_full_page) },
	{ 0x95c59778, __VMLINUX_SYMBOL_STR(sync_blockdev) },
	{ 0x6f7cd9cd, __VMLINUX_SYMBOL_STR(truncate_inode_pages_final) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xc96e878b, __VMLINUX_SYMBOL_STR(load_nls) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x638e7d39, __VMLINUX_SYMBOL_STR(posix_acl_from_xattr) },
	{ 0x2b90cdaa, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x625d912, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x575e0ca8, __VMLINUX_SYMBOL_STR(mnt_want_write_file) },
	{ 0xf9ada1d7, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x45dcb892, __VMLINUX_SYMBOL_STR(inode_newsize_ok) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0xbc7b90de, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xb36e3352, __VMLINUX_SYMBOL_STR(inode_change_ok) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x920664c8, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0x851a0b0, __VMLINUX_SYMBOL_STR(dquot_drop) },
	{ 0x83a5b78b, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x57534d41, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x74a921a3, __VMLINUX_SYMBOL_STR(dquot_transfer) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x7e29de35, __VMLINUX_SYMBOL_STR(generic_file_write_iter) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x7346726, __VMLINUX_SYMBOL_STR(__test_set_page_writeback) },
	{ 0x99699c8b, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x759690a5, __VMLINUX_SYMBOL_STR(iter_file_splice_write) },
	{ 0xfe634f58, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0xc6ac0247, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x165aa1bb, __VMLINUX_SYMBOL_STR(iput) },
	{ 0xe70b95d, __VMLINUX_SYMBOL_STR(read_cache_page) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x785e9bf2, __VMLINUX_SYMBOL_STR(inode_dio_wait) },
	{ 0x13166964, __VMLINUX_SYMBOL_STR(ihold) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0xa9704c06, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0xe964b5d6, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0xabfcfac5, __VMLINUX_SYMBOL_STR(add_wait_queue_exclusive) },
	{ 0xfbf8b097, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0x666dcb7d, __VMLINUX_SYMBOL_STR(simple_follow_link) },
	{ 0x94bc2ed8, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0xf3029433, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x962892c, __VMLINUX_SYMBOL_STR(__bforget) },
	{ 0x88c1f206, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xdbc19951, __VMLINUX_SYMBOL_STR(__blockdev_direct_IO) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x3edb0e39, __VMLINUX_SYMBOL_STR(inode_set_flags) },
	{ 0xc20142f2, __VMLINUX_SYMBOL_STR(posix_acl_default_xattr_handler) },
	{ 0xff110287, __VMLINUX_SYMBOL_STR(mark_buffer_dirty) },
	{ 0x2bae716, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x8d7b3660, __VMLINUX_SYMBOL_STR(nobh_write_end) },
	{ 0xc4a16c87, __VMLINUX_SYMBOL_STR(write_one_page) },
	{ 0x58cf0e33, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0x9e332395, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x874a5c8, __VMLINUX_SYMBOL_STR(generic_file_splice_read) },
	{ 0xc260f4c0, __VMLINUX_SYMBOL_STR(dquot_free_inode) },
	{ 0xfbc4f89e, __VMLINUX_SYMBOL_STR(io_schedule_timeout) },
	{ 0x124f12d7, __VMLINUX_SYMBOL_STR(__wait_rcu_gp) },
	{ 0x5bb6b888, __VMLINUX_SYMBOL_STR(dquot_disable) },
	{ 0x7c953211, __VMLINUX_SYMBOL_STR(generic_fh_to_dentry) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0x1f5ace2b, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0x151d7638, __VMLINUX_SYMBOL_STR(page_put_link) },
	{ 0xb796b29d, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x719e5acf, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0xff0f01dd, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x62cb1d2b, __VMLINUX_SYMBOL_STR(nobh_truncate_page) },
	{ 0x22ec1c0b, __VMLINUX_SYMBOL_STR(filemap_flush) },
	{ 0x49569eb6, __VMLINUX_SYMBOL_STR(generic_block_bmap) },
	{ 0xca0ce487, __VMLINUX_SYMBOL_STR(clear_nlink) },
	{ 0x760a0f4f, __VMLINUX_SYMBOL_STR(yield) },
	{ 0x9cab699b, __VMLINUX_SYMBOL_STR(iget_locked) },
	{ 0x5317a7fc, __VMLINUX_SYMBOL_STR(filemap_fdatawrite) },
	{ 0xd0a8f7c0, __VMLINUX_SYMBOL_STR(inode_init_owner) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xd6138e0, __VMLINUX_SYMBOL_STR(truncate_inode_pages) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "A9761E816BD29DCE9C33EF2");
